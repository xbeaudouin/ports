PORTNAME=	zabbix4
PORTVERSION=	4.0.50
PORTREVISION?=	0
CATEGORIES=	net-mgmt
MASTER_SITES=	https://cdn.zabbix.com/zabbix/sources/stable/${PORTVERSION:R}/
PKGNAMESUFFIX?=	-server
DISTNAME=	zabbix-${PORTVERSION}

MAINTAINER=	otis@FreeBSD.org
COMMENT=	Enterprise-class open source distributed monitoring (${PKGNAMESUFFIX:S/^-//}) LTS
WWW=		https://www.zabbix.com/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Upstream EOL reaches on 2023-10-31
EXPIRATION_DATE=	2023-12-31

LIB_DEPENDS=	libpcre.so:devel/pcre

CONFLICTS_INSTALL=	zabbix[0-35-9]${PKGNAMESUFFIX} \
			zabbix[0-9][0-9]${PKGNAMESUFFIX}

ZABBIX_BUILD=	${PKGNAMESUFFIX:S/^-//}

.if ${ZABBIX_BUILD} != "agent"
CONFIGURE_ARGS+=	--cache-file=${WRKSRC}/config.cache \
			--with-libevent=${LOCALBASE}
LIB_DEPENDS+=		libevent.so:devel/libevent
USE_RC_SUBR=		zabbix_${ZABBIX_BUILD}
.else
USE_RC_SUBR=		zabbix_${ZABBIX_BUILD}d
.endif

USES=		iconv pkgconfig

USERS=		zabbix
GROUPS=		zabbix

.if ${ZABBIX_BUILD} != "proxy"
PLIST_SUB=	PROXY="@comment "
.else
PLIST_SUB=	PROXY=""
.endif

.if ${ZABBIX_BUILD} == "server"
PLIST_SUB+=	SERVER=""
.else
PLIST_SUB+=	SERVER="@comment "
.endif

PLIST_SUB+=	PORTVERSION=${PORTVERSION} \
		ZABBIX_BUILD=${ZABBIX_BUILD}
SUB_LIST=	ZABBIX_BUILD=${ZABBIX_BUILD}

MAKE_ARGS+=		ARCH=freebsd
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--datadir=${ETCDIR} \
			--enable-${ZABBIX_BUILD} \
			--sysconfdir=${ETCDIR} \
			--with-iconv=${ICONV_PREFIX}

.if ${ZABBIX_BUILD} != "agent" && ${ZABBIX_BUILD} != "java"
LIB_DEPENDS+=	libnetsnmp.so:net-mgmt/net-snmp

USES+=	localbase

SUB_FILES=	pkg-message

CONFIGURE_ARGS+=	--with-net-snmp

OPTIONS_DEFINE=	CURL FPING IPMI IPV6 JABBER LDAP LIBXML2 NMAP SSH UNIXODBC

OPTIONS_DEFAULT=	CURL FPING MYSQL OPENSSL UNIXODBC
OPTIONS_SUB=		yes

FPING_DESC=	Build/install fping for ping checks
IPMI_DESC=	Support for IPMI checks
JABBER_DESC=	Support for Jabber media type
LDAP_DESC=	Support for LDAP server checks
NMAP_DESC=	Build/install nmap for o/s detection
SSH_DESC=	Support for SSH-based checks
UNIXODBC_DESC=	Support for database checks via ODBC
LIBXML2_DESC=	Support for libxml2 (required by monitoring VMware)

OPTIONS_SINGLE=		DB SSL
OPTIONS_SINGLE_DB?=	MYSQL ORACLE PGSQL
OPTIONS_SINGLE_SSL=	GNUTLS OPENSSL

MYSQL_CONFIGURE_WITH=	mysql
MYSQL_USES+=		compiler:c11 mysql

PGSQL_CONFIGURE_WITH=	postgresql
PGSQL_USES+=		pgsql

SQLITE_CONFIGURE_WITH=	sqlite3
SQLITE_USES+=		sqlite:3

ORACLE_CONFIGURE_WITH=	oracle

LDAP_CONFIGURE_WITH=	ldap
LDAP_USES=		ldap

IPMI_CONFIGURE_WITH=	openipmi
IPMI_LIB_DEPENDS=	libOpenIPMI.so:sysutils/openipmi

JABBER_CONFIGURE_WITH=	jabber
JABBER_LIB_DEPENDS=	libiksemel.so:textproc/iksemel

FPING_RUN_DEPENDS=	fping:net/fping

SSH_CONFIGURE_WITH=	ssh2
SSH_LIB_DEPENDS=	libssh2.so:security/libssh2

UNIXODBC_CONFIGURE_WITH=	unixodbc
UNIXODBC_LIB_DEPENDS=		libodbc.so:databases/unixODBC
.elif ${ZABBIX_BUILD} == "agent"
OPTIONS_SINGLE=			SSL
OPTIONS_SINGLE_SSL=		GNUTLS OPENSSL
.endif # if ${ZABBIX_BUILD} != "agent" && ${ZABBIX_BUILD} != "java"

CURL_DESC=		Support for web monitoring
CURL_CONFIGURE_WITH=	libcurl
CURL_LIB_DEPENDS=	libcurl.so:ftp/curl

IPV6_CONFIGURE_ENABLE=	ipv6

NMAP_RUN_DEPENDS=	nmap:security/nmap \
			sudo:security/sudo

LIBXML2_CONFIGURE_WITH=	libxml2=${LOCALBASE}
LIBXML2_LIB_DEPENDS=	libxml2.so:textproc/libxml2

OPENSSL_CONFIGURE_WITH=	openssl
OPENSSL_USES=		ssl
OPENSSL_VARS=		BROKEN_SSL="libressl libressl-devel" \
			BROKEN_SSL_REASON="PSK is not provided by LibreSSL"

GNUTLS_CONFIGURE_WITH=	gnutls
GNUTLS_LIB_DEPENDS=	libgnutls.so:security/gnutls

.include <bsd.port.pre.mk>

post-patch:
	@${GREP} -rl "/etc/zabbix" ${WRKSRC} \
	  | ${XARGS} ${REINPLACE_CMD} -e 's#/usr/local/etc#${ETCDIR}#g'

	@${REINPLACE_CMD} -e 's#/usr/sbin/fping#${LOCALBASE}/sbin/fping#g' \
		${WRKSRC}/conf/zabbix_*.conf \
		${WRKSRC}/src/zabbix_proxy/proxy.c \
		${WRKSRC}/src/zabbix_server/server.c

.if ${ZABBIX_BUILD} == "server"
	@${REINPLACE_CMD} -e 's#/tmp/zabbix_server.pid#/var/run/zabbix/zabbix_server.pid#g' \
		${WRKSRC}/conf/zabbix_server.conf \
		${WRKSRC}/src/zabbix_server/server.c
.endif

.if ${ZABBIX_BUILD} == "proxy"
	@${REINPLACE_CMD} -e 's#/tmp/zabbix_proxy.pid#/var/run/zabbix/zabbix_proxy.pid#g' \
		${WRKSRC}/conf/zabbix_proxy.conf \
		${WRKSRC}/src/zabbix_proxy/proxy.c
.endif

.if ${ZABBIX_BUILD} == "agent"
	@${REINPLACE_CMD} -e 's#/tmp/zabbix_agentd.pid#/var/run/zabbix/zabbix_agentd.pid#g' \
		${WRKSRC}/conf/zabbix_agentd.conf \
		${WRKSRC}/src/zabbix_agent/zabbix_agentd.c
.endif

.if ${ZABBIX_BUILD} == "java"
	@${REINPLACE_CMD} -e 's#/tmp/zabbix_java.pid#/var/run/zabbix/zabbix_java.pid#g' \
		${WRKSRC}/src/zabbix_java/settings.sh
.endif

.if ${ZABBIX_BUILD} != "agent"
.  for d in mysql oracle postgresql sqlite3
	@${REINPLACE_CMD} \
		-e 's|/usr/bin/traceroute|/usr/sbin/traceroute|g' \
		-e 's|sudo /usr/bin/nmap|sudo ${LOCALBASE}/bin/nmap|g' \
		${WRKSRC}/database/${d}/data.sql
.  endfor
.endif
	@${FIND} ${WRKSRC} -type f \( -name '*.bak' -or -name '*.orig' \) \
		-exec ${RM} {} +

pre-configure:
	@echo "ac_cv_env_PKG_CONFIG_set=${LOCALBASE}/bin/pkgconf" > ${WRKSRC}/config.cache

post-install:
.if ${ZABBIX_BUILD} == "java"
	${MV} ${STAGEDIR}${PREFIX}/sbin/zabbix_java/settings.sh \
		${STAGEDIR}${PREFIX}/sbin/zabbix_java/settings.sh.sample
	@${MKDIR} ${STAGEDIR}/var/run/zabbix
.endif

.if ${ZABBIX_BUILD} != "agent" && ${ZABBIX_BUILD} != "java"
	${MKDIR} ${STAGEDIR}${DATADIR}/${ZABBIX_BUILD:Q}/database
	@${RM} ${WRKSRC}/database/*/Makefile*
	(cd ${WRKSRC}/database/ && \
		${COPYTREE_SHARE} "ibm_db2 mysql oracle postgresql sqlite3" \
		${STAGEDIR}${DATADIR}/${ZABBIX_BUILD:Q}/database/)

	${MV} ${STAGEDIR}${ETCDIR}/zabbix_${ZABBIX_BUILD}.conf \
		${STAGEDIR}${ETCDIR}/zabbix_${ZABBIX_BUILD}.conf.sample
.endif

.if ${ZABBIX_BUILD} == "agent"
	${MV} ${STAGEDIR}${ETCDIR}/zabbix_${ZABBIX_BUILD}d.conf \
		${STAGEDIR}${ETCDIR}/zabbix_${ZABBIX_BUILD}d.conf.sample
.endif

.include <bsd.port.post.mk>

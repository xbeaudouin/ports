PORTNAME=	geonext
PORTVERSION=	1.74
CATEGORIES+=	math education graphics java
MASTER_SITES=	http://geonext.uni-bayreuth.de/data/download/${PORTVERSION}/
DISTNAME=	geonext.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interactive (dynamic) elementary Geometry Software
WWW=		http://www.geonext.de

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/license.txt

DEPRECATED=	Last upstream release was in 2014
EXPIRATION_DATE=	2023-12-05

USES=		zip
USE_JAVA=	yes

NO_BUILD=	yes
SUB_FILES=	geonext
SUB_LIST+=	JAVA="${LOCALBASE}/bin/java" LANG=${WITH_LANG}

WRKSRC=		${WRKDIR}/geonext_install

PLIST_SUB+=	LANG=${WITH_LANG}

DATA=	cacerts didmat.crt geonext-batik.jar geonext.html geonext.jar \
	help.jar help_de.jar help_fr.jar help_gr.jar help_it.jar \
	help_uk.jar index.html license.txt

IMG=	geoint.png gxt.gif ubt.gif x.ico xwc.ico

#available languages:
#  al, ar, bg, cz, da, de, en, es, fi, fr, gr, hu,
#  it, ja, lv, mk, nb, nn, no, pl, pt_BR, ro, ru,
#  sk, sl, uk, vn, zh_CN, zh_TW
#
# default: en
.if !defined(WITH_LANG)
MASTER=		yes
PLIST_SUB+=	MASTER=""
WITH_LANG=	en
.else
PLIST_SUB+=	MASTER="@comment "
.endif

# For the slave ports
.if ${WITH_LANG} != "en"
PKGNAMEPREFIX=	${WITH_LANG}-
.endif

.include <bsd.port.pre.mk>

.if defined(MASTER)
pre-everything::
	@${ECHO_MSG} ""
	@${ECHO_MSG} "N - O - T - E"
	@${ECHO_MSG} ""
	@${ECHO_MSG} "WITH_LANG=lang     - Choose language"
	@${ECHO_MSG} "Default language: en"
	@${ECHO_MSG} ""
	@${ECHO_MSG} "available languages:"
	@${ECHO_MSG} " al, ar, bg, cz, da, de, en, es, fi, fr, gr, hu,"
	@${ECHO_MSG} " it, ja, lv, mk, nb, nn, no, pl, pt_BR, ro, ru,"
	@${ECHO_MSG} " sk, sl, uk, vn, zh_CN, zh_TW"
	@${ECHO_MSG} "-------------------------------------------------"
	@${ECHO_MSG} ""
	@${ECHO_MSG} "example: make WITH_LANG=fr install"
	@${ECHO_MSG} ""
	@${ECHO_MSG} "Your current setting is:"
	@${ECHO_MSG} ""
	@${ECHO_MSG} "WITH_LANG=${WITH_LANG}"
	@${ECHO_MSG} ""
.endif

do-install::
.if defined(MASTER)
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${DATA:S|^|${WRKSRC}/|} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${IMG:S|^|${WRKSRC}/|} ${STAGEDIR}${DATADIR}
.endif
	${INSTALL_SCRIPT} ${WRKDIR}/geonext ${STAGEDIR}${PREFIX}/bin/geonext-${WITH_LANG}

.include <bsd.port.post.mk>

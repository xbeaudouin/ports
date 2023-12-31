PORTNAME=	docbook
PORTVERSION=	5.0
PORTREVISION=	3
CATEGORIES=	textproc
MASTER_SITES=	${DBFILES:C,(.*):(.*),https://docbook.org/xml/\1/:\2,:C,:docbook-xml-([0-9]+).([0-9]+).?([0-9]*),:db\1\2\3,:C,:docbook-([0-9]+).([0-9]+).?([0-9]*),:db\1\2\3,}
PKGNAMESUFFIX=	-xml
DISTFILES=	${DBFILES:C,.*:(.*),\1.zip:\1,:C,:docbook-xml-([0-9]+).([0-9]+).?([0-9]*),:db\1\2\3,:C,:docbook-([0-9]+).([0-9]+).?([0-9]*),:db\1\2\3,}

MAINTAINER=	doceng@FreeBSD.org
COMMENT=	DocBook XML DTD
WWW=		https://www.oasis-open.org/docbook/

LICENSE=	DOCBOOK
LICENSE_NAME=	DocBook License
LICENSE_FILE=	${FILESDIR}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${LOCALBASE}/share/xml/xmlcharent/catalog.xml:textproc/xmlcharent \
		xmlcatmgr:textproc/xmlcatmgr
RUN_DEPENDS=	${LOCALBASE}/share/xml/xmlcharent/catalog.xml:textproc/xmlcharent \
		xmlcatmgr:textproc/xmlcatmgr

NO_ARCH=	yes
NO_BUILD=	yes

DBFILES=4.1.2:docbkx412 4.2:docbook-xml-4.2 4.3:docbook-xml-4.3 \
	4.4:docbook-xml-4.4 4.5:docbook-xml-4.5 5.0:docbook-5.0

DBKDIR=		share/xml/docbook
DBCAT_XML=	${PREFIX}/${DBKDIR}/catalog.xml
DBCAT_SGML=	${PREFIX}/${DBKDIR}/catalog
PLIST_SUB=	DBKDIR=${DBKDIR}

do-extract:
	@${RM} -r ${WRKDIR}
	@${MKDIR} ${WRKDIR}
.for df in ${DISTFILES:C,:.*,,}
	@cd ${WRKDIR} && ${TAR} \
		${EXTRACT_BEFORE_ARGS} ${DISTDIR}/${df} \
		${EXTRACT_AFTER_ARGS} -s ,^,${df:R}/,
.endfor

post-extract:
	@${MV} ${WRKDIR}/docbook-5.0/docbook-5.0/* ${WRKDIR}/docbook-5.0
	@${RMDIR} ${WRKDIR}/docbook-5.0/docbook-5.0

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${DBKDIR}
	${ECHO_CMD} "CATALOG \"${LOCALBASE}/share/xml/xmlcharent/catalog\"" \
	    > ${STAGEDIR}${DBCAT_SGML}
	xmlcatmgr -c ${STAGEDIR}${DBCAT_XML} create
	xmlcatmgr -c ${STAGEDIR}${DBCAT_XML} \
	    add nextCatalog "${LOCALBASE}/share/xml/xmlcharent/catalog.xml"

.for D in ${DBFILES:C,:.*,,}
do-install-${D:S/./_/g}:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${DBKDIR}/$D
	cd ${WRKDIR}/${DBFILES:M${D}\:*:C,.*:,,} && \
	    ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/${DBKDIR}/$D
	xmlcatmgr -c ${STAGEDIR}${DBCAT_XML} \
	    add nextCatalog "${PREFIX}/${DBKDIR}/$D/catalog.xml"
	test "$D" = 5.0 || test "$D" = 4.1.2 || \
	    ${ECHO_CMD} "CATALOG \"${PREFIX}/${DBKDIR}/$D/docbook.cat\"" \
	    >> ${STAGEDIR}${DBCAT_SGML}
do-install: do-install-${D:S/./_/g}
.endfor

post-install:
	${INSTALL_DATA} ${FILESDIR}/catalog412.xml \
	    ${STAGEDIR}${PREFIX}/${DBKDIR}/4.1.2/catalog.xml

.include <bsd.port.mk>

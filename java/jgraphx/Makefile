PORTNAME=	jgraphx
PORTVERSION=	4.2.2
DISTVERSIONPREFIX=	v
CATEGORIES=	java graphics

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java Graph Diagram Component version X
WWW=		https://github.com/jgraph/jgraphx

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/license.txt

USE_GITHUB=	yes
GH_ACCOUNT=	jgraph
USE_JAVA=	yes
USE_ANT=	yes

NO_ARCH=	yes

PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}.jar
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

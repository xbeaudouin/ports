PORTNAME=	flexdock
PORTVERSION=	1.2.4
CATEGORIES=	devel java
MASTER_SITES=	http://forge.scilab.org/index.php/p/${PORTNAME}/downloads/get/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Swing windowing and docking framework
WWW=		https://forge.scilab.org/index.php/p/flexdock/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_ANT=	yes
USE_JAVA=	yes

ALL_TARGET=	dist
NO_ARCH=	yes

PLIST_FILES=	${JAVAJARDIR}/flexdock.jar
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_DATA}	${WRKSRC}/build/${PORTNAME}-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/build/docs && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>

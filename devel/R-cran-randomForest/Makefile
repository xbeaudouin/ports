PORTNAME=	randomForest
DISTVERSION=	4.6-14
PORTREVISION=	4
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Classification based on a forest of trees using random inputs
WWW=		https://cran.r-project.org/web/packages/randomForest/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	R-cran-RColorBrewer>=1.0.5_6:graphics/R-cran-RColorBrewer

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>

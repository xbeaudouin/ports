PORTNAME=	prettyunits
PORTVERSION=	1.2.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Pretty, Human Readable Formatting of Quantities
WWW=		https://cran.r-project.org/web/packages/prettyunits/

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-assertthat>0:math/R-cran-assertthat
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>

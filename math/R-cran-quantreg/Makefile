PORTNAME=	quantreg
PORTVERSION=	5.97
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Quantile Regression
WWW=		https://cran.r-project.org/web/packages/quantreg/

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-MatrixModels>0:math/R-cran-MatrixModels \
		R-cran-SparseM>0:math/R-cran-SparseM
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>

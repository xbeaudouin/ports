PORTNAME=	muparserx
DISTVERSIONPREFIX=	v
DISTVERSION=	4.0.12
CATEGORIES=	math devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ math parser library with array and string support
WWW=		https://beltoforion.de/en/muparserx/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++11-lang
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	beltoforion

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	BUILD_EXAMPLES

.include <bsd.port.mk>

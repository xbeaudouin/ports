PORTNAME=	libemos
DISTVERSION=	4.5.9
DISTVERSIONSUFFIX=	-Source
PORTREVISION=	4
CATEGORIES=	misc
MASTER_SITES=	https://confluence.ecmwf.int/download/attachments/3473472/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Interpolation library for meteorological software
WWW=		https://confluence.ecmwf.int/display/EMOS/Emoslib

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libeccodes.so:science/eccodes \
		libfftw3.so:math/fftw3 \
		libpng.so:graphics/png

USES=		cmake:noninja compiler:c11 fortran localbase:ldflags

CMAKE_ON=	BUILD_SHARED_LIBS # not respected: https://jira.ecmwf.int/browse/SUP-2691
CMAKE_OFF=	HAVE_TESTS

FFLAGS+=	-std=legacy
LDFLAGS+=	-leccodes

post-stage: # installs the file from eccodes: https://jira.ecmwf.int/browse/SUP-2693
	@${RM} ${STAGEDIR}${PREFIX}/bin/bufr_filter

.include <bsd.port.mk>

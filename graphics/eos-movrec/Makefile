PORTNAME=	eos-movrec
DISTVERSION=	0.3.2_beta
PORTREVISION=	6
CATEGORIES=	graphics multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTVERSION}/

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Capture short movies with Canon DSLR camera
WWW=		https://sourceforge.net/projects/eos-movrec/

LICENSE=	GPLv2

LIB_DEPENDS=	libgphoto2.so:graphics/libgphoto2

USES=		cmake compiler:c++11-lang dos2unix pkgconfig qt:5 tar:bzip2
DOS2UNIX_FILES=	main.cpp
USE_QT=		buildtools:build qmake:build core gui widgets

ICON_SIZES=	16x16 32x32 128x128 256x256 512x512

DESKTOP_ENTRIES="EOS Camera Movie Recorder" "" "${PORTNAME}" \
		"eos_movrec" "Graphics;Photography;Qt;" ""

post-patch:
	@${REINPLACE_CMD} -e 's,GLIBC,${OPSYS},' ${WRKSRC}/mjpegwrt.c \
		${WRKSRC}/os_api.h
	@${REINPLACE_CMD} -e '/int/s,register ,,' ${WRKSRC}/histogramwnd.cpp
.for s in 16 32 128 256 512
	@cd ${WRKSRC}/mac.icons && \
		${MV} ${s}.png ${PORTNAME}_${s}x${s}.png
.endfor

post-install:
.for s in ${ICON_SIZES}
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}/apps/
	${INSTALL_DATA} ${WRKSRC}/mac.icons/${PORTNAME}_${s}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}/apps/${PORTNAME}.png
.endfor
	${LN} -sf ../icons/hicolor/32x32/apps/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/

.include <bsd.port.mk>

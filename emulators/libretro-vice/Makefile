PORTNAME=	libretro-vice
DISTVERSION=	0.20231006
CATEGORIES=	emulators games
PKGNAMESUFFIX=	-${FLAVOR}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	${${FLAVOR}_COMMENT}
WWW=		https://github.com/libretro/vice-libretro

LICENSE=	GPLv2

FLAVORS=	x64 x128 x64sc xcbm2 xcbm5x0 xpet xplus4 xscpu64 xvic
FLAVOR?=	${FLAVORS:[1]}

USES=		compiler:c11 gmake

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	vice-libretro
GH_TAGNAME=	f3542eb9ce3ad7284e2bb69e68bbc10596774b40

MAKE_ARGS=	EMUTYPE=${FLAVOR}
PLIST_FILES=	lib/libretro/vice_${FLAVOR}_libretro.so

x128_COMMENT=		Commodore C128 core for libretro API
x64_COMMENT=		Commodore C64 core for libretro API
x64sc_COMMENT=		Commodore C64 core for libretro API focused on accuracy
xcbm2_COMMENT=		Commodore CBM-6x0/7x0 core for libretro API
xcbm5x0_COMMENT=	Commodore C64 core for libretro API focused on accuracy
xpet_COMMENT=		Commodore PET core for libretro API
xplus4_COMMENT=		Commodore PLUS4 core for libretro API
xscpu64_COMMENT=	Commodore C64+SuperCPU core for libretro API
xvic_COMMENT=		Commodore VIC20 core for libretro API

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro
	${INSTALL_LIB} ${WRKSRC}/${COREDIR}/vice_${FLAVOR}_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro

.include <bsd.port.mk>

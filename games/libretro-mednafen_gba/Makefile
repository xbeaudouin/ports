PORTNAME=	libretro-mednafen_gba
DISTVERSION=	0.20210918
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standalone port of Mednafen GBA to libretro
WWW=		https://github.com/libretro/beetle-gba-libretro

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	beetle-gba-libretro
GH_TAGNAME=	38182572571a48cb58057cde64b915237c4e2d58

PLIST_FILES=	lib/libretro/mednafen_gba_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro
	${INSTALL_LIB} ${WRKSRC}/mednafen_gba_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro

.include <bsd.port.mk>

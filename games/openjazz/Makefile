PORTNAME=	openjazz
PORTVERSION=	20231028
CATEGORIES=	games

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Free re-implementation of the Jazz Jackrabbit(tm) game engine
WWW=		http://alister.eu/jazz/oj

LICENSE=	GPLv2

USES=	dos2unix gmake sdl xorg
USE_XORG=	x11 xext xrandr xrender xau xdmcp
USE_SDL=	sdl

USE_GITHUB=	yes
GH_ACCOUNT=	AlisterT

DOS2UNIX_REGEX=	.*\.(h|cpp)
ALL_TARGET=	OpenJazz

CXXFLAGS+=	-I${LOCALBASE}/include `${SDL_CONFIG} --cflags` \
		-DDATAPATH=\\\"${DATADIR}/\\\" -DHOMEDIR
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib `${SDL_CONFIG} --libs`

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${TOUCH} ${STAGEDIR}${DATADIR}/.keepme
	${INSTALL_PROGRAM} ${WRKSRC}/OpenJazz ${STAGEDIR}${PREFIX}/bin/openjazz

.include <bsd.port.mk>

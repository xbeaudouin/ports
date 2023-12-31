PORTNAME=	cataclysm-dda
DISTVERSION=	0.G
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	games

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Roguelike set in a post-apocalyptic world
WWW=		https://cataclysmdda.org

LICENSE=	CC-BY-SA-3.0
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

FLAVORS=	curses tiles
FLAVOR?=	curses
FLAVORS_SUB=	yes

tiles_PKGNAMESUFFIX=		-tiles
curses_CONFLICTS_INSTALL=	cataclysm-dda-tiles
tiles_CONFLICTS_INSTALL=	cataclysm-dda

USES=		cmake compiler:c++14-lang
USE_GITHUB=	yes
GH_ACCOUNT=	CleverRaven
GH_PROJECT=	Cataclysm-DDA

CMAKE_OFF=	BACKTRACE TESTS
CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_Git

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext-tools
NLS_CMAKE_OFF=	-DLOCALIZE=OFF
PORTDOCS=	*

.if ${FLAVOR} == tiles

USES+=		pkgconfig sdl
USE_SDL=	image2 mixer2 ttf2
CMAKE_ON+=	SOUND TILES

.else

USES+=		ncurses
CMAKE_ARGS+=	-DCURSES_INCLUDE_PATH:STRING="${NCURSESINC}"

.endif

PORTSCOUT=	limit:^0\.[A-Z]

post-patch:
	@${REINPLACE_CMD} -e 's|%%DISTVERSION%%|${DISTVERSION}|' ${WRKSRC}/src/version.cmake

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/cataclysm.6 ${STAGEDIR}${PREFIX}/share/man/man6
	${INSTALL_MAN} ${WRKSRC}/doc/cataclysm-tiles.6 ${STAGEDIR}${PREFIX}/share/man/man6

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

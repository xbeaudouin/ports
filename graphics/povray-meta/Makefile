PORTNAME=	povray-meta
PORTVERSION=	0.1
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	bsd@philippost.de
COMMENT=	Meta port for all povray ports

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	bin/povray

POV_VERSIONS_ALL=	37 38
#By default only the following version will be installed and
#link bin/povray -> bin/povray${DEFAULT_VER} will be created.
DEFAULT_VER?=	37
#Additional version can be installed by defining WITH_POVRAY${ver}.
#To change version linked by default define WITH_DEFAULT${ver}.
#Please, note that only one of WITH_DEFAULT* can be set at once.

OPTIONS_MULTI=	POVRAY
OPTIONS_SINGLE=	DEFAULT

OPTIONS_DEFAULT=	POVRAY${DEFAULT_VER} DEFAULT${DEFAULT_VER}

.for ver in ${POV_VERSIONS_ALL}
POVRAY${ver}_BIN=	povray${ver}
POVRAY${ver}_PORT=	graphics/povray${ver}

OPTIONS_MULTI_POVRAY+=	POVRAY${ver}
OPTIONS_SINGLE_DEFAULT+=	DEFAULT${ver}

POVRAY${ver}_DESC=	Install graphics/povray${ver}
DEFAULT${ver}_DESC=	Create link bin/povray -> bin/povray${ver}
.endfor

.include <bsd.port.options.mk>

.for ver in ${POV_VERSIONS_ALL}
. if ${PORT_OPTIONS:MDEFAULT${ver}}
.  if !${PORT_OPTIONS:MPOVRAY${ver}}
PORT_OPTIONS+=	POVRAY${ver}
.  endif
POV_VERSION=	${ver}
. endif
. if ${PORT_OPTIONS:MPOVRAY${ver}}
RUN_DEPENDS+=	${LOCALBASE}/bin/${POVRAY${ver}_BIN}:${POVRAY${ver}_PORT}
. endif
.endfor

do-install:
	${LN} -s ${POVRAY${POV_VERSION}_BIN} ${STAGEDIR}${PREFIX}/bin/povray

.include <bsd.port.mk>

PORTNAME=	libfvde
PORTVERSION=	20220915
DISTVERSIONPREFIX=	experimental-
CATEGORIES=	sysutils
MASTER_SITES=	https://github.com/libyal/libfvde/releases/download/${PORTVERSION}/ \
		LOCAL/antoine

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Library and tools for reading FileVault (FVDE) encrypted volumes
WWW=		https://github.com/libyal/libfvde

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-python --with-openssl=no
CONFIGURE_ENV=	PYTHON_CONFIG=${PYTHON_CMD}-config
USES=		fuse libtool pathfix pkgconfig python
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=	NLS

NLS_USES=	gettext
NLS_CONFIGURE_ON=	--with-libintl-prefix=${LOCALBASE}
NLS_CONFIGURE_OFF=	--disable-nls

.include <bsd.port.mk>

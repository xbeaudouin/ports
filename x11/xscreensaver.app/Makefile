PORTNAME=	XScreenSaver.App
PORTVERSION=	2.3
PORTREVISION=	4
CATEGORIES=	x11 windowmaker
MASTER_SITES=	SF/xscreensaverapp/${PORTNAME}/${PORTVERSION}

MAINTAINER=	hemi@puresimplicity.net
COMMENT=	WindowMaker dockapp to control XScreenSaver
WWW=		https://xscreensaverapp.sourceforge.net/

LIB_DEPENDS=	libdockapp.so:x11-wm/libdockapp

PLIST_FILES=	bin/XScreenSaver.App
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ARGS=	"LDFLAGS+=-L${LOCALBASE}/lib -lX11"

.include <bsd.port.mk>

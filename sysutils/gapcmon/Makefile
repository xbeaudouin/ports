PORTNAME=	gapcmon
PORTVERSION=	0.8.9
PORTREVISION=	9
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Monitor apcupsd with GTK 2 GUI
WWW=		https://gapcmon.sourceforge.net/

LICENSE=	GPLv2

SUB_FILES=	pkg-message
USES=		pkgconfig gmake gnome tar:bzip2 xorg
USE_GNOME=	gconf2 gtk20
USE_XORG=	x11
GNU_CONFIGURE=	yes
LIBS+=		-L${LOCALBASE}/lib -lX11

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>

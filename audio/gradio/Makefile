PORTNAME=	gradio
PORTVERSION=	7.3
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	audio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK3 app for finding and listening to internet radio stations
WWW=		https://github.com/haecker-felix/gradio

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.md

DEPRECATED=	BROKEN for more than a year
EXPIRATION_DATE=	2023-11-30
BROKEN=		Does not build against current vala

LIB_DEPENDS=	libsoup-2.4.so:devel/libsoup \
		libjson-glib-1.0.so:devel/json-glib

USES=		gettext gnome gstreamer meson pkgconfig python:env sqlite vala:build
USE_GITHUB=	yes
GH_ACCOUNT=	haecker-felix
GH_PROJECT=	Gradio
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30
GLIB_SCHEMAS=	de.haeckerfelix.gradio.gschema.xml
USE_GSTREAMER=	mpg123 soup

post-patch:
	${REINPLACE_CMD} -e "s,python3,${PYTHON_CMD}," ${WRKSRC}/meson_post_install.sh

.include <bsd.port.mk>

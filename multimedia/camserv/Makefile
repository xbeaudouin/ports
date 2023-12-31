PORTNAME=	camserv
PORTVERSION=	0.5.1
PORTREVISION=	21
PORTEPOCH=	1
CATEGORIES=	multimedia
MASTER_SITES=	SF/cserv/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free program to do streaming video via the web
WWW=		https://cserv.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libltdl.so:devel/libltdl

USES=		autoreconf jpeg libtool
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=		BKTR IMLIB2 PIXBUF V4L DOCS
OPTIONS_DEFAULT=	BKTR IMLIB2
.if !exists(/usr/include/dev/bktr/ioctl_bt848.h)
OPTIONS_EXCLUDE=	BKTR
.endif
OPTIONS_SUB=		yes

BKTR_DESC=	bktr(4) support

IMLIB2_LIB_DEPENDS=	libImlib2.so:graphics/imlib2
IMLIB2_CONFIGURE_OFF=	ac_cv_path_IMLIB2_CONFIG=no

PIXBUF_USES=	gnome
PIXBUF_USE=	GNOME=gdkpixbuf
PIXBUF_CONFIGURE_OFF=	ac_cv_path_GDKPIXBUF_CONFIG=no

V4L_BUILD_DEPENDS=	v4l_compat>0:multimedia/v4l_compat
V4L_CONFIGURE_OFF=	ac_cv_header_linux_videodev_h=no

post-patch:
.for i in common/Makefile.am relay/Makefile.am
	@${REINPLACE_CMD} -e \
		'/^CFLAGS/s|-g||' ${WRKSRC}/${i}
.endfor

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} README javascript.txt \
		${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>

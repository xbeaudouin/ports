PORTNAME=	9box
PORTVERSION=	0.2.1
PORTREVISION=	3
CATEGORIES=	x11
MASTER_SITES=	LOCAL/thierry

MAINTAINER=	ports@FreeBSD.org
COMMENT=	9box can "pack" windows inside itself
WWW=		http://savannah.nongnu.org/projects/9box/

PLIST_FILES=	bin/9box
USES=		gmake xorg
USE_XORG=	xbitmaps x11 xt

BUILD_WRKSRC=	${WRKSRC}/src

# Dead upstream. Don't expect a proper fix.
CFLAGS+=	-fcommon

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g; \
		s|%%CC%%|${CC}|g' \
		${WRKSRC}/src/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/9box ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

PORTNAME=	umodplayer
PORTVERSION=	0.b5.1
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/UModPlayer%20B5
DISTNAME=	${PORTNAME}_${PORTVERSION:S/^0.//:tu}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Console module player
WWW=		https://umodplayer.sourceforge.net/

LICENSE=	PD

LIB_DEPENDS=	libaiff.so:audio/libaiff \
		libmodplug.so:audio/libmodplug \
		libao.so:audio/libao

USES=		localbase:ldflags
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}

PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

post-patch:
	@${REINPLACE_CMD} -e \
		'/CFLAGS/s| =| +=| ; \
		 /CFLAGS/s| -O2| $$(CPPFLAGS)|g ; \
		 /^@/d' ${WRKSRC}/${MAKEFILE}.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1/

.include <bsd.port.mk>

PORTNAME=	najitool
PORTVERSION=	0.8.4
DISTVERSIONSUFFIX=	.src
PORTREVISION=	2
CATEGORIES=	misc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates, converts, and filters files
WWW=		https://najitool.sourceforge.net/

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libnaji.a:devel/libnaji

PLIST_FILES=	bin/najitool

post-patch:
	@${REINPLACE_CMD} -e \
		'/^cc/s|=.*|= $${CC}| ; \
		 /^ld/s|=.*|= $${CC}| ; \
		 /^cflags/s|=.*|= $${CFLAGS} -I$${LOCALBASE}/include| ; \
		 s| libnaji.a| $${LOCALBASE}/lib/libnaji.a|' \
		${WRKSRC}/${MAKEFILE}

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} najitool ${STAGEDIR}${PREFIX}/bin)

.include <bsd.port.mk>

PORTNAME=	fowsr
PORTVERSION=	${FILEVER}
PORTREVISION=	1
CATEGORIES=	astro

MAINTAINER=	netchild@FreeBSD.org
COMMENT=	Fine Offset Weather Station Reader
WWW=		https://github.com/apachler/fowsr

LICENSE=	GPLv3

FILEVER=	2.0
WRKSRC_SUBDIR=	${PORTNAME}.src

USE_GITHUB=	yes
GH_ACCOUNT=	apachler
GH_TAGNAME=	571db38

USES=		gmake dos2unix

PLIST_FILES=	bin/fowsr

post-patch:
	${REINPLACE_CMD} 's:gcc:${CC} ${CFLAGS}:g' ${WRKSRC}/Makefile
	${REINPLACE_CMD} 's:/usr/bin/fowsr:fowsr:g ; s://var//://var/tmp//:g' \
	    ${WRKSRC}/*.sh ${WRKSRC}/fowsr.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fowsr ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>

PORTNAME=	swiggle
PORTVERSION=	0.4
PORTREVISION=	10
CATEGORIES=	www
MASTER_SITES=	http://homepage.univie.ac.at/l.ertl/swiggle/files/ \
		http://bsd-geek.de/FreeBSD/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line web image gallery generator
WWW=		http://homepage.univie.ac.at/l.ertl/swiggle/

LICENSE=	BSD4CLAUSE

LIB_DEPENDS=	libexif.so:graphics/libexif

USES=		jpeg

OPTIONS_DEFINE=	DOCS

post-patch:
	${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/swiggle ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

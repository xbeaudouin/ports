PORTNAME=	pbimaker
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	SF/makeapbi/makeapbi/

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	Program to convert ports into PBI modules
WWW=		https://makeapbi.sourceforge.net/

LICENSE=	BSD3CLAUSE

WRKSRC=		${WRKDIR}/PBIMaker

PLIST_FILES=	bin/pbimaker \
		share/pbimaker/defaulticon.png

post-patch:
	@${REINPLACE_CMD} -e 's|CC=gcc|CC?=gcc|' \
		-e 's|PREFIX)/|DESTDIR)$$(&|g' \
		${WRKSRC}/Makefile
post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>

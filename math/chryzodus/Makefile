PORTNAME=	chryzodus
PORTVERSION=	0.32
DISTVERSIONSUFFIX=	-src
PORTREVISION=	4
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Chryzode (http//www.chryzode.org) explorer
WWW=		https://chryzodus.sourceforge.net/

LICENSE=	GPLv2

LIB_DEPENDS=	liballeg.so:devel/allegro

WRKSRC=		${WRKDIR}/${PORTNAME}
MAKEFILE=	makefile.unx

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc && \
	${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>

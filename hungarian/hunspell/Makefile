PORTNAME=	hunspell
PORTVERSION=	1.6.1
CATEGORIES=	hungarian textproc
MASTER_SITES=	SF/magyarispell/Magyar%20Ispell/${PORTVERSION}
DISTNAME=	hu_HU-${PORTVERSION}

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Hunspell Hungarian dictionary
WWW=		https://magyarispell.sourceforge.net/

LICENSE=	GPLv2 LGPL21 MPL11
LICENSE_COMB=	dual

NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/hu_HU-${PORTVERSION}

PLIST_FILES=	${DATADIR}/hu_HU.aff \
		${DATADIR}/hu_HU.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hu_HU.aff ${WRKSRC}/hu_HU.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>

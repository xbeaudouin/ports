PORTNAME=	hyphen
PORTVERSION=	4.3
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/bgoffice/OpenOffice.org%20Hyphenation%20BG/${PORTVERSION}/
PKGNAMEPREFIX=	bg-
DISTNAME=	OOo-hyph-bg-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Bulgarian hyphenation rules
WWW=		https://bgoffice.sourceforge.net

LICENSE=	GPLv2 LGPL21 MPL11
LICENSE_COMB=	dual
LICENSE_FILE_GPLv2=	${WRKSRC}/GPL-2.0.txt
LICENSE_FILE_LGPL21=	${WRKSRC}/LGPL-2.1.txt
LICENSE_FILE_MPL11=	${WRKSRC}/MPL-1.1.txt

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/hyph_bg_BG.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_bg_BG.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>

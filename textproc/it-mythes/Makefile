PORTNAME=	mythes
DISTVERSION=	02_09_l
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/linguistico/Thesaurus%20OOo%202.x.x/${DISTVERSION}_2008_11_29/
PKGNAMEPREFIX=	it-
DISTNAME=	thesaurus2_it_${DISTVERSION}_2008_11_29
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Italian thesaurus
WWW=		https://linguistico.sourceforge.net/pages/thesaurus_italiano.html

LICENSE=	AGPLv3

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	${DATADIR}/th_it_IT.dat \
		${DATADIR}/th_it_IT.idx

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/th_it_IT.dat ${WRKSRC}/th_it_IT.idx ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>

PORTNAME=	hyphen
PORTVERSION=	2016.02.10
CATEGORIES=	textproc
MASTER_SITES=	http://sourceforge.net/projects/aoo-extensions/files/1204/14/
PKGNAMEPREFIX=	it-
DISTNAME=	dict-it
EXTRACT_SUFX=	.oxt
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Italian hyphenation rules
WWW=		https://linguistico.sourceforge.net/pages/start.html

LICENSE=	LGPL21

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	${DATADIR}/hyph_it_CH.dic \
		${DATADIR}/hyph_it_IT.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/dictionaries/hyph_it_IT.dic \
		${STAGEDIR}${DATADIR}/
	${LN} -s hyph_it_IT.dic ${STAGEDIR}${DATADIR}/hyph_it_CH.dic

.include <bsd.port.mk>

PORTNAME=	hyphen
PORTVERSION=	3.3.10
CATEGORIES=	textproc
MASTER_SITES=	SF/rospell/Romanian%20dictionaries/dict-${PORTVERSION}/
PKGNAMEPREFIX=	ro-
DISTNAME=	hyph_ro_RO.${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Romanian hyphenation rules
WWW=		https://rospell.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING.GPL

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	${DATADIR}/hyph_ro_RO.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_ro_RO.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>

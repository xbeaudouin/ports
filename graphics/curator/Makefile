PORTNAME=	curator
PORTVERSION=	2.1
PORTREVISION=	8
CATEGORIES=	graphics www python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Static Image Gallery Generator for web or CD-ROM galleries
WWW=		https://curator.sourceforge.net/

USES=		magick:6,run python
USE_PYTHON=	distutils autoplist concurrent optsuffix

CONFLICTS_INSTALL=	py*-elasticsearch-curator

PLIST_FILES=	man/man1/curator.1.gz

post-install:
	${INSTALL_MAN} ${FILESDIR}/curator.1 ${STAGEDIR}${PREFIX}/man/man1/curator.1

.include <bsd.port.mk>

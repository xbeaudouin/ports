PORTNAME=	ffe
DISTVERSION=	0.3.9
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/ff-extractor/ff-extractor/${DISTVERSION}

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	Flat file extractor
WWW=		https://ff-extractor.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		makeinfo localbase

GNU_CONFIGURE=	yes
CFLAGS+=	-std=gnu89	# Requires GNU89 inline semantics.

INFO=		ffe
PORTDOCS=	ffe.html
PLIST_FILES=	bin/ffe man/man1/ffe.1.gz

OPTIONS_DEFINE=		DOCS GCRYPT
GCRYPT_CONFIGURE_WITH=	libgcrypt-prefix="${LOCALBASE}"
GCRYPT_LIB_DEPENDS=	libgcrypt.so:security/libgcrypt

.include <bsd.port.mk>

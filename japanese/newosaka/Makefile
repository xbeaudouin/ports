PORTNAME=	newosaka
PORTVERSION=	1.0
CATEGORIES+=	japanese
MASTER_SITES=	PORTS_JP
DISTFILES=	new-osaka.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Translator of Japanese EUC documents into Osaka language

DEPRECATED=	BROKEN on all supported versions for more than 4 years after the EOL of 12
EXPIRATION_DATE=	2023-12-31
BROKEN_FreeBSD_13=	ld: error: undefined symbol: gets
BROKEN_FreeBSD_14=	ld: error: undefined symbol: gets

PLIST_FILES=	bin/osaka
WRKSRC=		${WRKDIR}/${PORTNAME}

do-build:
	(cd ${WRKSRC}; ${CC} ${CFLAGS} -o osaka osaka.c -I${WRKSRC})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/osaka ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

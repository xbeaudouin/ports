PORTNAME=	noto
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	https://noto-website-2.storage.googleapis.com/pkgs/
PKGNAMESUFFIX=	-basic
DISTNAME=	Noto-hinted

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google Noto Fonts family (Basic)
WWW=		https://fonts.google.com/noto

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/LICENSE_OFL.txt

USES=		fonts zip

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

BASIC_FONTS=	NotoSans-Bold.ttf \
		NotoSans-BoldItalic.ttf \
		NotoSans-Italic.ttf \
		NotoSans-Regular.ttf \
		NotoSansMono-Bold.ttf \
		NotoSansMono-Regular.ttf \
		NotoSansSymbols-Bold.ttf \
		NotoSansSymbols-Regular.ttf \
		NotoSerif-Bold.ttf \
		NotoSerif-BoldItalic.ttf \
		NotoSerif-Italic.ttf \
		NotoSerif-Regular.ttf

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${BASIC_FONTS} ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>

PORTNAME=	json-tui
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.0-13
PORTREVISION=	3
DISTVERSIONSUFFIX=	-g6b38aba
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	JSON terminal UI made in C++
WWW=		https://github.com/ArthurSonzogni/json-tui

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	args>0:devel/args \
		nlohmann-json>0:devel/nlohmann-json
LIB_DEPENDS=	libftxui-component.so:devel/ftxui

USES=		cmake compiler:c++20-lang

USE_GITHUB=	yes
GH_ACCOUNT=	ArthurSonzogni

PLIST_FILES=	bin/json-tui

.include <bsd.port.mk>

PORTNAME=	typst
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.0
PORTREVISION=	2
CATEGORIES=	textproc

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Markup-based typesetting system
WWW=		https://typst.app/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/target/*/release/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>

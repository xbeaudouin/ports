PORTNAME=	qt5pas
PORTVERSION=	2.6
PORTREVISION=	5
CATEGORIES=	x11-toolkits
MASTER_SITES=	LOCAL/acm/

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Qt5 binding for FreePascal
WWW=		https://wiki.lazarus.freepascal.org/index.php/Qt_Interface

USES=		compiler:c++11-lang qmake qt:5
USE_QT=		buildtools:build core gui network printsupport x11extras
USE_LDCONFIG=	yes

QT5_VER_MIN=	5.6.1

post-patch:
	@${REINPLACE_CMD} -e 's|-mincoming-stack-boundary=2||g' ${WRKSRC}/Qt5Pas.pro

.include <bsd.port.mk>

PORTNAME=	kontrast
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics accessibility kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Color contrast checker
WWW=		https://apps.kde.org/en/kontrast

BUILD_DEPENDS=	${LOCALBASE}/include/qcoro5/qcoro/qcoro.h:devel/qcoro@qt5
LIB_DEPENDS=	libfuturesql5.so:databases/futuresql

USES=		compiler:c++11-lang cmake pkgconfig \
		kde:5 qt:5 tar:xz
USE_KDE=	coreaddons i18n kdeclarative kirigami2 \
		ecm:build
USE_QT=		core dbus declarative gui network quickcontrols2 sql svg widgets \
		buildtools:build qmake:build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>

PORTNAME=	milou
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	deskutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Plasmoid for search
WWW=		https://www.kde.org/plasma-desktop

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons i18n itemmodels package plasma-framework \
		runner service \
		ecm:build
USE_QT=		core declarative gui network widgets \
		buildtools:build qmake:build testlib:build

.include <bsd.port.mk>

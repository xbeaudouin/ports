PORTNAME=	DateTime
PORTVERSION=	3.0.3
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel python zope
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope 2 DateTime data type
WWW=		https://pypi.org/project/DateTime/

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>=0:devel/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>

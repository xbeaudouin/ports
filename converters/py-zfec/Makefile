PORTNAME=	zfec
PORTVERSION=	1.5.7.4
CATEGORIES=	converters python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Efficient, portable erasure coding tool
WWW=		https://github.com/tahoe-lafs/zfec

LICENSE=	GPLv2+ TGGPL
LICENSE_COMB=	dual
LICENSE_NAME_TGGPL=	Transitive Grace Period Public Licence 1.0
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING.GPL
LICENSE_FILE_TGGPL=	${WRKSRC}/COPYING.TGPPL.rst
LICENSE_PERMS_TGGPL=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>

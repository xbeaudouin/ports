PORTNAME=	simpleparse
PORTVERSION=	2.2.4
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	SimpleParse-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python EBNF parser generator (with mx.TextTools derivative)
WWW=		https://simpleparse.sourceforge.net/ \
		https://github.com/mcfletch/simpleparse

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>

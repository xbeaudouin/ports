PORTNAME=	MathJax3
DISTVERSION=	3.2.2
CATEGORIES=	www math

MAINTAINER=	marko.cupac@mimar.rs
COMMENT=	Cross-browser JavaScript display engine for mathematics
WWW=		https://www.mathjax.org/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	mathjax
GH_PROJECT=	MathJax

NO_ARCH=	yes
NO_BUILD=	yes

# Changing permissions of 30k files with find -exec (COPYTREE) is way
# too slow.
do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && \
		${FIND} -d . | ${CPIO} -dumpl ${STAGEDIR}${WWWDIR} >/dev/null 2>&1)
	${FIND} -d ${STAGEDIR}${WWWDIR} -type d -print0 | ${XARGS} -0 ${CHMOD} 755
	${FIND} -d ${STAGEDIR}${WWWDIR} -type f -print0 | ${XARGS} -0 ${CHMOD} ${SHAREMODE}
	@(cd ${STAGEDIR}${PREFIX}; ${FIND} -s ${WWWDIR_REL} -not -type d) >> ${TMPPLIST}

.include <bsd.port.mk>

PORTNAME=	sdom
PORTVERSION=	0.5.1
PORTREVISION=	2
CATEGORIES=	textproc scheme
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of the W3C DOM recommendation in Scheme
WWW=		https://www.nongnu.org/sdom/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	guile-lib-${GUILE_FLAVOR}>=0:devel/guile-lib@${GUILE_FLAVOR}

USES=		guile:env

NO_ARCH=	yes
NO_BUILD=	yes
NO_ARCH=	yes

INFO=		sdom
PLIST_FILES=	share/guile/sdom/common.scm \
		share/guile/sdom/core.scm \
		share/guile/sdom/events.scm \
		share/guile/sdom/ls.scm \
		share/guile/sdom/parser.scm

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/guile/sdom
.for f in common.scm core.scm events.scm ls.scm parser.scm
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${PREFIX}/share/guile/sdom
.endfor
	${INSTALL_DATA} ${WRKSRC}/sdom.info ${STAGEDIR}${PREFIX}/${INFO_PATH}

.include <bsd.port.mk>

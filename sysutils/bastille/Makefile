PORTNAME=	bastille
DISTVERSION=	0.10.20231013
CATEGORIES=	sysutils

MAINTAINER=	christer.edwards@gmail.com
COMMENT=	Jail automation framework
WWW=		https://bastillebsd.org

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	bastillebsd

NO_BUILD=	yes
NO_ARCH=	yes

USE_RC_SUBR=	bastille

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PREFIX}/bin/bastille ${STAGEDIR}${PREFIX}/bin

post-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC}/${DATADIR} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})
	${INSTALL_MAN} ${WRKSRC}/${PREFIX}/man/man8/bastille.8.gz \
		${STAGEDIR}${PREFIX}/man/man8/bastille.8.gz
	${INSTALL_DATA} ${WRKSRC}/${ETCDIR}/bastille.conf.sample ${STAGEDIR}${ETCDIR}/bastille.conf.sample

.include <bsd.port.mk>

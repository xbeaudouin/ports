PORTNAME=	ipcheck
PORTVERSION=	0.240
PORTEPOCH=	1
PORTREVISION=	1
CATEGORIES=	dns python
MASTER_SITES=	http://ipcheck.sourceforge.net/releases/
DISTNAME=	${PORTNAME}.${PORTVERSION:S/^0.//}
EXTRACT_SUFX=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fully compliant DynDNS.org client for UNIX (supports NIC v2.0)
WWW=		https://ipcheck.sourceforge.net/

LICENSE=	GPLv2

USES=		python shebangfix
SHEBANG_FILES=	${DISTNAME}
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/ipcheck.py

do-extract:
	@${SED} \
		-e "s!ppp0!tun0!" \
		${DISTDIR}/${DISTNAME} > ${WRKSRC}/${DISTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}.py

.include <bsd.port.mk>

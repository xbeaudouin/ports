PORTNAME=	mythes
PORTVERSION=	20140516
CATEGORIES=	textproc spanish
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
PKGNAMEPREFIX=	es-
DISTNAME=	OOo2-thes_es_ES-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Spanish thesaurus
WWW=		https://openoffice-es.sourceforge.net/thesaurus/

LICENSE=	LGPL21

PORTSCOUT=	skipv:20140531

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USES=		tar:bzip2

PLIST_FILES=	${DATADIR}/th_es_ES_v2.dat \
		${DATADIR}/th_es_ES_v2.idx

ESALIASES=	es_AR es_BO es_CL es_CO es_CR es_CU es_DO es_EC es_GT es_HN \
		es_MX es_NI es_PA es_PE es_PR es_PY es_SV es_US es_UY es_VE
.for ALIAS in ${ESALIASES}
PLIST_FILES+=	${DATADIR}/th_${ALIAS}_v2.dat \
		${DATADIR}/th_${ALIAS}_v2.idx
.endfor

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/th_es_ES_v2.dat ${WRKSRC}/th_es_ES_v2.idx ${STAGEDIR}${DATADIR}/
.for ALIAS in ${ESALIASES}
	${LN} -s th_es_ES_v2.dat ${STAGEDIR}${DATADIR}/th_${ALIAS}_v2.dat
	${LN} -s th_es_ES_v2.idx ${STAGEDIR}${DATADIR}/th_${ALIAS}_v2.idx
.endfor

.include <bsd.port.mk>

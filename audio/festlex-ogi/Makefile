PORTNAME=	festlex-ogi
PORTVERSION=	2.2
PORTREVISION=	2
CATEGORIES=	audio accessibility
MASTER_SITES=	# ${MASTER_SITE_FESTIVAL_OGI}
DISTNAME=	OGIlexicon-2.2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Composite pronunciation dictionary from ogi.edu for Festival
WWW=		http://cslu.cse.ogi.edu/tts/

RUN_DEPENDS=	festival:audio/festival \
		${LOCALBASE}/share/festival/lib/dicts/wsj.wp39.poslexR:audio/festlex-poslex

# Converted from RESTRICTED
LICENSE=	FESTLEX
LICENSE_NAME=	festlex
LICENSE_TEXT=	No commercial use
LICENSE_PERMS=	auto-accept

DEPRECATED=	Both MASTER_SITES and WWW are defunct
EXPIRATION_DATE=	2023-12-04

WRKSRC=		${WRKDIR}/festival

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival

.include <bsd.port.pre.mk>

.if !exists(${DISTDIR}/${DISTNAME}${EXTRACT_SUFX})
IGNORE=	distfile can only be fetched if you accept the license. Go to https://www.cslu.ogi.edu/tts/download/data/OGIlexicon-2.2.tar.gz and put ${DISTFILE} into ${DISTDIR}
.endif

do-install:
	${MKDIR} ${STAGEDIR}${FHOME}
	cd ${WRKSRC} && ${CP} -pPR * ${STAGEDIR}${FHOME}

.include <bsd.port.post.mk>

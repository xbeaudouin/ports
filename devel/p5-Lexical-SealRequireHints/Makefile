PORTNAME=	Lexical-SealRequireHints
PORTVERSION=	0.012
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to prevent leakage of lexical hints
WWW=		https://metacpan.org/release/Lexical-SealRequireHints

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	modbuild

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Lexical/SealRequireHints/SealRequireHints.so

.include <bsd.port.mk>

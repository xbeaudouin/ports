PORTNAME=	Devel-Declare-Parser
PORTVERSION=	0.021
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for higher level interface to Devel-Declare
WWW=		https://metacpan.org/release/Devel-Declare-Parser

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-B-Compiling>=0.02:devel/p5-B-Compiling \
	p5-B-Hooks-EndOfScope>=0.08:devel/p5-B-Hooks-EndOfScope \
	p5-Devel-Declare>=0.006:devel/p5-Devel-Declare

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	YES

.include <bsd.port.mk>

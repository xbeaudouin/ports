PORTNAME=	MooseX-App
PORTVERSION=	1.43
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Write user-friendly command line apps with even less suffering
WWW=		https://metacpan.org/release/MooseX-App

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Config-Any>=0:devel/p5-Config-Any \
		p5-IO-Interactive>=0:devel/p5-IO-Interactive \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable \
		p5-Moose>=2:devel/p5-Moose \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Pod-Elemental>=0:textproc/p5-Pod-Elemental \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean
TEST_DEPENDS=	p5-Test-Most>=0:devel/p5-Test-Most \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>

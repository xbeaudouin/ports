PORTNAME=	CPAN-Mini
PORTVERSION=	1.111017
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create a minimal mirror of CPAN
WWW=		https://metacpan.org/release/CPAN-Mini

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-HomeDir>=0.57:devel/p5-File-HomeDir \
		p5-URI>=1:net/p5-URI \
		p5-libwww>=5:www/p5-libwww
TEST_DEPENDS=	p5-Test-Simple>=0.96:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>

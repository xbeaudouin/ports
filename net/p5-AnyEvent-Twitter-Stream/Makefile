PORTNAME=	AnyEvent-Twitter-Stream
PORTVERSION=	0.28
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to receive Twitter streaming API in an event loop
WWW=		https://metacpan.org/release/AnyEvent-Twitter-Stream

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-AnyEvent-HTTP>=2.0:www/p5-AnyEvent-HTTP \
		p5-JSON>=2.0:converters/p5-JSON \
		p5-URI>=0:net/p5-URI

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>

PORTNAME=	Net
PORTVERSION=	3.15
PORTEPOCH=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	libnet-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 modules to access and use network protocols
WWW=		https://metacpan.org/release/libnet

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/Artistic
LICENSE_FILE_GPLv1+ =	${WRKSRC}/Copying

USES=		perl5
USE_PERL5=	configure

CONFIGURE_ENV=	PERL5_CPAN_IS_RUNNING=1
NO_ARCH=	yes

OPTIONS_DEFINE=	SASL SSL
OPTIONS_DEFAULT=SASL SSL
SASL_DESC=	SASL auth for POP3 and SMTP support

SASL_BUILD_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL
SASL_RUN_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL
SSL_BUILD_DEPENDS=	p5-IO-Socket-SSL>=2.007:security/p5-IO-Socket-SSL
SSL_RUN_DEPENDS=	p5-IO-Socket-SSL>=2.007:security/p5-IO-Socket-SSL

.include <bsd.port.mk>

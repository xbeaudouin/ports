PORTNAME=	responders
PORTVERSION=	3.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple Ruby DSL for making HTTP requests
WWW=		https://github.com/heartcombo/responders

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack50>=5.0:www/rubygem-actionpack50 \
		rubygem-railties50>=5.0:www/rubygem-railties50

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^3\.0\.

.include <bsd.port.mk>

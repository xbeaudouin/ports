PORTNAME=	coffee-rails
PORTVERSION=	4.2.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX?=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Coffee Script adapter for the Rails asset pipeline
WWW=		https://github.com/rails/coffee-rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-coffee-script>=2.2.0:devel/rubygem-coffee-script \
		rubygem-railties4>=4.0.0:www/rubygem-railties4

NO_ARCH=	yes
USES=		gem

.include <bsd.port.mk>

PORTNAME=	redis-rails
PORTVERSION=	5.0.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis for Ruby on Rails
WWW=		https://redis-store.org/redis-rails/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-redis-actionpack>=5.0<6:databases/rubygem-redis-actionpack \
		rubygem-redis-activesupport>=5.0<6:devel/rubygem-redis-activesupport \
		rubygem-redis-store>=1.2<2:devel/rubygem-redis-store

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>

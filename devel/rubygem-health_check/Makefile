PORTNAME=	health_check
PORTVERSION=	3.1.0
PORTREVISION=	3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple health check of Rails app for uptime monitoring
WWW=		https://github.com/ianheggie/health_check

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties61>=5.0:www/rubygem-railties61

USES=		gem shebangfix

NO_ARCH=	yes

SHEBANG_FILES=	test/*railsapp

.include <bsd.port.mk>

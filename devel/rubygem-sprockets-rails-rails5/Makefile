PORTNAME=	sprockets-rails
PORTVERSION=	3.2.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sprockets Rails integration
WWW=		https://github.com/rails/sprockets-rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack5>=4.0:www/rubygem-actionpack5 \
		rubygem-activesupport5>=4.0:devel/rubygem-activesupport5 \
		rubygem-sprockets3>=3.0.0:devel/rubygem-sprockets3

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^3\.2\.

.include <bsd.port.mk>

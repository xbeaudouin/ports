PORTNAME=	faraday_middleware
PORTVERSION=	0.14.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	0

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Collection of Ruby Faraday middlewares
WWW=		https://github.com/lostisland/faraday_middleware

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-faraday0>=0.7.4<1.0:www/rubygem-faraday0

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^0\.

.include <bsd.port.mk>

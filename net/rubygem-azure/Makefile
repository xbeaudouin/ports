PORTNAME=	azure
PORTVERSION=	0.7.10
PORTREVISION=	2
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Microsoft Azure Client Library for Ruby
WWW=		https://github.com/Azure/azure-sdk-for-ruby

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-addressable>=2.3<3:www/rubygem-addressable \
		rubygem-azure-core>=0.1<1:net/rubygem-azure-core \
		rubygem-faraday0>=0.9<1:www/rubygem-faraday0 \
		rubygem-faraday_middleware0>=0.10<1:www/rubygem-faraday_middleware0 \
		rubygem-mime-types>=1<4.0:misc/rubygem-mime-types \
		rubygem-nokogiri>=1.6<2:textproc/rubygem-nokogiri \
		rubygem-systemu>=2.6<3:devel/rubygem-systemu \
		rubygem-thor0>=0.19<1:devel/rubygem-thor0

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/pfxer

.include <bsd.port.mk>

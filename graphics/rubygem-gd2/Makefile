PORTNAME=	gd2
PORTVERSION=	1.1.1
PORTREVISION=	7
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to gd 2 library
WWW=		http://gd2.rubyforge.org/

LICENSE=	GPLv2

LIB_DEPENDS=	libgd.so:graphics/gd

NO_ARCH=	yes

USES=		gem

post-patch:
	@${REINPLACE_CMD} 's|libgd.so.2|libgd.so.5|' ${WRKSRC}/lib/gd2.rb

.include <bsd.port.mk>

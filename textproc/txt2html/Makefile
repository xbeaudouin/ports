PORTNAME=	txt2html
PORTVERSION=	2.51
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert raw text to something with a little HTML formatting
WWW=		https://txt2html.sourceforge.net/

BUILD_DEPENDS=	p5-Getopt-ArgvFile>=0:devel/p5-Getopt-ArgvFile \
		p5-YAML-Syck>=0:textproc/p5-YAML-Syck
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>

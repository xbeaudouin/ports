PORTNAME=	calcoo
PORTVERSION=	1.3.18
PORTREVISION=	8
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	RPN and algebraic scientific calculator
WWW=		https://calcoo.sourceforge.net/

USES=		gnome pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
LIBS+=		-lm

PLIST_FILES=	bin/calcoo \
		man/man1/calcoo.1.gz

.include <bsd.port.mk>

PORTNAME=	proxychains
PORTVERSION=	3.1
PORTREVISION=	3
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/version%20${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Redirect connection through proxy servers
WWW=		https://proxychains.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${LOCALBASE}/bin/dig:dns/bind-tools

GNU_CONFIGURE=	yes
USES=		gmake libtool
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's!$$(srcdir)/proxychains.conf!$$(srcdir)/proxychains.conf.sample!' \
		-e 's!libproxychains_la_LIBADD = -ldl!libproxychains_la_LIBADD =!' \
		${WRKSRC}/proxychains/Makefile.in
	@${MV} ${WRKSRC}/proxychains/proxychains.conf \
		${WRKSRC}/proxychains/proxychains.conf.sample

post-configure:
	@${ECHO_CMD} '#define PREFIX "${PREFIX}"' >> ${WRKSRC}/config.h

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libproxychains.so.3.0.0
	${INSTALL_DATA} ${WRKSRC}/proxychains/proxychains.conf.sample \
		${STAGEDIR}${PREFIX}/etc/proxychains.conf

.include <bsd.port.mk>

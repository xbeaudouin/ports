PORTNAME=	hsflowd
PORTVERSION=	1.24.1
CATEGORIES=	net
MASTER_SITES=	ZI

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Agent that exports metrics using the sFlow protocol
WWW=		https://host-sflow.sourceforge.net/

BROKEN_mips=		fails to compile: src/FreeBSD/Makefile: Malformed conditional (empty $(BINDIR))
BROKEN_mips64=		fails to compile: src/FreeBSD/Makefile: Malformed conditional (empty $(BINDIR))

SUB_FILES=	pkg-message
USE_RC_SUBR=	${PORTNAME}
MAKE_ENV=	BINDIR=${PREFIX}/sbin INITDIR=${PREFIX}/etc/rc.d \
		CONFDIR=${ETCDIR} INSTROOT=${STAGEDIR}

MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|gcc|${CC}|g' \
		-e '/scripts\/hsflowd /d' \
		-e 's|hsflowd.conf|hsflowd.conf.sample|g' \
		${WRKSRC}/src/FreeBSD/Makefile ${WRKSRC}/src/sflow/Makefile \
		${WRKSRC}/src/json/Makefile
	@${REINPLACE_CMD} -e 's|/etc|${ETCDIR}|g' ${WRKSRC}/src/FreeBSD/hsflowd.h
	@${REINPLACE_CMD} -e 's|/usr|${PREFIX}|g' \
		${WRKSRC}/src/FreeBSD/scripts/hsflowd
	@${MV} ${WRKSRC}/src/FreeBSD/scripts/hsflowd.conf \
		${WRKSRC}/src/FreeBSD/scripts/hsflowd.conf.sample

.include <bsd.port.mk>

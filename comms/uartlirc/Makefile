PORTNAME=	uartlirc
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	comms
MASTER_SITES=	LOCAL/nox \
		http://people.freebsd.org/~nox/tmp/
DISTNAME=	${PORTNAME}-preliminary-003
EXTRACT_SUFX=	.shar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Driver for "homebrew" serial LIRC receivers
WWW=		https://forums.freebsd.org/viewtopic.php?t=31610

DEPRECATED=	BROKEN on all supported versions for more than 2 years after the EOL of 12
EXPIRATION_DATE=	2023-12-31
BROKEN_aarch64=		fails to compile: uartlirc_core.c:273:19: expected expression
BROKEN_armv6=		fails to compile: implicit declaration of function 'cp15_pmccntr_get' is invalid in C99
BROKEN_powerpc64=	fails to compile: uart.h: No such file or directory
BROKEN_powerpc64le=	fails to compile: uart.h: No such file or directory
BROKEN_riscv64=		fails to compile: uartlirc_core.c:273:19: expected expression
BROKEN_sparc64=		fails to build
BROKEN_FreeBSD_13=	fails to compile: uartlirc_bus_scc.c:101:7: use of undeclared identifier 'SCC_CLASS_SAB82532'
BROKEN_FreeBSD_14=	fails to compile: uartlirc_bus_scc.c:101:7: use of undeclared identifier 'SCC_CLASS_SAB82532'

USES=		kmod

CFLAGS+=	${DEBUG_FLAGS}

EXTRACT_CMD=	${SH}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES+=	${KMODDIR}/${PORTNAME}.ko

do-install:
	${INSTALL} ${WRKSRC}/${PORTNAME}.ko ${STAGEDIR}${KMODDIR}

.include <bsd.port.mk>

PORTNAME=	BackupPC-XS
PORTVERSION=	0.62
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CBARRATT
PKGNAMEPREFIX=	p5-

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Perl extension for BackupPC libraries
WWW=		https://backuppc.sourceforge.net

LICENSE=	GPLv3

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/BackupPC/XS/XS.so

.include <bsd.port.mk>

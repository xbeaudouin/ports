PORTNAME=	rsync-bpc
PORTVERSION=	3.1.3.0
CATEGORIES=	net

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Modified rsync that used as part of BackupPC
WWW=		https://backuppc.sourceforge.net/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		perl5

USE_GITHUB=	yes
GH_ACCOUNT=	backuppc

USE_PERL5=	build
HAS_CONFIGURE=	yes
CONFIGURE_SCRIPT=	configure.sh
CONFIGURE_ARGS=	--prefix=${PREFIX}

PLIST_FILES=	bin/rsync_bpc

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/rsync_bpc

.include <bsd.port.mk>

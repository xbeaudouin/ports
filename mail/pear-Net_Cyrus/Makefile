PORTNAME=	Net_Cyrus
DISTVERSION=	0.3.2
CATEGORIES=	mail net pear

MAINTAINER=	bra@fsn.hu
COMMENT=	PEAR class to administer Cyrus IMAP servers
WWW=		https://pear.php.net/package/Net_Cyrus

LICENSE=	PHP202

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Net/IMAP.php:mail/pear-Net_IMAP@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Net/IMAP.php:mail/pear-Net_IMAP@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>

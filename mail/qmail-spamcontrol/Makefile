PORTNAME=	qmail
PORTVERSION=	${QMAIL_VERSION}.${SPAMCONTROL_VERSION}
PORTREVISION=	3
CATEGORIES=	mail
MASTER_SITES+=	http://www.fehcom.de/qmail/spamcontrol/:spamcontrol \
		LOCAL/bdrewery/qmail/:spamcontrol
PKGNAMESUFFIX=	-spamcontrol
DISTFILES=	${QMAIL_DIST} ${SPAMCONTROL_DIST}:spamcontrol
EXTRACT_ONLY=	${QMAIL_DIST}

COMMENT=	Qmail MTA with SpamControl patches
WWW=		http://www.fehcom.de/qmail/spamcontrol.html

DEPRECATED=	BROKEN for more than 4+ years
EXPIRATION_DATE=	2023-11-30
BROKEN_FreeBSD_12=	incomplete definition of type 'struct X509_name_st'
BROKEN_FreeBSD_13=	incomplete definition of type 'struct X509_name_st'
BROKEN_FreeBSD_14=	incomplete definition of type 'struct X509_name_st'
CONFLICTS=	*qmail qmail-ldap *qmail-mysql *qmail-tls

EXTRA_PATCHES+=	${MASTERDIR}/files/patch-install.c \
		${MASTERDIR}/files/patch-Makefile \
		${MASTERDIR}/files/patch-auto_uids-c-dist

# Distfiles
QMAIL_DIST=		${PORTNAME}-${QMAIL_VERSION}${EXTRACT_SUFX}
SPAMCONTROL_DIST=	spamcontrol-${SPAMCONTROL_VERSION}.tgz
SPAMCONTROL_VERSION=	2731

SLAVE_SPAMCONTROL=	yes

# Local overrides
MASTERDIR=	${.CURDIR}/../qmail
PATCHDIR=	${.CURDIR}/files
DESCR=		${.CURDIR}/pkg-descr

.include "${MASTERDIR}/Makefile"

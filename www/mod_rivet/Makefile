PORTNAME=	mod_rivet
PORTVERSION=	3.2.0
CATEGORIES=	www tcl
MASTER_SITES=	APACHE/tcl/rivet
DISTNAME=	rivet-${PORTVERSION}

MAINTAINER=	jeff.lawson@flightaware.com
COMMENT=	Embeds a Tcl interpreter in the Apache server
WWW=		https://tcl.apache.org/rivet/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libitcl.so:lang/itcl

USES=		apache compiler:c11 gmake \
		libtool tcl:86+,tea
USE_LDCONFIG=	${PREFIX}/lib/rivet

INSTALL_TARGET=	install-strip

SUB_FILES=	pkg-message

CONFIGURE_ARGS+=--with-apxs=${APXS} \
		--with-rivet-target-dir=${PREFIX}/lib/rivet

post-patch:
	@${REINPLACE_CMD} -e 's|`$${apxs_found} -q LIBEXECDIR`|${PREFIX}/${APACHEMODDIR}|g' \
		${WRKSRC}/configure

.include <bsd.port.mk>

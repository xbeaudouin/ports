PORTNAME=	fpc-devel
PORTVERSION=	3.3.1.20231027
PORTREVISION=	0
CATEGORIES=	lang
PKGNAMESUFFIX=	-source
DIST_SUBDIR=	freepascal

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Free Pascal compiler with Turbo and Delphi compatibility (source)
WWW=		https://www.freepascal.org/

ONLY_FOR_ARCHS=	amd64 i386
NO_BUILD=	yes

USE_GITLAB=	yes
GL_SITE=	https://gitlab.com/freepascal.org
GL_ACCOUNT=	fpc
GL_PROJECT=	source
GL_COMMIT=	55e72fc0f1505c75f60af706736d32ceca9815a4

PORTDATA=	*

PATCHDIR=	${PORTSDIR}/lang/fpc-devel/files
DATADIR=	${PREFIX}/share/${PORTNAME}${PKGNAMESUFFIX}-${FPCBASEVER}
WRKSRC=		${WRKDIR}/${FPCSRCDIR}

FPCBASEVER=	3.3.1
FPCSRCDIR=	source-${GL_COMMIT}

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
FPC_ARCH=	i386
.elif ${ARCH} == "amd64"
FPC_ARCH=	x86_64
.endif

post-extract:
	${RM} -R ${WRKSRC}/.git*

post-patch:
.if ${OPSYS} == FreeBSD
	@${REINPLACE_CMD} -i "" -e 's|900044|${OSVERSION}|g' \
				-e 's|1201000|${OSVERSION}|g' \
				-e 's|1200000|${OSVERSION}|g' \
		${WRKSRC}/rtl/freebsd/${FPC_ARCH}/*.as \
		${WRKSRC}/rtl/freebsd/${FPC_ARCH}/*.inc
.else
	@${REINPLACE_CMD} -i "" -e 's|400000|${DFLYVERSION}|g' \
		${WRKSRC}/rtl/dragonfly/${FPC_ARCH}/*.as
.endif
.if empty(ICONV_LIB)
	@${REINPLACE_CMD} -i "" -e "s|s<>'c'|(s<>'c') and (s<>'iconv')|" \
		-e "s|%%FPC_LDPATH%%|${FPC_LDPATH}|g" \
			${WRKDIR}/${FPCSRCDIR}/compiler/systems/t_bsd.pas
			@${REINPLACE_CMD} -e 's|defined(bsd) and not ||' \
		${WRKDIR}/${FPCSRCDIR}/rtl/unix/cwstring.pp
.endif
	@${REINPLACE_CMD} -i "" -e '/samplecfg/ {s/INSTALLEXE/INSTALLSCR/;}' \
		${WRKDIR}/${FPCSRCDIR}/compiler/Makefile
	@${REINPLACE_CMD} -i "" -e 's|/usr/local|${PREFIX}|g' \
		${WRKDIR}/${FPCSRCDIR}/packages/fpmkunit/src/fpmkunit.pp
# enable or disable units
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/a52/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/dts/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|freebsd,||g' \
		${WRKSRC}/packages/fpgtk/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|iphonesim|freebsd,iphonesim|g' \
		${WRKSRC}/packages/gnome1/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|iphonesim|freebsd,iphonesim|g' \
		${WRKSRC}/packages/gtk1/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|iphonesim|freebsd,iphonesim|g' \
		${WRKSRC}/packages/imlib/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/ldap/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/libnettle/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/libsee/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/lua/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/mad/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/modplug/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/newt/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/oggvorbis/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/openal/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/opencl/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/proj4/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|os2|freebsd,os2|g' \
		${WRKSRC}/packages/rexx/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/wasmedge/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/wasmtime/fpmake.pp
	@${REINPLACE_CMD} -i "" -e 's|linux|freebsd,linux|g' \
		${WRKSRC}/packages/zorba/fpmake.pp

do-install:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . \
		${STAGEDIR}${DATADIR})

.include <bsd.port.post.mk>

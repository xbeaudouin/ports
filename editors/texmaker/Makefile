PORTNAME=	texmaker
PORTVERSION=	5.0.3
PORTREVISION=	5
PORTEPOCH=	3
CATEGORIES=	editors
MASTER_SITES=	http://www.xm1math.net/texmaker/

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	LaTeX Development Environment
WWW=		https://www.xm1math.net/texmaker/

LICENSE=	GPLv2+

LIB_DEPENDS=	libhunspell-1.7.so:textproc/hunspell

USES=		compiler:c++11-lang desktop-file-utils ghostscript:x11,run \
		gl pkgconfig qmake qt:5 tar:bzip2 tex
USE_GL=		gl
USE_QT=		concurrent core gui network printsupport script widgets \
		xml buildtools:build
USE_TEX=	latex dvipsk

EXTRACT_AFTER_ARGS=	--exclude hunspell
QMAKE_ARGS=	ICONDIR=${PREFIX}/share/pixmaps \
		DESKTOPDIR=${DESKTOPDIR} \
		METAINFODIR=${PREFIX}/share/metainfo

.include <bsd.port.mk>

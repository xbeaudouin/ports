PORTNAME=	rio
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.27
CATEGORIES=	x11 wayland
PKGNAMESUFFIX=	-terminal-emulator

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Hardware-accelerated GPU terminal emulator powered by WebGPU
WWW=		https://raphamorim.io/rio

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	raphamorim
GH_TAGNAME=	4636f43

CARGO_CRATES=	ab_glyph-0.2.17 \
		ab_glyph_rasterizer-0.1.7 \
		addr2line-0.19.0 \
		adler-1.0.2 \
		adler32-1.2.0 \
		ahash-0.7.6 \
		aho-corasick-0.7.20 \
		android-activity-0.4.1 \
		android-properties-0.2.2 \
		android_system_properties-0.1.5 \
		anes-0.1.6 \
		anstream-0.3.2 \
		anstyle-1.0.0 \
		anstyle-parse-0.2.0 \
		anstyle-query-1.0.0 \
		anstyle-wincon-1.0.1 \
		approx-0.5.1 \
		arrayvec-0.7.2 \
		ash-0.37.2+1.3.238 \
		autocfg-1.1.0 \
		backtrace-0.3.67 \
		base64-0.21.0 \
		bit-set-0.5.3 \
		bit-vec-0.6.3 \
		bit_field-0.10.2 \
		bitflags-1.3.2 \
		bitflags-2.0.2 \
		block-0.1.6 \
		block-sys-0.1.0-beta.1 \
		block2-0.2.0-alpha.6 \
		bumpalo-3.11.1 \
		bytemuck-1.13.1 \
		bytemuck_derive-1.4.1 \
		byteorder-1.4.3 \
		bytes-0.3.0 \
		bytes-1.2.1 \
		calloop-0.10.4 \
		cast-0.3.0 \
		cc-1.0.73 \
		cfg-if-0.1.10 \
		cfg-if-1.0.0 \
		cfg_aliases-0.1.1 \
		ciborium-0.2.1 \
		ciborium-io-0.2.1 \
		ciborium-ll-0.2.1 \
		clap-4.3.4 \
		clap_builder-4.3.4 \
		clap_derive-4.3.2 \
		clap_lex-0.5.0 \
		clipboard-win-3.1.1 \
		cmake-0.1.50 \
		codespan-reporting-0.11.1 \
		color_quant-1.1.0 \
		colorchoice-1.0.0 \
		com-rs-0.2.1 \
		console_error_panic_hook-0.1.7 \
		console_log-0.2.2 \
		const-cstr-0.3.0 \
		copypasta-0.8.2 \
		corcovado-0.0.1 \
		core-foundation-0.9.3 \
		core-foundation-sys-0.8.3 \
		core-graphics-0.22.3 \
		core-graphics-types-0.1.1 \
		core-text-19.2.0 \
		crc32fast-1.3.2 \
		criterion-0.5.1 \
		criterion-plot-0.5.0 \
		crossbeam-channel-0.5.6 \
		crossbeam-deque-0.8.2 \
		crossbeam-epoch-0.9.11 \
		crossbeam-utils-0.8.12 \
		crunchy-0.2.2 \
		d3d12-0.6.0 \
		deflate-1.0.0 \
		dirs-5.0.0 \
		dirs-next-2.0.0 \
		dirs-sys-0.4.0 \
		dirs-sys-next-0.1.2 \
		dispatch-0.2.0 \
		dlib-0.5.0 \
		downcast-rs-1.2.0 \
		dwrote-0.11.0 \
		either-1.8.0 \
		env_logger-0.4.3 \
		env_logger-0.10.0 \
		errno-0.3.1 \
		errno-dragonfly-0.1.2 \
		exr-1.6.3 \
		fdeflate-0.3.0 \
		filetime-0.2.21 \
		flate2-1.0.24 \
		float-ord-0.2.0 \
		flume-0.10.14 \
		font-kit-0.11.0 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		freetype-0.7.0 \
		freetype-sys-0.13.1 \
		fsevent-sys-4.1.0 \
		fuchsia-cprng-0.1.1 \
		fuchsia-zircon-0.3.3 \
		fuchsia-zircon-sys-0.3.3 \
		futures-core-0.3.28 \
		futures-sink-0.3.28 \
		gethostname-0.2.3 \
		getrandom-0.2.8 \
		gif-0.12.0 \
		gimli-0.27.2 \
		glow-0.12.1 \
		glyph_brush-0.7.7 \
		glyph_brush_draw_cache-0.1.5 \
		glyph_brush_layout-0.2.3 \
		gpu-alloc-0.5.3 \
		gpu-alloc-types-0.2.0 \
		gpu-allocator-0.22.0 \
		gpu-descriptor-0.2.3 \
		gpu-descriptor-types-0.1.1 \
		half-1.8.2 \
		half-2.2.1 \
		hashbrown-0.12.3 \
		hassle-rs-0.10.0 \
		heck-0.4.1 \
		hermit-abi-0.1.19 \
		hermit-abi-0.3.1 \
		hexf-parse-0.2.1 \
		humantime-2.1.0 \
		image-0.24.6 \
		indexmap-1.9.3 \
		inotify-0.9.6 \
		inotify-sys-0.1.5 \
		instant-0.1.12 \
		io-lifetimes-1.0.11 \
		iovec-0.1.4 \
		is-terminal-0.4.7 \
		itertools-0.10.5 \
		itoa-1.0.6 \
		jni-sys-0.3.0 \
		jobserver-0.1.26 \
		jpeg-decoder-0.3.0 \
		js-sys-0.3.61 \
		khronos-egl-4.1.0 \
		kqueue-1.0.7 \
		kqueue-sys-1.0.3 \
		lazy-bytes-cast-5.0.1 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		lebe-0.5.2 \
		libc-0.2.141 \
		libloading-0.7.3 \
		libloading-0.8.0 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.3.8 \
		lock_api-0.4.9 \
		log-0.3.9 \
		log-0.4.18 \
		malloc_buf-0.0.6 \
		memchr-2.5.0 \
		memmap2-0.5.8 \
		memoffset-0.6.5 \
		metal-0.24.0 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.5.4 \
		miniz_oxide-0.6.2 \
		miniz_oxide-0.7.1 \
		mio-0.8.6 \
		miow-0.5.0 \
		naga-0.12.1 \
		nanorand-0.7.0 \
		ndk-0.7.0 \
		ndk-context-0.1.1 \
		ndk-sys-0.4.1+23.1.7779620 \
		net2-0.2.38 \
		nix-0.24.2 \
		nix-0.25.1 \
		nom-7.1.1 \
		notify-6.0.0 \
		num-integer-0.1.45 \
		num-rational-0.4.1 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		num_enum-0.5.7 \
		num_enum_derive-0.5.7 \
		objc-0.2.7 \
		objc-foundation-0.1.1 \
		objc-sys-0.2.0-beta.2 \
		objc2-0.3.0-beta.3.patch-leaks.2 \
		objc2-encode-2.0.0-pre.2 \
		objc_exception-0.1.2 \
		objc_id-0.1.1 \
		object-0.30.3 \
		once_cell-1.15.0 \
		oorandom-11.1.3 \
		orbclient-0.3.43 \
		ordered-float-3.3.0 \
		owned_ttf_parser-0.15.2 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.4 \
		pathfinder_geometry-0.5.1 \
		pathfinder_simd-0.5.1 \
		percent-encoding-2.2.0 \
		pest-2.6.0 \
		pin-project-1.1.0 \
		pin-project-internal-1.1.0 \
		pin-project-lite-0.2.9 \
		pkg-config-0.3.25 \
		plotters-0.3.5 \
		plotters-backend-0.3.5 \
		plotters-svg-0.3.5 \
		png-0.17.8 \
		ppv-lite86-0.2.16 \
		proc-macro-crate-1.2.1 \
		proc-macro2-1.0.60 \
		profiling-1.0.7 \
		qoi-0.4.1 \
		quote-1.0.28 \
		rand-0.4.6 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.3.1 \
		rand_core-0.4.2 \
		rand_core-0.6.4 \
		range-alloc-0.1.2 \
		raw-window-handle-0.5.2 \
		rayon-1.5.3 \
		rayon-core-1.11.0 \
		rdrand-0.4.0 \
		redox_syscall-0.2.16 \
		redox_syscall-0.3.5 \
		redox_users-0.4.3 \
		regex-1.7.2 \
		regex-syntax-0.6.29 \
		remove_dir_all-0.5.3 \
		renderdoc-sys-1.0.0 \
		rustc-demangle-0.1.21 \
		rustc-hash-1.1.0 \
		rustc_version-0.3.3 \
		rustix-0.37.13 \
		ryu-1.0.13 \
		same-file-1.0.6 \
		scoped-tls-1.0.0 \
		scopeguard-1.1.0 \
		semver-0.11.0 \
		semver-parser-0.10.2 \
		serde-1.0.163 \
		serde_derive-1.0.163 \
		serde_json-1.0.97 \
		serde_spanned-0.6.1 \
		signal-hook-0.3.15 \
		signal-hook-registry-1.4.0 \
		simd-adler32-0.3.5 \
		slab-0.4.8 \
		slotmap-1.0.6 \
		smallvec-1.10.0 \
		smithay-client-toolkit-0.16.0 \
		smithay-clipboard-0.6.6 \
		socket2-0.4.7 \
		spin-0.9.8 \
		spirv-0.2.0+1.5.4 \
		static_assertions-1.1.0 \
		strsim-0.10.0 \
		sugarloaf-0.0.7 \
		syn-1.0.109 \
		syn-2.0.18 \
		tempdir-0.3.7 \
		termcolor-1.1.3 \
		thiserror-1.0.37 \
		thiserror-impl-1.0.37 \
		tiff-0.8.1 \
		tinytemplate-1.2.1 \
		tokio-1.26.0 \
		tokio-macros-1.8.0 \
		toml-0.5.9 \
		toml-0.7.3 \
		toml_datetime-0.6.1 \
		toml_edit-0.19.7 \
		ttf-parser-0.15.2 \
		twox-hash-1.6.3 \
		ucd-trie-0.1.5 \
		unicode-ident-1.0.5 \
		unicode-width-0.1.10 \
		unicode-xid-0.2.4 \
		utf8parse-0.2.1 \
		vec_map-0.8.2 \
		version_check-0.9.4 \
		vte-0.11.1 \
		vte_generate_state_changes-0.1.1 \
		walkdir-2.3.3 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.87 \
		wasm-bindgen-backend-0.2.87 \
		wasm-bindgen-futures-0.4.34 \
		wasm-bindgen-macro-0.2.87 \
		wasm-bindgen-macro-support-0.2.87 \
		wasm-bindgen-shared-0.2.87 \
		wasm-bindgen-test-0.3.34 \
		wasm-bindgen-test-macro-0.3.34 \
		wayland-client-0.29.5 \
		wayland-commons-0.29.5 \
		wayland-cursor-0.29.5 \
		wayland-protocols-0.29.5 \
		wayland-scanner-0.29.5 \
		wayland-sys-0.29.5 \
		web-sys-0.3.61 \
		weezl-0.1.7 \
		wgpu-0.16.1 \
		wgpu-core-0.16.1 \
		wgpu-hal-0.16.0 \
		wgpu-types-0.16.0 \
		widestring-1.0.2 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-wsapoll-0.1.1 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.42.0 \
		windows-0.44.0 \
		windows-sys-0.42.0 \
		windows-sys-0.45.0 \
		windows-sys-0.48.0 \
		windows-targets-0.42.2 \
		windows-targets-0.48.0 \
		windows_aarch64_gnullvm-0.42.2 \
		windows_aarch64_gnullvm-0.48.0 \
		windows_aarch64_msvc-0.42.2 \
		windows_aarch64_msvc-0.48.0 \
		windows_i686_gnu-0.42.2 \
		windows_i686_gnu-0.48.0 \
		windows_i686_msvc-0.42.2 \
		windows_i686_msvc-0.48.0 \
		windows_x86_64_gnu-0.42.2 \
		windows_x86_64_gnu-0.48.0 \
		windows_x86_64_gnullvm-0.42.2 \
		windows_x86_64_gnullvm-0.48.0 \
		windows_x86_64_msvc-0.42.2 \
		windows_x86_64_msvc-0.48.0 \
		winit-0.28.6 \
		winnow-0.3.6 \
		wio-0.2.2 \
		x11-clipboard-0.7.1 \
		x11-dl-2.20.0 \
		x11rb-0.10.1 \
		x11rb-protocol-0.10.0 \
		xcursor-0.3.4 \
		xi-unicode-0.3.0 \
		xml-rs-0.8.4 \
		yeslogic-fontconfig-sys-3.2.0 \
		zune-inflate-0.2.54

PLIST_FILES=	bin/${PORTNAME}

do-install:
	# workaround for error: found a virtual manifest at `/usr/ports/x11/rio/work/rio-4636f43/Cargo.toml` instead of a package manifest
	${INSTALL_PROGRAM} ${WRKDIR}/target/*-freebsd/release/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>

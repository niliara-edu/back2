static const char *colors[SchemeLast][2] = {
        /*     fg         bg       */
        [SchemeNorm] = { "#dad", "#111" },
        [SchemeSel] = { "#dad", "#94d" },
        [SchemeOut] = { "#dad", "#94d" },
};

static const unsigned int alpha = 0xf0;

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

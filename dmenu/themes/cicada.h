static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#000" },
	[SchemeSel] = { "#eeeeee", "#880" },
	[SchemeOut] = { "#000000", "#880" },
};
//static const unsigned int alpha = 0xf9;
static const unsigned int alpha = 0xff;

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

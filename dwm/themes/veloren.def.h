static const char norm_fg[] = "#fff";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#862";

static const char sel_fg[] = "#fff";
static const char sel_bg[] = "#652";
//static const char sel_border[] = "#862";
static const char sel_border[] = "#fff";

static const char urg_fg[] = "#dcbdbd";
static const char urg_bg[] = "#B76779";
static const char urg_border[] = "#B76779";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
//    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

static const char col_gray1[]		= "#000000";
static const char col_gray2[]		= "#9a8484";
static const char col_gray3[]		= "#dcbdbd";
static const char col_gray4[]		= "#dcbdbd";
static const char col_cyan[]		= "#C16A7F";

const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#B76779", /* red     */
  [2] = "#C16A7F", /* green   */
  [3] = "#A9877A", /* yellow  */
  [4] = "#BD7881", /* blue    */
  [5] = "#D07289", /* magenta */
  [6] = "#BA9687", /* cyan    */
  [7] = "#dcbdbd", /* white   */

  /* 8 bright colors */
  [8]  = "#9a8484",  /* black   */
  [9]  = "#B76779",  /* red     */
  [10] = "#C16A7F", /* green   */
  [11] = "#A9877A", /* yellow  */
  [12] = "#BD7881", /* blue    */
  [13] = "#D07289", /* magenta */
  [14] = "#BA9687", /* cyan    */
  [15] = "#dcbdbd", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#dcbdbd", /* foreground */
  [258] = "#dcbdbd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

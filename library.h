typedef unsigned short color_t;

void init_graphics();
void fix();
void exit_graphics();
void clear_screen();
char getkey();
void sleep_ms(long ms);
void draw_pixel(int x, int y, color_t color);
void draw_line(int x1, int y1, int x2, int y2, color_t c);
void draw_text(int x, int y, const char *text, color_t  c);
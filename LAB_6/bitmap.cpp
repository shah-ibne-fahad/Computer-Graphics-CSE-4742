#include <graphics.h>

int bitmap_B[12][12] = {
    {0, 1, 1, 1, 1, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 1, 1, 1, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 0, 0, 0, 1, 0, 0,0, 0,0,0},
    {0, 1, 1, 1, 1, 1, 0, 0,0, 0,0,0},
};
void draw_char_B( int x, int y, int color) {

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (bitmap_B[i][j] == 1) {
                putpixel(x + j, y + i, color);
            }
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    draw_char_B( 200, 200, WHITE);

    getch();
    closegraph();
    return 0;
}


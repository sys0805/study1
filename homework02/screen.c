#include "screen.h"


int Rectangle(int y, int x, const char* text) {
    int textLength = strlen(text);
    int index = 0;
    int i = 0;

    while (i < y) {
        int j = 0;
        while (j < x) {
            if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
                printf("*");
            } else {
                if (index < textLength) {
                    printf("%c", text[index]);
                    index++;
                } else {
                    printf(" ");
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
}
#include <stdio.h>
#include <string.h>
#include "screen.h"

int main() {
    int height = 10;
    int width = 111;
    const char* message = "함수 f(x) = x^3 - 3x^2 + k의 극댓값이 9일 때, 함수 f(x)의 극솟값은? (단, k는 상수이다.)                                                                                                                                                                                                                                                              (1) 1. (2) 2 (3) 3 (4) 4 (5) 5";

    Rectangle(height, width, message);

    int answer;

    int repeat = 1;

    while (repeat)
    {

        scanf("%d", &answer);

        if (answer == 1)
        {
            printf("right\n");
            repeat = 0;
        }
        else if (answer == 2 || answer == 3 || answer == 4 || answer == 5)
        {
            printf("wrong\n");
            repeat = 0;
        }
        else
        {
            printf("Please run again\n");
            repeat = 1;
        }
        
    }
    
    return 0;
}
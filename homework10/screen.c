#include "screen.h"

int game_screen()
{
    char screen[100];

    sprintf(screen, "		     *************\n\
                     *           *\n\
                     *           *\n\
                     *           *\n\
                     *           *\n\
                     *           *\n\
                     *************\n");

    printf("%s", screen);

    return 0;
}

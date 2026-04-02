<<<<<<< HEAD
#include <stdio.h>
#include "util.h"

void logger_global(char* message)
{
    static int counter = 0;
    printf("log %2d: %s\n", counter++, message);
}

void task2()
{
    int i;

    for (i = 0; i < 4; i++) {
        logger_static_inline("task2");
        logger_global("task2");
    }
}
=======
#include <stdio.h>
#include "util.h"

void logger_global(char* message) {
    static int counter = 0;
    printf("log %2d: %s\n", counter++, message);
}

void task2() {
    for (int i = 0; i < 4; i++) {
        logger_static_inline("task2");
        logger_global("task2");
    }
}
>>>>>>> d79a15de07acfc685433ff494b42b13af879a0d4

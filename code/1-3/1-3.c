<<<<<<< HEAD
#include <stdio.h>
#include "util.h"

extern void task2();
extern void logger_global(char* message);

void task1()
{
    int i;

    for (i = 0; i < 5; i++) {
        logger_static_inline("task1");
        logger_global("task1");
    }
}

void task3()
{
    int i;

    for (i = 0; i < 3; i++) {
        logger_static_inline("task3");
        logger_global("task3");
    }
}

int main()
{
    task1();
    task2();
    task3();
    return 0;
}
=======
#include <stdio.h>

#include "util.h"

extern void task2();
extern void logger_global(char* message);

void task1() {
    for (int i = 0; i < 5; i++) {
        logger_static_inline("task1");
        logger_global("task1");
    }
}

void task3() {
    for (int i = 0; i < 3; i++) {
        logger_static_inline("task3");
        logger_global("task3");
    }
}

int main()
{
    task1();
    task2();
    task3();
    return 0;
}
>>>>>>> d79a15de07acfc685433ff494b42b13af879a0d4

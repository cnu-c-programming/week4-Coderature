<<<<<<< HEAD
#include <stdio.h>

static inline void logger_static_inline(char* message)
{
    static int counter = 0;
    printf("log %2d: %s\n", counter++, message);
}
=======
#include <stdio.h>

static inline void logger_static_inline(char* message)
{
    static int counter = 0;
    printf("log %2d: %s\n", counter++, message);
}
>>>>>>> d79a15de07acfc685433ff494b42b13af879a0d4

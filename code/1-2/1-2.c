<<<<<<< HEAD
#include <stdio.h> // 시스템 푲ㄴ
#include "util.h" // 사용자 정의의

int main()
{
    for (int i = 0; i < 100; i++) 
        if (i % 2 == 0)
            logger("even");
        else
            logger("odd");
    

    return 0;
}
=======
#include <stdio.h>
#include "util.h"

int main()
{
    int i;

    for (i = 0; i < 100; i++) {
        if (i % 2 == 0)
            logger("even");
        else
            logger("odd");
    }

    return 0;
}
>>>>>>> d79a15de07acfc685433ff494b42b13af879a0d4

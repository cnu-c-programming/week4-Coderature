#include <stdio.h>
#include <string.h>

int main()
{
    char a[64] = "Hello";
    char b[64] = "world";
    char c[128];
    int len;
    int r;

    len = strlen(a);
    printf("length of a: %d\n", len);

    strcpy(c, a);
    printf("a: %s, c: %s\n", a, c);

    strcat(c, " ");
    strcat(c, b);
    printf("c: %s\n", c);

    r = strcmp(a, a);
    if (r < 0) r = -1;
    if (r > 0) r = 1;
    printf("strcmp(%s, %s) = %d\n", a, a, r);

    r = strcmp(a, b);
    if (r < 0) r = -1;
    if (r > 0) r = 1;
    printf("strcmp(%s, %s) = %d\n", a, b, r);

    return 0;
}

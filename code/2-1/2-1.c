#include <stdio.h>

int main()
{
    const char* date = "2026-03-24";
    char buffer[64];
    int y, m, d;

    sscanf(date, "%d-%d-%d", &y, &m, &d);
    sprintf(buffer, "%d/%d/%d", d, m, y);

    printf("%s\n", buffer);
    return 0;
}

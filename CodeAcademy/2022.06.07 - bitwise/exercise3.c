#include <stdio.h>

int main()
{
    // 110  / 6;
    // 6 << 2 = 11000 / 24
    printf("%d\n", 6 << 2);

    // 6 >> 2 = 001 / 1
    printf("%d\n", 6 >> 2);

    // 10110 / 22
    // 22 << 2 = 1011000 / 80
    // 22 >> 2 = 101 / 5
    printf("%d\n", 22 << 2);
    printf("%d\n", 22 >> 2);

    return 0;
}
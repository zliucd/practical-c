#include <stdio.h>

int add_int(int a, int b)
{
    int result;

    result = a + b;

    return result;
}

int main(int argc, char *argv[])
{
    int x, y, r;

    x = 2;
    y = 8;

    r = add_int(x, y);

    printf("Result: %d\n", r);
}
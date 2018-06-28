#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 5;
    printf("%d %d\n", a, b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("%d %d\n", a, b);
    return 0;
}

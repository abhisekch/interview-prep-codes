#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5, b = 10, temp = 0;
    printf("%d %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
    return 0;
}

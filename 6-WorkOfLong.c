#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int a;
    a = INT_MAX;
    long b  = a;
    a += 50;
    b += 50;
    printf("%d %ld\n", a, b);
    return 0;
}

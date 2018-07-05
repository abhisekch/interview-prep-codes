#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch = 'A';
    for(; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");
    return 0;
}

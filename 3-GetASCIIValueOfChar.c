#include<stdio.h>

int main(int argc, char const *argv[])
{
    if(argc == 1 || argc > 2) {
        return 0;
    }
    else {
        int ASCII = 0;
        const char *ch = argv[1];
        ASCII = *ch;
        printf("%d\n", ASCII);
    }
    return 0;
}

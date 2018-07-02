#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 0;
    }
    else {
        int ASCII = 0;
        if(strlen(argv[1]) > 1) {
            return 1;
        }
        const char *ch = argv[1];
        ASCII = *ch;
        printf("%d\n", ASCII);
    }
    return 0;
}

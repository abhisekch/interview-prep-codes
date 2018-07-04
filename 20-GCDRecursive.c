#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int gcdEuclidean(int a, int b)
{
    if (a == 0)
        return b;
    return gcdEuclidean(b%a, a);
}

int main(int argc, char const *argv[])
{
    if(argc != 3) {
        return 1;
    }
    else {
        int input1 = 0, input2 = 0, gcd = 0, lcm = 0;
        const char *str1, *str2;
        str1 = argv[1];
        str2 = argv[2];
        int i = 0, j = 0;
        if(str1[i] == '-') {
            i++;
        }
        if((i == 1) && (strlen(str1) == 1)) {
            return 1;
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i])) {
                return 1;
            }
        }
        if(str2[j] == '-') {
            j++;
        }
        if((j == 1) && (strlen(str2) == 1)) {
            return 1;
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j])) {
                return 1;
            }
        }
        input1 = atoi(str1);
        input2 = atoi(str2);
        gcd = gcdEuclidean(input1, input2);
        printf("%d\n", gcd);

    }
    return 0;
}

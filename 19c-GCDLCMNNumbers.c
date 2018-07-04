#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool checkInput(const char *str) {
    int i = 0;
    if(str[i] == '-') {
        i++;
    }
    if((i == 1) && (strlen(str) == 1)) {
        return false;
    }
    for(; i < strlen(str); i++) {
        if(!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int gcdEuclidean(int a, int b)
{
    if (a == 0)
        return b;
    return gcdEuclidean(b%a, a);
}

int main(int argc, char const *argv[])
{
    if(argc < 3) {
        return 1;
    }
    else {
        int gcd = 0, lcm = 0;
        int n = argc - 1;
        int inputArr[10000];
        for(int i = 1; i <= n; i++) {
            if(!checkInput(argv[i])) {
                return 1;
            }
        }
        for(int i = 0; i < n; i++) {
            inputArr[i] = atoi(argv[i+1]);
        }
        for(int i = 1; i < n; i++) {
            if(i == 1) {
                gcd = gcdEuclidean(inputArr[0], inputArr[1]);
                lcm = (inputArr[0] * inputArr[1]) / gcd;
            }
            else {
                gcd = gcdEuclidean(inputArr[i], gcd);
                lcm = (inputArr[i] * lcm) / gcdEuclidean(inputArr[i], lcm);
            }
        }
        printf("%d %d\n", gcd, lcm);

    }
    return 0;
}

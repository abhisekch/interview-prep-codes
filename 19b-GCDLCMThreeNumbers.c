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
    if(argc != 4) {
        return 1;
    }
    else {
        int input1 = 0, input2 = 0, input3 = 0, gcd = 0, lcm = 0;
        const char *str1, *str2, *str3;
        str1 = argv[1];
        str2 = argv[2];
        str3 = argv[3];
        int i = 0, j = 0, k = 0;
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
        if(str3[k] == '-') {
            k++;
        }
        if((k == 1) && (strlen(str3) == 1)) {
            return 1;
        }
        for(; k < strlen(str3); k++) {
            if(!isdigit(str3[k])) {
                return 1;
            }
        }
        input1 = atoi(str1);
        input2 = atoi(str2);
        input3 = atoi(str3);
        gcd = gcdEuclidean(input1, input2);
        lcm = (input1 * input2) / gcd;
        gcd = gcdEuclidean(gcd, input3);
        lcm = (input3 * lcm) / gcdEuclidean(input3, lcm);
        printf("%d %d\n", gcd, lcm);

    }
    return 0;
}

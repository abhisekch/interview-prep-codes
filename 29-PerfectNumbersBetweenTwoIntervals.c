#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int perfectOrNot(int num) {
    int divisorSum = 0;
    for(int i = 1; i <= (num / 2); i++) {
        if((num % i) == 0) {
            divisorSum += i;
        }
    }
    if(divisorSum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int input1 = 0, input2 = 0;
    const char *str1, *str2;
    str1 = argv[1];
    str2 = argv[2];
    int i = 0, j = 0;
    if(str1[i] == '-') {
        return 1; //assuming only positive numbers are perfect
    }
    for(; i < strlen(str1); i++) {
        if(!isdigit(str1[i])) {
            return 1;
        }
    }
    if(str2[j] == '-') {
        return 1; //assuming only positive numbers are perfect
    }
    for(; j < strlen(str2); j++) {
        if(!isdigit(str2[j])) {
            return 1;
        }
    }
    input1 = atoi(str1);
    input2 = atoi(str2);
    for(i = input1; i <= input2; i++) {
        if(perfectOrNot(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

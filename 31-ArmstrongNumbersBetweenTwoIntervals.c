#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int armstrongOrNot(int num) {
    int len = 0, tempNum = num, tempSum = 0;
    while(tempNum > 0) {
        len++;
        tempNum /= 10;
    }
    tempNum = num;
    while(tempNum > 0) {
        tempSum += pow((tempNum % 10), len);
        tempNum /= 10;
    }
    if(tempSum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    if(argc != 3) {
        return 1;
    }
    else {
        int input1 = 0, input2 = 0;
        const char *str1, *str2;
        str1 = argv[1];
        str2 = argv[2];
        int i = 0, j = 0;
        if(str1[i] == '-') {
            return 1; //assuming only positive numbers are armstrong
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i])) {
                return 1;
            }
        }
        if(str2[j] == '-') {
            return 1; //assuming only positive numbers are armstrong
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j])) {
                return 1;
            }
        }
        input1 = atoi(str1);
        input2 = atoi(str2);
        for(i = input1; i <= input2; i++) {
            if(armstrongOrNot(i) == 1) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int primeOrNot(int num) {
    for(int i = 2; i <= sqrt(num); i++) {
        if((num % i) == 0) {
            return 0;
        }
    }
    return 1;
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
            return 1; //assuming only positive numbers are prime
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i])) {
                return 1;
            }
        }
        if(str2[j] == '-') {
            return 1; //assuming only positive numbers are prime
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j])) {
                return 1;
            }
        }
        input1 = atoi(str1);
        input2 = atoi(str2);
        if((primeOrNot(input1) == 1) && (primeOrNot(input2) == 1) && (abs(input1 - input2) == 2)) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}

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
    if(argc != 2) {
        return 1;
    }
    else {
        int input = 0;
        const char *str;
        str = argv[1];
        int i = 0;
        int flag = 0;
        if(str[i] == '-') {
            return 1; //assuming only positive numbers are prime
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        if(input < 4) {
            printf("No\n");
        }
        else {
            if(input % 2 == 0) {
                printf("Yes\n"); //Goldbach's Conjecture
            }
            else {
                for(int i = 5; i < input; i++) {
                    if(primeOrNot(i) && primeOrNot(input - i)) {
                        printf("Yes\n");
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) {
                    printf("No\n");
                }
            }
        }
    }
    return 0;
}

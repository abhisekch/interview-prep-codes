#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int getMajorityElement(int arr[], int size) {
    int majorityElementIndex = 0, count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[majorityElementIndex] == arr[i]) {
            count++;
        }
        else {
            count--;
        }
        if(count == 0) {
            majorityElementIndex = i;
            count = 1;
        }
    }
    return arr[majorityElementIndex];
}

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

bool assertIfMajorityElement(int arr[], int size, int majorityElement) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == majorityElement) {
            count++;
        }
    }
    return (count > (size / 2));
}

int main(int argc, char const *argv[])
{
    if(argc < 2) {
        return 1;
    }
    else {
        int n = argc - 1;
        int inputArr[10000];
        for(int  i = 1; i <= n; i++) {
            if(!checkInput(argv[i])) {
                return 1;
            }
        }
        for(int i = 0; i < n; i++) {
            inputArr[i] = atoi(argv[i+1]);
        }
        int trialMajorityElement;
        trialMajorityElement = getMajorityElement(inputArr, n);
        if(assertIfMajorityElement(inputArr, n, trialMajorityElement)) {
            printf("%d\n", trialMajorityElement);
        }
        else {
            printf("No majority element!\n");
        }
    }
    return 0;
}

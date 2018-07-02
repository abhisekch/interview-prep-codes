#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    if(argc != 4) {
        return 1;
    }
    else {
        float a = 0.0f, b = 0.0f, c = 0.0f, discriminant = 0.0f, root1 = 0.0f, root2 = 0.0f;
        int i = 0, j = 0, k = 0;
        const char *str1, *str2, *str3;
        str1 = argv[1];
        str2 = argv[2];
        str3 = argv[3];
        if(str1[i] == '-') {
            i++;
        }
        if(str2[j] == '-') {
            j++;
        }
        if(str3[k] == '-') {
            k++;
        }
        if((i == 1) && (strlen(str1) == 1)) {
            return 1;
        }
        if((j == 1) && (strlen(str2) == 1)) {
            return 1;
        }
        if((k == 1) && (strlen(str3) == 1)) {
            return 1;
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i]) && str1[i]!='.') {
                return 1;
            }
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j]) && str2[j]!='.') {
                return 1;
            }
        }
        for(; k < strlen(str3); k++) {
            if(!isdigit(str3[k]) && str3[k]!='.') {
                return 1;
            }
        }
        a = atof(str1);
        b = atof(str2);
        c = atof(str3);
        if(a == 0.0f) {
            return 1;
        }
        if(pow(b, 2) < 4 * a * c) {
            return 1;
        }
        discriminant = sqrt(pow(b, 2) - 4 * a * c);
        root1 = (-b + discriminant) / (2 * a);
        root2 = (-b - discriminant) / (2 * a);
        printf("%f %f\n", root1, root2);
    }
    return 0;
}

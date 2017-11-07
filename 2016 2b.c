#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="This is first";
    char str2[]="This is Second";
    int value;
    char result[20];
    value=strcmp(str1,str2);
    if (value==0){
        strcpy(result,"Equal to");
    }
    else if (value<0){
        strcpy(result,"Less than");
    }
    else{
        strcpy(result,"Greater than");
    }
    printf("First String is %s second string",result);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long int temp;
    long int total=0;
    char str[100], *ptr;
    printf("Enter the argument: ");
    gets(str);
    char *pch;
    pch = strtok(str," ,.");
    while (pch!=NULL){
        temp=strtol(pch, &ptr, 10);
        total+=temp;
        //printf("%s \n",pch);
        pch = strtok(NULL, " .,");
    }
    printf("Ans: %ld",total);
    return 0;
}
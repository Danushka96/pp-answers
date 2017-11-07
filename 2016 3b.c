#include <stdio.h>
#include <string.h>

char letters[27];

void setarr();
int wordprocess(char word[]);
int letterprocess(char letter);

int main() {
    setarr();
    char str[100], *tok, word[20];
    printf("Enter the argument: ");
    gets(str);
    tok=strtok(str," ");
    while (tok!=NULL){
        strcpy(word,tok);
        int count=wordprocess(word);
        printf("%s-%d\n",tok,count);
        tok=strtok(NULL," ");;
    }
    return 0;
}

int wordprocess(char word[]){
    int size= sizeof(word),count=0;
    for (int i=0;i<size;i++){
        char letter=word[i];
        if (letter!='\0') {
            int result = letterprocess(letter);
            printf("%c-%d\n", letter, result);
            count += result;
        }
    }
    return count;
}

int letterprocess(char letter){
    int i;
    for (i = 0; i < 27; i++) {
        if (letters[i] == letter) {
            return i;
            }
        }
}

void setarr(){
    char a='A';
    for (int i=0;i<27;i++){
        letters[i]=a;
        a=a+1;
    }
}
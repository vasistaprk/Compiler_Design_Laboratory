/*Check Whether a given string is a valid Identifier or Not*/
#include<stdio.h>
#include<string.h>

void main(){
    char s[50];
    int flag = 0,i;
    printf("Enter the string: ");
    gets(s);
    if (isalpha(s[0]) || s[0] == '_'){
        for(i=1;i<strlen(s);i++){
            if (isdigit(s[i]) || isalpha(s[i]) || s[i] == '_'){
                flag = 1;
            }
            else{
                break;
            }
        }
    }
    if (flag == 1){
        printf("Given string is valid identifier.\n");
    }
    else{
    printf("Given string is not valid!\n");
    }
}
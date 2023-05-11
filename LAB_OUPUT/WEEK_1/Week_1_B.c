/*Check Whether a Given String is Comment or Not*/
#include<stdio.h>
#include<string.h>

void main(){
    char s[50];
    int n;
    printf("Enter the string: ");
    gets(s);
    if (s[0] == '/'){
        if (s[1] == '/'){
            printf("Given statement is a comment.\n");
        }
        else if (s[1] == '*'){
            n = strlen(s) - 1;
            if (s[n] == '/' && s[n-1] == '*'){
                printf("Given statement is a comment.\n");
            }
            else{
                printf("Given statement is not a comment.\n");
            }
        }
        else{
            printf("Given statement is not a comment.\n");
        }
    }
    else{
        printf("Given statement is not a comment.\n");
    }
}
/*Analyze the given String for different Operators.*/
#include<stdio.h>
void main(){
    char s[5];
    printf("Enter any Operator (+,-,..): ");
    gets(s);
    switch(s[0]){
    case '>':{
        if (s[1] == '=')
            printf("Greater than Equal to\n");
        else
            printf("Greater than\n");
        break;
    }
    case '<':{
        if (s[1] == '=')
            printf("Less than Equal to\n");
        else
            printf("Less than\n");
        break;
    }
    case '=':{
        if (s[1] == '=')
            printf("Comparing operator\n");
        else
            printf("Assignment operator\n");
        break;
    }
    case '|':{
        if (s[1] == '|')
            printf("Logical OR\n");
        else
            printf("Bitwise OR\n");
        break;
    }
    case '&':{
        if (s[1] == '&')
            printf("Logical AND\n");
        else
            printf("Bitwises AND\n");
        break;
    }
    case '+':{printf("Addition operator\n");break;}
    case '-':{printf("Subtraction operator\n");break;}
    case '*':{printf("Multiplication operator\n");break;}
    case '/':{printf("Division operator\n");break;}
    case '%':{printf("Modulo operator\n");break;}

    default:
        printf("Not an operator\n");
    }
}
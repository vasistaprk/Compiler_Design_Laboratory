/*Check Whether a given sentence consists of any Keywords or Not*/
#include<stdio.h>
#include<string.h>

void main(){
    char s[50];
    char token[20][10];
    int j=0,k=0,i,cnt = 0,flag = 0;
    char keys[21][10]={"auto","double","struct","break","else","long","switch","case","enum","register","type def","char","extern","return","for","const","float","short","do","if","while"};
    printf("Enter the C Statement: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if (s[i] != ' '){
            token[j][k] = s[i];
            k += 1;
        }
        else if (s[i] == ' '){
            token[j][k] = '\0';
            j += 1;
            k = 0;
            cnt += 1;
        }
    }
    token[j][k] = '\0';
    cnt += 1;
    for (i=0;i<cnt;i++){
        for(j = 0;j<21;j++){
            if(strcmp(token[i],keys[j]) == 0){
                printf("%s is a keyword\n",token[i]);
                flag = 1;
            }
        }
    }
    if (flag == 0){
    printf("No keywords in given statement\n");
    }
}


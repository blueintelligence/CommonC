#include <stdio.h>
#include <string.h>


int palindrome(char *str){
 int cnt=0;
 int flag=0;
 int len=-1;
 while(*(str+(++len)) != NULL);
 printf("%d",len--);
 while(cnt<=len){
     if(*(str+(cnt++)) != *(str+(len--)) ){
         printf("not palindrome");
         flag=1;
         break;   
     } 
 }
 return flag;
}

void main()
{
    char str[20];
    scanf("%s",str); 
    printf("%d",palindrome(str));
}

#include <stdio.h>
#include <string.h>


int palindrome(char *str,int len){
 int cnt=0;
 int flag=0;
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
    int i=0;
    while(*(str+(i))  != NULL)i++;
    printf("%d",i);
printf("%d",palindrome(str,i-1));

}

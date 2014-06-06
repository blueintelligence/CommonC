#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_STR_LEN_ONE 20
#define MAX_STR_LEN_TWO 20

int maxoftwo(int a , int b){return (a>b)?a:b;}

int tabular_LCS(char *a1, char *a2, int m , int n){
    
    int L[m+1][n+1];    
    int i=0,j=0;
    
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0){
                L[i][j]=0;
            }
            else if(a1[i-1]==a2[j-1]){
                L[i][j]= 1 + L[i-1][j-1];
            }
            else
            L[i][j]=maxoftwo(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}

int main(){
    
    //declaring two strings
    char str1[MAX_STR_LEN_ONE];
    char str2[MAX_STR_LEN_TWO];
    //taking counter for calculating string length
    int c=0;
    
    int len1;
    int len2;
    
    for(c=0;c<MAX_STR_LEN_ONE,((str1[c]=getchar())!='.');c++);
    len1=c;
    printf("%s.. %d",str1,len1);
    for(c=0;c<MAX_STR_LEN_TWO,((str2[c]=getchar())!='.');c++);
    len2=c;
    printf("\n%s..%d",str2,len2);
    printf("%d",tabular_LCS(str1,str2,len1,len2));
}

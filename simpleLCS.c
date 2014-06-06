#include <stdio.h>
#include <string.h>

int LCS(char *stra,char *strb,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(stra[m-1] == strb[n-1]){
        return 1+LCS(stra,strb,m-1,n-1);
    }
        return MAX(LCS(stra,strb,m-1,n),LCS(stra,strb,m,n-1));
    
}

int MAX(int a, int b){return (a>b)?a:b;}

main()
{  
    char a[]="AGGTAB";
    char b[]="GXTXAYB";
    
    int m = strlen(a);
    int n = strlen(b);
 
    printf("%d",m);
    printf("%d",n);
    printf("\n\nLongest common string is: %d",LCS(a,b,m,n)); 
  
}

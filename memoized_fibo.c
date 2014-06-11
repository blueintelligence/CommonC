#include <stdio.h>
#include <string.h>
#define MAX 20
#define NIL -1

int array[MAX];

void _initialize(){
    int i=0;
    for(i=0;i<MAX;(array[i]=NIL),i++);
}

int fibo(int n){
    
 if(array[n] == NIL)
   {
    if ( n <= 1 ){
      array[n] = n;
    }
    else
      array[n] = fibo(n-1) + fibo(n-2);
   }
      return array[n];
}

main()
{  
  _initialize(array);
  printf("%d",fibo(6));
  int i=0;
  for(i=0;i<MAX;(printf("\n%d",*(array+i))),i++);
}

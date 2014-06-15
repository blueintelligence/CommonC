#include <iostream>

using namespace std;
template<class T>
int f_search(T array[], T find,int len){ 
  
  // here int is the return type which represents the location in array
  
  int location,counter=0;
  
   
   
   for(counter=0;counter<=len;counter++){
       if(array[counter] == find){
           break;
       }
   }
  
   return counter+1; 

}


int main()
{
    int len=0;
    int arr[10]={01,12,23,34,45,56,67,78,89,90};
    cout<<"\n\n\n location: "<< f_search(arr,45,10);
    
    char arr1[10]={'A','V','I','B','N','O','T','R','L','S'};
    cout<<"\n\n\n location: "<< f_search(arr1,'N',10);
   
    double arr2[10]={1.12,12.22,23.32,34.87,45.34,56.67,67.89,78.77,89.90,90.15};
    cout<<"\n\n\n location: "<< f_search(arr2,45.34,10);
    
    return 0;
}

#include <iostream>

using namespace std;
template<class T>
T f_abs(T value); // declaration of functional template


template<class T>
T f_abs(T value){
    if(value < 0){
         return -value;
    }
    else 
    return value;
}

int main()
{
 cout<<"\nabs value is: "<<f_abs(-12); 
 cout<<"\nabs value is: "<<f_abs(-12.02); 
 cout<<"\nabs value is: "<<f_abs(12); 
 long l=-122210903909;
 cout<<"\nabs value is: "<<f_abs(l); 
    return 0;
}

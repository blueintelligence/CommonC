int *linear_search(int *arr,int search){
   int location=0;
    while(*(arr+(location++)) != search);
    return *(arr+(location-1));
}
void main(){
    int arr[10]={15,92,43,4,25,67,37,28,99};
    printf("%d",linear_search(arr,28));    
}

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* next;
};

/*
* This function accepts array and converts that into linked list. 
*/

struct node *arrayToLinkedList(int *array){
    
   int number_temp=0;
   struct node *head;
   head=(struct node*)malloc(sizeof(struct node));
   head->data=0;
   head->next=NULL;
   struct node *current;
   current=head;
   
   while(*(array+(number_temp++))){
       current->next=(struct node*)malloc(sizeof(struct node*));
       current->data=*(array+(number_temp-1));
       current=current->next;
   }
    return head;
}

main()
{
   int max_element=0,i=0;
   printf("enter the number of element for array:");
   scanf("%d",&max_element); //5
   printf("you entered %d",max_element);
   int *ar;
   ar=(int*)calloc(max_element+1,sizeof(int));
   
   for(i=0;i<max_element;scanf("\t %d",&ar[i]),i++);
   ar[i]=NULL;
   for(i=0;i<max_element+1;printf("\n %d",ar[i]),i++);
   
   struct node *linkToList;
   linkToList=arrayToLinkedList(ar);
    while(linkToList->next){
       printf("\n\n%d",linkToList->data);
       linkToList=linkToList->next;
   }
   free(ar);
   free(linkToList);
}

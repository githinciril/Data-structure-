#include<stdio.h>

int front=0;
int rear=-1;
int queue[50];
int max_size;

void enqueue();
void dequeue();
void peek();
void display();

void main(){
        printf("enter the size of the queue :");
        scanf("%d",&max_size);
        printf("\t\t\tMENU\n");
        printf("1.Enqueue  ");
        printf("2.Dequeue  ");
        printf("3.Display  ");
        printf("4.Peek  ");
        printf("5.Exit\n");
        int ch=0;
        while (ch!=5){
                  printf("\n");
                  printf("enter the choice :");
                  scanf("%d",&ch);
                  if (ch==1){
                      enqueue();
                      }
                  else if(ch==2){
                             dequeue();
                             }
                  else if (ch==3){
                              display();
                              }
                   else if(ch==4){
                              peek();
                              }
                    }
       }
       
void  enqueue(){
        if (rear==max_size-1){
            printf("QUEUE OVERFLOW\n");
            }
        else{
               printf("enter value to be inserted :");
               int value;
               scanf("%d",&value);
               rear++;
               queue[ rear]=value;
                }
          printf("\n");
          }              
                              
void dequeue(){
        if(front>rear){
           printf("QUEUE UNDERFLOW\n");
           }
        else{
               printf("the deleted element is :%d",queue[front]);
               front++;
               }
         printf("\n");
         }
         
void display(){
         int i;
         if(front>rear){
             printf("the queue is empty\n");
             }
         else{
                printf("the elements of queue are :\n");
                for (i=front;i<rear+1;i++){
                      printf("%d  ",queue[i]);
                      }
                  printf("\n");
                 }
          }
   
 void peek(){
         if(front>rear){
            printf("the queue is empty\n");
            }
         else{
                 printf("the front element is : %d",queue[front]);
                 }
        printf("\n");
       }
       
       

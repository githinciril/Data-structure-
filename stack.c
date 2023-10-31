#include<stdio.h>

int top=-1;
int stack[50];
int max_size;

void push();
void pop();
void peek();
void display();

void main(){
        printf("enter the size of the stack :");
        scanf("%d",&max_size);
        printf("\t\t\tMENU\n");
        printf("1.Push  ");
        printf("2.Pop  ");
        printf("3.Display  ");
        printf("4.Peek  ");
        printf("5.Exit\n");
        int ch=0;
        while (ch!=5){
                  printf("\n");
                  printf("enter the choice :");
                  scanf("%d",&ch);
                  if (ch==1){
                      push();
                      }
                  else if(ch==2){
                             pop();
                             }
                  else if (ch==3){
                              display();
                              }
                   else if(ch==4){
                              peek();
                              }
                    }
       }
       
void  push(){
        if (top==max_size-1){
            printf("STACK OVERFLOW\n");
            }
        else{
               printf("enter value to be inserted :");
               int value;
               scanf("%d",&value);
               top++;
               stack[ top]=value;
                }
          printf("\n");
          }              
                              
void pop(){
        if(top==-1){
           printf("STACK UNDERFLOW\n");
           }
        else{
               printf("the deleted element is :%d",stack[top]);
               top--;
               }
         printf("\n");
         }
         
void display(){
         int i;
         if(top==-1){
             printf("the stack is empty\n");
             }
         else{
                printf("the elements of stack are :\n");
                for (i=0;i<=top;i++){
                      printf("%d  ",stack[i]);
                      }
                  printf("\n");
                 }
          }
   
 void peek(){
         if(top==-1){
            printf("the stack is empty\n");
            }
         else{
                 printf("the front element is : %d",stack[top]);
                 }
        printf("\n");
       }

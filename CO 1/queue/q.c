#include <stdio.h>
#define N 5
int queue[5],rear=-1,front=-1,choice;
void enqueue();
void dequeue();
void top();
void display();



void main()
{
do
  {
  printf(" 1 for enqueue\n 2 for dequeue\n 3 for top\n 4 for display\n Enter your choice:\n");
  scanf("%d",&choice);
  switch(choice)
    {
    case 1:
    enqueue();
    break;
    case 2:
    dequeue();
    break;
    case 3:
    top();
    break;
    case 4:
    display();
    break;
    default:printf("Wrong choice");
    }
  }while(choice!=0); 
}



void enqueue()
{
int a;
printf("Enter element\n");
scanf("%d",&a);
if(rear==N-1)
  {
  printf("overflow\n");
  }
else if(rear==-1&&front==-1)
  {
  rear=front=0;
  queue[rear]=a;
  } 
else 
  {
  rear++;
  queue[rear]=a;
  }
}



void dequeue()
{
int b;
if(rear==-1&&front==-1)
  {
  printf("Empty\n");
  }
else if(rear==front)
  {
  rear=front=-1;
  }  
else
  {
  printf("%d is removed\n",queue[front]);
  front++;
  }
}



void top()
{
if(front==-1&&rear==-1)
  {
  printf("Empty");
  }
else
  {
  printf("Element at top=%d\n",queue[front]); 
  }
}



void display()
{
int i;
if(front==-1&&rear==-1)
  {
  printf("Empty\n");
  }
else
  {
  for(i=front;i<=rear;i++)
     {
     printf("%d\t",queue[i]);
     }
  }
  printf("\n");
}             
      
   



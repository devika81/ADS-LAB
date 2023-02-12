#include <stdio.h>
#define N 5
void push();
void pop();
void topp();
void display(); 
int top=-1,stack[N];



void main()
{
int choice;
do
   {
   printf("1 for push\n2 for pop\n3 for top\n4 for display\nEnter your choice\n");
   scanf("%d",&choice);
   switch(choice)
      {
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 3:
      topp();
      break;
      case 4:
      display();
      break;
      default:printf("Invalid entry");
      }
   }while(choice!=0);
}



void push()
{
int a;
printf("Enter an element\n");
scanf("%d",&a);
if(top==N-1)
  {
  printf("overflow\n");
  }
else
  {
  top++;
  stack[top]=a;
  }
}




void pop()
{
int b;
if(top==-1)
  {
  printf("underflow\n");
  }
else
  {
  b=stack[top];
  top--;
  printf("%d is popped\n",b); 
  }
}
 


void topp()
{
if(top==-1)
  {
  printf("underflow\n");
  }
else
  {
  printf("Element in the top=%d\n",stack[top]);
  }
}



void display()
{
int i;
printf("Elements are:\n");
for(i=top;i>=0;i--)
   {
   printf("%d\t",stack[i]);
  }
printf("\n");

}
   


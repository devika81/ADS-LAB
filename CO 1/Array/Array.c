#include <stdio.h>
int i,limit,a[10];
void max();
void min();
void sum();
void mean();
void count();



void main()
{
int choice;
printf("Enter limit\n");
scanf("%d",&limit);
printf("Enter numbers\n");
for(i=0;i<limit;i++)
   {
    scanf("%d",&a[i]);
   }
do
{
printf(" 1 for maximum \n 2 for minimum \n 3 for sum \n 4 for mean \n 5 for count \n Enter your choice ");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    max();
    break;
    case 2:
    min(); 
    break;
    case 3:
    sum();
    break;
    case 4:
    mean();
    break;
    case 5:
    count();
    break;
    default:printf("Invalid Entry");
    break;
}
}while(choice!=0);
}






void max()
  {
  int max=a[0];
  for(i=0;i<limit;i++)
      {
       
       if(a[i]>max)
          {
          max=a[i];
          }
      }
  printf("Term which is maximum=%d\n",max);
  }




void min()
  {
  int min=a[0];
  for(i=0;i<limit;i++)
     {
   
     if(a[i]<min)
       {
       min=a[i];
       }
     }
  printf("Term which is minimum=%d\n",min);
  }




void sum()
  {
  int sum=0;
  for(i=0;i<limit;i++)
     {
     sum=sum+a[i];
     }
  printf("Sum=%d\n",sum);
  }
  
  
  
  
  
void mean()
  {
  float sum=0,mean;
  for(i=0;i<limit;i++)
     {
     sum=sum+a[i];
     }
  mean=sum/limit;
  printf("Mean=%f\n",mean);
  }



void count()
  {
  int c,count=0;
  printf("Enter element to be counted ");
  scanf("%d",&c); 
  for(i=0;i<limit;i++)
     {
     if(a[i]==c)
       {
       count=count+1;
       }
     }
  printf("Count=%d\n",count);
  }
       

#include<stdio.h>
#include <stdlib.h>
void insbeg();
void insend();
void insposn();
void delbeg();
void delend();
void delposn();
void search();
void display();


struct node
     {
     int data;
     struct node *prev;
     struct node *next;
     };

struct node *newnode,*head=NULL,*temp,*prev,*next,*ptr,*preptr;

void main()
{
int choice;


do{
printf(" 1 for insertion at beginning\n 2 for insertion at end\n 3 for insertion at specific position\n 4 for deletion at beginning\n 5 for deletion at end\n 6 for deletion at specific position\n 7 for searching\n 8 for display\n Enter your choice:\n");
scanf("%d",&choice);
   switch(choice)
         {
	   case 1:
	   {
           insbeg();
           break;
	   }
	   case 2:
	   {
	   insend();
	   break;
	   }
	   case 3:
	   {
	   insposn();
	   break;
	   }
	   case 4:
	   {
	   delbeg();
	   break;
	   }
	   case 5:
	   {
	   delend();
	   break;
	   }
	   case 6:
	   {
	   delposn();
	   break;
	   }
	   case 7:
	   {
	   search();
	   break;
	   }
           case 8:
	   {
	   display();
           break;
           }
           default:
           {
           printf("Invalid entry\n");
           }
         }
 }while(choice!=0);
}




void insbeg()
  {
   int data;
   printf("Enter the new element to be inserted:\n");
   newnode=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&newnode->data);
   newnode->prev=NULL;
   newnode->next=NULL;
   if(head==NULL)
     {
     newnode->next=head;
     head=newnode;
     }
   else
    {
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    }
 } 



void insend()
   {
   printf("Enter the new element to be inserted:\n");
   newnode=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&newnode->data);
   if(head==NULL)
      {
      head==newnode;
      }
   else
      {
      temp=head;
      while(temp->next!=0)
          {
          temp=temp->next;
          }
      temp->next=newnode;
      newnode->prev=temp;
      newnode->next=NULL;
      }
   }




void insposn()
   {
   int pos;
   printf("Enter after what element you want to insert:\n");
   scanf("%d",&pos);
   printf("Enter the element to be inserted:\n");
   newnode=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==NULL)
       {
       head=newnode;
       }
   else
       {
       temp=head;
       while(temp->data!=pos)
          {
          temp=temp->next;
          }
       newnode->next=temp->next;
       temp->next=newnode;
       newnode->prev=temp;
       temp->next->prev=newnode;
       }
   }




 void delbeg()
   {

   if(head==NULL)
       {
       printf("List is empty"); 
       }
   else
       {
       ptr=head;
       head=head->next;
       head->prev=NULL;
       free(ptr);
       }
   }




void delend()
   {
   struct node *ptr=head,*preptr=head;
   if(head==NULL)
      {
      printf("List is empty");
      }
   
   else 
      {
      while(ptr->next!=NULL)
          {
          preptr=ptr;
          ptr=ptr->next;
          }
      ptr->prev->next=NULL;
      free(ptr);
      }
   }





void delposn()
{
int a,flag=0;
printf("Enter the element to be deleted:\n");
scanf("%d",&a);
struct node * ptr=head,* preptr=head;
if(ptr==NULL)
  {
  printf("List is empty");
  }
else 
  {
  while(temp!=NULL)
      {
      if(temp->data==a)
         {
         flag=1;
         }
      temp=temp->next;
      }
      if(flag==0)
         {
         printf("%d is not present in the list\n",a);
         }
      else
         {
         while(ptr->data!=a)
            {
            preptr=ptr;
            ptr=ptr->next;
            }
         preptr->next=ptr->next;
         ptr->next->prev=preptr;
         free(ptr);
         }
  }
}     






void display()
{
struct node *ptr=head;
if(head==NULL)
  {
  printf("List is empty");
  }
else
  {
  while(ptr!=NULL)
      {
      printf("<-%d->",ptr->data);
      ptr=ptr->next;
      }
printf("\n");   
  }     
}  




void search()
{
struct node *ptr=head;
int position=0,search,flag=0;
printf("Enter an element to be serached:\n");
scanf("%d",&search);
if(head==NULL)
  {
  printf("List is empty");
  }
else
  {
   while(ptr!=NULL)
       {
	position=position+1;
       if(ptr->data==search)
	  {
          printf("Element is present at position %d\n",position);
          flag=1;
          }
	ptr=ptr->next;
       }
       if(flag==0)
	  {
	  printf("Element is not present\n");
	  }
  }
}    
      

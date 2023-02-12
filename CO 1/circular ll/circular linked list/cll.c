#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};

struct node *head = NULL , *current = NULL;

void insertBeg(void){

	int data;
	printf("Enter a number to insert : ");
	scanf("%d",&data);

	struct node *temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->next = NULL;

	if(head == NULL){
		head = temp;
		current = temp;
		temp->next = head;
	}
	else {
		temp->next = head;
		head = temp;
		current->next = temp;
	}
}

void insertEnd(void){

	int data;
	printf("Enter a number to insert : ");
	scanf("%d",&data);

	struct node *temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->next = NULL;

	if(head == NULL){
		head = temp;
		current = temp;
		temp->next = head;
	}
	else {
		current->next = temp;
		current = temp;
		current->next = head;
	}
}



void deleteBeg(void){

	struct node *preptr = head,*ptr = head;

	if(preptr == NULL)
		printf("The list is empty\n\n");
	else if(preptr->next == head) {
		head = NULL;
		current = NULL;
		printf("Deleted number is %d\n\n",preptr->data);
		free(preptr);
	}
	else{
		ptr = preptr->next;
		head = ptr;
		current->next = head;
		printf("Deleted number is %d\n\n",preptr->data);
		free(preptr);
	}	
}

void deleteEnd(void){
	struct node *ptr = head ,*preptr = head;

	if(preptr == NULL)
		printf("The list is empty\n\n");
	else if (preptr->next == head){
		head = NULL;
		current = NULL;
		printf("Deleted number is %d\n\n",preptr->data);
		free(preptr);
	}
	else {
		while(ptr->next != head){
			preptr = ptr;
			ptr = ptr->next;
		}
		current = preptr;
		current->next = head;
		printf("Deleted number is %d\n\n",ptr->data);
		free(ptr);
	}
}


void display(void){
	struct node *ptr = head;

	if(ptr == NULL)
		printf("The list is empty\n\n");
	else{	
		while(ptr->next != head){
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
		printf("%d\n\n",ptr->data);
	}
}

void main(){
	int choice;

	do{
		printf("Enter a choice : \n1.Insert at beginning\n2.Insert at end \n3.Delete from start\n4.Delete from end\n5.Display\n\n-> ");
		scanf("%d",&choice);

		switch(choice){
			case 0 : {
					 printf("Exiting!\n");
					 exit(0);
				 }
			case 1 : {
					 insertBeg();
					 break;

				 }
			case 2 : {
					 insertEnd();
					 break;
				 }
			
			case 3 : {
					 deleteBeg();
					 break;
				 }
			case 4 : {
					 deleteEnd();
					 break;
				 }
			
			
			case 5 : {
					 display();
					 break;
				 }
			default : {
					  printf("Wrong input!\n");
					  break;
				  }
		}
	}while(choice != 0 );
}


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}NODE;


void main(){
	NODE *head,*first,*temp;
	//int n;
	first=NULL;
	int count=0;
	int choice=1;
	while(choice){
		temp=(NODE*)(malloc(sizeof(NODE)));
		printf("Enter the data\n");
		scanf("%d",&temp->data);
		if (first==NULL){
			head=temp;
			first=temp;
		}
		else{
			head->next=temp;
			head=temp;
		}
		printf("Continue ?(0 or 1)\n");
		scanf("%d",&choice);
	}
	temp->next=NULL;
	temp=first;
	printf("Elements of the list are\n");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		count++;
		temp=temp->next;
	}
	printf("NULL \n");
	printf("no of nodes=%d\n",count);

	
}

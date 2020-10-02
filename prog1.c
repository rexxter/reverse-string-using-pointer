#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}node;
node *head = NULL;
void create_list()
{
	head = malloc(sizeof(node));
	head->data = 54;
	head->link = NULL;
	node *current = malloc(sizeof(node));
	current->data = 84;
	current->link = NULL;
	head->link=current;
	current = malloc(sizeof(node));
	current->data=24;
	current->link=NULL;
	head->link->link=current;
}
void display()
{
	node *ptr = head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr = ptr->link;
	}
	printf("NULL");
}
void add_at_end(int d)
{
	node *ptr,*temp;
	ptr = head;
	temp = malloc(sizeof(node));
	temp->data = d;
	temp->link = NULL;
	while(ptr->link!=NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

int main()
{
	char ch;
	int d;
	create_list();
	printf("Our Linked list is : ");
	display();
	printf("\nDo you want to Insert a node at the end (Y/N) :");
	ch = getch();
	if(ch == 'y' || 'Y')
	{
		printf("\nEnter the data you want to insert at the end :");
		scanf("%d",&d);
		add_at_end(d);
		printf("\nOur updated linked list is : ");
		display();
	}
	else
	{
		printf("\nTheir is no updation in our linked list");
	}
return 0;
}

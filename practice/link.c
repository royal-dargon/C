#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Grade_info {
	int num;
	char name[20];
	struct Grade_info *next;
};
typedef struct Grade_info Node;

Node *Create_LinkList()
{
	Node *head, *tail, *pnew;
	int num;
	char name[20];
	head = (Node*)malloc(sizeof(Node));
	if(head == NULL)
	{
		printf("no enough memory!\n");
		return (NULL);
	}
	head -> next = NULL;
	tail = head;

	printf("input the info of the student\n");
	while(1)
	{
		printf("start!\n");
		scanf("%d",&num);
		if(num < 0)
			break;
		printf("next\n");
		scanf("%s",name);
		pnew = (Node*)malloc(sizeof(Node));
		if(pnew == NULL)
		{
			printf("no enough menory!\n");
			return (NULL);
		}
		pnew -> num = num;
		//pnew -> name = name;
		strcpy(pnew->name,name);
		pnew->next = NULL;

		tail->next = pnew;
		tail = pnew;
	}
	return (head);
}

void Display_LinkList(Node *head)
{
	Node *p;
	for(p = head->next;p != NULL; p = p -> next)
	{
		printf("%d ", p->num);
		printf("%s\n", p->name);
	}
}

Node* Swap(Node *head)
{
	Node *p, *r;
	p = head->next;
	head->next = NULL;
	while(p != NULL)
	{
		r = p->next;
		p->next = head->next;
		head->next = p;
		p = r;
	}
	return (head);
}

void main() 
{
	Node *head;
	head = Create_LinkList();
	Display_LinkList(head);
	head = Swap(head);
	printf("now this is swap!\n");
	Display_LinkList(head);
}
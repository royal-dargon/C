#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StudentInfo{
	char* name;
	int Id;
	struct StudentInfo* next;
};

typedef struct StudentInfo Node;

Node* Creat();
void DisPlay(Node* head);
Node* Sort(Node* head);
void Free(Node* head);

void main()
{
	Node* head;
	head = Creat();
	if(head == NULL)
	{
		printf("failed!\n");
	}
	DisPlay(head);
	head = Sort(head);
	printf("this is the result after sort\n");
	DisPlay(head);
	Free(head);
}

Node* Creat()
{
	Node *head, *tail, *pnew;
	int Id;
	char name[20];
	head = (Node*)malloc(sizeof(Node));
	if(head == NULL)
	{
		printf("there is not enough memory!\n");
	}
	head -> next = NULL;
	tail = head;
	printf("please input the information about sudents\n");
	while(1)
	{
		printf("Name:\n");
		scanf("%s",name);
		printf("continue! Id:\n");
		scanf("%d",&Id);
		if(Id <= 0)
		{
			break;
		}
		pnew = (Node*)malloc(sizeof(Node));
		pnew -> name = (char*)malloc(sizeof(char)*(strlen(name)+1));
		strcpy(pnew->name,name);
		pnew->Id = Id;
		pnew->next = NULL;
		tail->next = pnew;
		tail = pnew; 
	}
	return head;
}

void DisPlay(Node* head)
{
	Node *p;
	p = head->next;
	while(p != NULL )
	{
		printf("%d ",p->Id);
		printf("%s\n",p->name);
		p = p -> next;
	}
}

Node* Sort(Node* head)
{
	Node* temp,*r;
	temp = head->next;
	if(temp == NULL)
	{
		return NULL;
	}
	head->next = NULL;
	while(temp != NULL)
	{
		r = temp->next;
		temp->next = head->next;
		head->next = temp;
		temp = r;
	}
	return head;
}

void Free(Node* head)
{
	Node *q,*p;
	p = head;
	while(p->next != NULL)
	{
		q = p->next;
		free(p->next->name);
		free(p->next);
		p->next = q->next;		
	}
	free(head);	
}

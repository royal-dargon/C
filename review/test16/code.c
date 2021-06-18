#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct StuInfo{
    char *   name;
    int      Id;
    struct StuInfo *next;
};
typedef struct StuInfo Node;

Node* Create()
{
    Node *head, *tail, *pnew;
    char tempName[20];
    int tempId;

    head = (Node*)malloc(sizeof(Node));
    if(head == NULL)
    {
        printf("the memory is not enough!");
        return NULL;
    }
    head->next = NULL;
    tail = head;

    printf("input the info of the students\n");
    while(1)
    {
        printf("name:");
        scanf("%s",tempName);
        printf("Id:");
        scanf("%d",&tempId);
        if(tempId == -1)
        {
            break;
        }
        pnew = (Node*)malloc(sizeof(Node));
        pnew->name = (char*)malloc(sizeof(char)*(strlen(tempName)+1));
        strcpy(pnew->name,tempName);
        pnew->Id = tempId;
        pnew->next = NULL;

        tail->next = pnew;
        tail = pnew;
    }
    return head;
}

void DisPlay(Node* head)
{
    Node* p;
    for(p = head->next; p != NULL; p = p->next)
    {
        printf("%s\t",p->name);
        printf("%d\n",p->Id);
    }
}

Node* Dolist(Node* head)
{
    Node *p, *r;
    p = head->next;
    if(p == NULL)
    {
        return NULL;
    }
    head->next = NULL;
    while(p != NULL)
    {
        r = p->next;
        p -> next = head -> next;
        head->next = p;
        p = r;
    }
    return head;
}

void Free(Node* head)
{
    Node*p ,*q;
    p = head;
    while(p->next != NULL)
    {
        q = p->next;
        free(q->next->name);
        p->next = q->next;
        free(q);
    }
    free(head);
}

void main()
{
    Node *head;
    head = Create();
    if(head == NULL)
    {
        printf("fail!");
        return;
    }
    DisPlay(head);
    printf("after sort!\n");
    head = Dolist(head);
    DisPlay(head);
    Free(head);
}

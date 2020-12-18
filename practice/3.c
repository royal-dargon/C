#include <stdio.h>
#include <stdlib.h>

typedef struct node{
 int Val;
 struct node* Prev;
 struct node* Next;
}listNode;

listNode* receive(listNode* ptr,int n){
    int i;
 for ( i=0;i<n;i++){
 listNode* node=(listNode*)malloc(sizeof(listNode));
 scanf("%d", &node->Val);
 node->Next = ptr;
 node->Prev = NULL;
 if (ptr!=NULL) ptr->Prev = node;
 ptr = node;
 }
 return ptr;
} //����

void test(listNode *ptr,int n)
{
    int flag = 1, count = 1;
    listNode *head = ptr;
    while (count != n )
    {
        ptr = ptr->Next;
        count++;
    }  //��ȡ�������ĩ��
    count = 0;
    while (count != n-1 )//һ��n��ѭ��
    {
        listNode*before = ptr;
        listNode*behind = head;
        if ((before -> Val) != (behind ->Val)) //�ж� 
        {
         flag = 2;//���ֲ�����ı�flag��ֵ

        }
        before = before->Prev;
        behind = behind->Next;
        count ++;
    }
    if (flag == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }


}

int main()
{
    int n;
    scanf("%d",&n);
    listNode*ptr = NULL;
    ptr = receive(ptr,n);
    test(ptr,n);
    return 0;
}

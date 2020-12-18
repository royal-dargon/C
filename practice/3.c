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
} //调用

void test(listNode *ptr,int n)
{
    int flag = 1, count = 1;
    listNode *head = ptr;
    while (count != n )
    {
        ptr = ptr->Next;
        count++;
    }  //先取到链表的末端
    count = 0;
    while (count != n-1 )//一共n次循环
    {
        listNode*before = ptr;
        listNode*behind = head;
        if ((before -> Val) != (behind ->Val)) //判断 
        {
         flag = 2;//发现不满足改变flag的值

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

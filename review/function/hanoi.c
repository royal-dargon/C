#include <stdio.h>

void Hanoi(int n,char A,char B,char C);
void Move(char A, char B);

void main()
{
    int n;
    printf("write the number of the discs:");
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
}

void Hanoi(int n,char A,char B,char C)
{
    if(n != 1){
        Hanoi(n-1,A,C,B);
        Move(A,C);
        Hanoi(n-1,B,A,C);
    }
    else
        Move(A,C);
}

void Move(char A,char B)
{
    printf("the step is %c to %c\n",A,B);
}
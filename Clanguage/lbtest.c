#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    double value;
    struct node* next;
}Node;

Node* head=NULL;

void InsertNodeBegin(double value)
{
    Node* p=(Node*)malloc(sizeof(Node));
    if(p==NULL){
        printf("�ڴ����ʧ��\n");
        exit(0);
    }
    else{
        p->value=value;
        p->next=head;
        head=p;        
        printf("����ڵ�ɹ�\n");
    }
}

void ShowList(void)
{
    Node* p=head;
    if(p==NULL)
        printf("����Ϊ��\n");
    else
        for(;p;p=p->next)
            printf("%lf\n",p->value);
}

void DeleteNodeBegin(void)
{
    Node*p=head;
    if(p==NULL)
        printf("����Ϊ��\n");
    else{
        head=p->next;
        free(p);
        printf("ɾ���ڵ�ɹ�\n");
    }
}

void 

int main()
{
    double number;
    printf("����һ����\n");
    scanf("%lf",&number);
    InsertNodeBegin(number);
    return 0;
}
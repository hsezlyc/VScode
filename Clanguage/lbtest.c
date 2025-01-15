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
        printf("内存分配失败\n");
        exit(0);
    }
    else{
        p->value=value;
        p->next=head;
        head=p;        
        printf("插入节点成功\n");
    }
}

void ShowList(void)
{
    Node* p=head;
    if(p==NULL)
        printf("链表为空\n");
    else
        for(;p;p=p->next)
            printf("%lf\n",p->value);
}

void DeleteNodeBegin(void)
{
    Node*p=head;
    if(p==NULL)
        printf("链表为空\n");
    else{
        head=p->next;
        free(p);
        printf("删除节点成功\n");
    }
}

void 

int main()
{
    double number;
    printf("输入一个数\n");
    scanf("%lf",&number);
    InsertNodeBegin(number);
    return 0;
}
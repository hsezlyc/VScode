#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    double value;
    struct node* next;
}Node;

Node* phead=NULL;

void InsertListBegin(double value)
{
    Node* p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
    {
        printf("�ڴ����ʧ��\n");
        exit(0);
    }
    else{
        p->value=value;
        p->next=phead;  
        phead=p;  
        printf("�ڵ����ɹ�\n");
    }
}

void ShowList(Node* phead)
{
    Node* p=phead;
    while(p!=NULL)
    {
        printf("%lf\n",p->value);
        p=p->next;
    }
}

void DeleteListBegin()
{
    Node* p=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        phead=p->next;
        free(p);
        printf("�ڵ�ɾ���ɹ�\n");
    }
}

void DeleteListEnd()
{
    Node* p=phead;
    Node* q=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=NULL;
        free(p);
        printf("�ڵ�ɾ���ɹ�\n");
    }
}

void DeleteListValue(double value)
{
    Node* p=phead;
    Node* q=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->value!=value)
        {
            q=p;
            p=p->next;
            if(p==NULL)
            {
                printf("������û�и�ֵ\n");
                return;
            }
        }
        q->next=p->next;
        free(p);
        printf("�ڵ�ɾ���ɹ�\n");
    }
}

void InsertListEnd(double value)
{
    Node* p=(Node*)malloc(sizeof(Node));
    Node* q=phead;
    if(p==NULL)
    {
        printf("�ڴ����ʧ��\n");
        exit(0);
    }
    else{
        p->value=value;
        p->next=NULL;
        if(q==NULL)
        {
            phead=p;
        }
        else{
            while(q->next!=NULL)
            {
                q=q->next;
            }
            q->next=p;
        }
        printf("�ڵ����ɹ�\n");
    }
}

void InsertListValue(double value,double newvalue)
{
    Node* p=(Node*)malloc(sizeof(Node));
    Node* q=phead;
    if(p==NULL)
    {
        printf("�ڴ����ʧ��\n");
        exit(0);
    }
    else{
        p->value=newvalue;
        while(q->value!=value)
        {
            q=q->next;
            if(q==NULL)
            {
                printf("������û�и�ֵ\n");
                return;
            }
        }
        p->next=q->next;
        q->next=p;
        printf("�ڵ����ɹ�\n");
    }
}
void DeleteListAll()
{
    Node* p=phead;
    Node* q=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p!=NULL)
        {
            q=p;
            p=p->next;
            free(q);
        }
        phead=NULL;
        printf("���������\n");
    }
}
void ReverseList()
{
    Node* p=phead;
    Node* q=NULL;
    Node* r=NULL;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        phead=q;
        printf("�����ѷ�ת\n");
    }
}

void SortList()
{
    Node* p=phead;
    Node* q=phead;
    double temp;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p!=NULL)
        {
            q=p->next;
            while(q!=NULL)
            {
                if(p->value>q->value)
                {
                    temp=p->value;
                    p->value=q->value;
                    q->value=temp;
                }
                q=q->next;
            }
            p=p->next;
        }
        printf("����������\n");
    }
}

void FindList(double value)
{
    Node* p=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->value!=value)
        {
            p=p->next;
            if(p==NULL)
            {
                printf("������û�и�ֵ\n");
                return;
            }
        }
        printf("��ֵ��������\n");
    }
}

void ChangeList(double value,double newvalue)
{
    Node* p=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->value!=value)
        {
            p=p->next;
            if(p==NULL)
            {
                printf("������û�и�ֵ\n");
                return;
            }
        }
        p->value=newvalue;
        printf("�ڵ��޸ĳɹ�\n");
    }
}

void InsertListIndex(double value,int index)
{
    Node* p=(Node*)malloc(sizeof(Node));
    Node* q=phead;
    int i=0;
    if(p==NULL)
    {
        printf("�ڴ����ʧ��\n");
        exit(0);
    }
    else{
        p->value=value;
        if(index==0)
        {
            p->next=phead;
            phead=p;
        }
        else{
            while(i<index-1)
            {
                q=q->next;
                i++;
                if(q==NULL)
                {
                    printf("����������Χ\n");
                    return;
                }
            }
            p->next=q->next;
            q->next=p;
        }
        printf("�ڵ����ɹ�\n");
    }
}

void DeleteListIndex(int index)
{
    Node* p=phead;
    Node* q=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        if(index==0)
        {
            phead=p->next;
            free(p);
        }
        else{
            while(i<index)
            {
                q=p;
                p=p->next;
                i++;
                if(p==NULL)
                {
                    printf("����������Χ\n");
                    return;
                }
            }
            q->next=p->next;
            free(p);
        }
        printf("�ڵ�ɾ���ɹ�\n");
    }
}

void ChangeListIndex(double value,double newvalue,int index)
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(i<index)
        {
            p=p->next;
            i++;
            if(p==NULL)
            {
                printf("����������Χ\n");
                return;
            }
        }
        p->value=newvalue;
        printf("�ڵ��޸ĳɹ�\n");
    }
}

void FindListIndex(double value,int index)
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(i<index)
        {
            p=p->next;
            i++;
            if(p==NULL)
            {
                printf("����������Χ\n");
                return;
            }
        }
        if(p->value==value)
        {
            printf("��ֵ��������\n");
        }
        else{
            printf("��ֵ����������\n");
        }
    }
}

void ShowListIndex(int index)
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(i<index)
        {
            p=p->next;
            i++;
            if(p==NULL)
            {
                printf("����������Χ\n");
                return;
            }
        }
        printf("%lf\n",p->value);
    }
}

void ShowListEnd()
{
    Node* p=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->next!=NULL)
        {
            p=p->next;
        }
        printf("%lf\n",p->value);
    }
}

void ShowListLength()
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p!=NULL)
        {
            p=p->next;
            i++;
        }
        printf("������Ϊ%d\n",i);
    }
}

void ShowListValue(double value)
{
    Node* p=phead;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->value!=value)
        {
            p=p->next;
            if(p==NULL)
            {
                printf("������û�и�ֵ\n");
                return;
            }
        }
        printf("%lf\n",p->value);
    }
}

void ShowListValueIndex(double value)
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p->value!=value)
        {
            p=p->next;
            i++;
            if(p==NULL)
            {
                printf("������û�и�ֵ\n");
                return;
            }
        }
        printf("��ֵ�������е�����Ϊ%d\n",i);
    }
}

void ShowListValueAll(double value)
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p!=NULL)
        {
            if(p->value==value)
            {
                printf("��ֵ�������е�����Ϊ%d\n",i);
            }
            p=p->next;
            i++;
        }
    }
}

void ShowListValueLength(double value)
{
    Node* p=phead;
    int i=0;
    if(p==NULL)
    {
        printf("����Ϊ��\n");
    }
    else{
        while(p!=NULL)
        {
            if(p->value==value)
            {
                i++;
            }
            p=p->next;
        }
        printf("��ֵ�������г��ֵĴ���Ϊ%d\n",i);
    }
}

int main()
{
    double x;
    printf("������һ������\n");
    scanf("%lf",&x);
    InsertListBegin(x);

    return 0;
}
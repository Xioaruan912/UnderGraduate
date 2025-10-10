// 一个带头结点递增有序的单链表L，申请一个值为x 的结点空间，将其
// 插入L 后，单链表仍保持递增有序

#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;

typedef struct LNode
{
    Elemtype data;
    struct LNode *next;
} LNode, *Linklist;

void print_L(Linklist L)
{
    Linklist r = L;
    while (r->next != NULL)
    {
        printf("%d -> ", r->next->data);
        r = r->next;
    }
    printf("\n");
}

Linklist back_insert_and_init()
{
    Linklist L = (Linklist)malloc(sizeof(LNode));
    L->next = NULL;
    Linklist r = L;
    int x;
    printf("输入元素 \n");
    scanf("%d", &x);
    while (x != 9999)
    {
        Linklist s = (Linklist)malloc(sizeof(LNode));
        s->data = x;
        s->next = NULL;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    return L;
}

void insert_and_keep(Elemtype i, Linklist L)
{
    Linklist r = L;
    while (r != NULL)
    {
        r = r->next;
        if (i <= r->data)
        {
            break;
        }
    }

    Linklist s = (Linklist)malloc(sizeof(LNode));
    s->data = i;
    s->next = r->next;
    r->next = s;
}

void main()
{

    Linklist L = back_insert_and_init();
    print_L(L);
    insert_and_keep(4, L);
    print_L(L);
}

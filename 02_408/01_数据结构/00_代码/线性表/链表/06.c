// 编写在带头结点的单链表L 中删除最小值点的算法

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

void delete_min(Linklist L)
{
    Linklist P = L;
    Linklist x = L;
    while (P->next != NULL)
    {
        if (x->next->data > P->next->data)
        {
            x = P;
        }
        P = P->next;
    }
    Linklist u = x->next;
    x->next = u->next;
    free(u);
}

void main()
{

    Linklist L = back_insert_and_init();
    print_L(L);
    delete_min(L);
    print_L(L);
}

// 3、删除带头结点单链表中第一个值为x 的结点

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

// 3、删除带头结点单链表中第一个值为x 的结点
void delete_x(Elemtype x, Linklist L)
{
    Linklist r = L;
    while (r->next != NULL)
    {
        if (r->next->data == x)
        {
            break;
        }
        r = r->next;
    }

    Linklist s = (Linklist)malloc(sizeof(LNode));
    s = r->next;
    r->next = s->next;
    free(s);
}

void main()
{

    Linklist L = back_insert_and_init();
    print_L(L);
    delete_x(4, L);
    print_L(L);
}

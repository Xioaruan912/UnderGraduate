// 试编写算法将带头结点的单链表就地逆置，即不需要借助辅助空间，
// 保证空间复杂度为O(1)

// 头插法会导致原本有序的序列逆置
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

void reverse_all_o_one(Linklist L)
{

    Linklist p = L->next;
    L->next = NULL;
    Linklist r;
    while (p != NULL)
    {
        r = p->next;
        p->next = L->next;
        L->next = p;
        p = r;
    }
}
void main()
{

    Linklist L = back_insert_and_init();
    print_L(L);
    reverse_all_o_one(L);
    print_L(L);
}

// 分别采用头插法和尾插法建立一个带头结点的单链表（思考：如何创
// 建一个不带头结点的单链表，强化篇讲解）【头插和尾插】

// 定义结构体
#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;

typedef struct LNode
{
    Elemtype data;
    struct LNode *next;
} LNode, *Linklist; // 设定一个执行节点的结构体 以及 链表结构体 LNode 用于指向节点 Linklist指向链表

// 查看输入的链表
void print_L(Linklist L)
{
    Linklist r = L;
    while (r->next != NULL)
    {
        printf("%d ->", r->next->data);
        r = r->next;
    }
}

// 头插法
Linklist head_insert_Linklist()
{
    Linklist L = (Linklist)malloc(sizeof(LNode));
    L->next = NULL;
    Linklist r = L;
    int x;
    printf("输入元素 \n");
    scanf("%d", &x);
    while (x != 9999)
    {
        Linklist n = (Linklist)malloc(sizeof(LNode));
        n->next = r->next;
        n->data = x;
        r->next = n;
        scanf("%d", &x);
    }
    printf("输入元素结束 \n");
    return L;
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

void main()
{
    // Linklist L = head_insert_Linklist();
    Linklist L = back_insert_and_init();
    print_L(L);
}

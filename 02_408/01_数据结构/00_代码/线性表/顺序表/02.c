// 删除顺序表L 的第k 个元素并返回其值

// 【分析】
//  1.用户传入  k 先要进行比对k的合法性 如果合法 那么先取出数值 并且把后面的数据向前移动

#include <stdio.h>
#define MAXSIZE 100
typedef int Elemtype;

typedef struct Sqlist
{
    Elemtype data[MAXSIZE];
    int length;
} Sqlist;

struct Sqlist init_SQ()
{
    Sqlist Q;
    Q.length = 0;
    int num = 999;
    for (int i = 0; i <= 10; i++)
    {
        Q.data[Q.length] = 999 + i;
        Q.length++;
    }
    return Q;
}

void print_Q(Sqlist Q)
{
    printf("Q'len is %d\n", Q.length);
    for (int i = 0; i < Q.length; i++)
    {
        printf("No.%d is %d\n", i, Q.data[i]);
    }
}

// 删除顺序表L 的第k 个元素并返回其值 (可以看到这里是位序)
Elemtype Get_K_and_Delete(int k, Sqlist *Q)
{
    if (k < 0 && k > Q->length)
        return -1;
    Elemtype a = Q->data[k + 1]; // 取数
    for (int i = k + 1; i <= Q->length; i++)
    {
        Q->data[i] = Q->data[i + 1];
    }
    Q->length--;
    return a;
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    Get_K_and_Delete(2, &Q);
    print_Q(Q);
}
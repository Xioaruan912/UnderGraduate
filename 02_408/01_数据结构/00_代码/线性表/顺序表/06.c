// 用顺序表最后一个元素覆盖整个顺序表中最小元素（若有多个则选取
// 第一个），并返回该最小元素。若最后一个就是最小元素时，则不改变顺
// 序表的状态。仅返回这个最小元素即可。【查 + 改】

// 【分析】
//  1.暂存最后一个元素 查找最小元素 然后替换

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
        Q.data[Q.length] = 999 - i;
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

// 最后一个元素覆盖整个顺序表中最小元素
Elemtype find_low_and_return(Sqlist *Q)
{
    Elemtype min_val = Q->data[Q->length - 1];
    int min_pos = 0;
    // 找到“第一个最小值”的位置：用严格小于，保证第一次出现
    for (int i = 1; i < Q->length; ++i)
    {
        if (Q->data[i] < min_val)
        {
            min_val = Q->data[i];
            min_pos = i;
        }
    }

    // 若最后一个就是最小元素（题意要求这种情况不改表），直接返回
    if (min_pos == Q->length - 1)
    {
        return min_val;
    }

    Q->data[min_pos] = Q->data[Q->length - 1];
    return min_val;
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    Elemtype low = find_low_and_return(&Q);
    printf("%d\n", low);
    print_Q(Q);
}
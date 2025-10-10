// 删除顺序表中第一个值为x 的元素

// 【分析】
//  1.查找即可

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

// 删除顺序表中第一个值为x 的元素
Elemtype find_x_and_delete_it(Elemtype x, Sqlist *Q)
{
    for (int i = 0; i < Q->length; i++)
    {
        if (Q->data[i] == x)
        {
            Elemtype t = x; // 暂存
            int loc = i;
            // 后面的元素替代前面的元素
            for (int j = i; j < Q->length - 1; j++)
            {
                Q->data[j] = Q->data[j + 1];
            }
            Q->length--;
            return t;
        }
    }
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    find_x_and_delete_it(996, &Q);
    print_Q(Q);
}
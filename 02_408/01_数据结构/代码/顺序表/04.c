// 查找顺序表中第一个值为x 的元素的位置

// 【分析】
//  1.直接一个for 确定位置即可

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

// 查找顺序表中第一个值为x 的元素的位置
int get_k_first_location(Elemtype k, Sqlist Q)
{
    for (int i = 0; i < Q.length; i++)
    {
        if (Q.data[i] == k)
        {
            return i;
        }
    }
    return -1; // 查找失败
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    int i = get_k_first_location(1004, Q);
    if (i != -1)
    {
        printf(" %d id No.%d", 1004, i);
    }
    else
    {
        printf("Not");
    }
}
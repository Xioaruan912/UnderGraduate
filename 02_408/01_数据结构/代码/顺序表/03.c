// 将顺序表中的元素逆置

// 【分析】
//  1.通过双指针进行运算

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
int reverse_Q(Sqlist *Q)
{
    // 双指针方法 通过经典swap方式 交换数据
    for (int i = 0, j = Q->length - 1; i != j; i++, j--)
    {
        Elemtype swap_t;
        swap_t = Q->data[i];
        Q->data[i] = Q->data[j];
        Q->data[j] = swap_t;
    }
    return 1;
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    reverse_Q(&Q);
    print_Q(Q);
}
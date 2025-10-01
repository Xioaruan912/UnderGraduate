// 在第k个位置插入元素i

// 【分析】
//  1.用户传入 i和 k 先要进行比对k的合法性 如果合法 那么直接插入即可
//  2.顺序表在插入的时候 要求后面的内容先向后移动 移动完毕后插入数据

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

// 在第k个位置插入元素i
int Insert_i_to_k(int k, Elemtype a, Sqlist *Q)
{
    // 判断非法 这里大于就错误 因为等于的话还是可以后移 插入 小于0也报错
    if (k > Q->length && k < 0)
        return 0;
    // 把k之后的数据全部向后移动
    for (int i = Q->length; i >= k; i--)
    {
        Q->data[i + 1] = Q->data[i];
    }
    Q->data[k] = a;
    Q->length++;
    return 1;
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    Insert_i_to_k(2, 100000000, &Q);
    print_Q(Q);
}
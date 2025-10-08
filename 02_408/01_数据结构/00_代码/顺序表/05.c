// 顺序表递增有序，插入元素x，仍递增有序

// 【分析】
//  1.通过比较后确定元素比给出的k小即可

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

// 顺序表递增有序，插入元素x，仍递增有序
int find_low_and_insert(Elemtype k, Sqlist *Q)
{
    int loc = Q->length;
    // 保持稳定 = 如果元素相同 那么就插入到后面
    for (int i = Q->length - 1; Q->data[i] > k; i--) // i = 10 Q.data[10] < 1009跳出
    {
        Q->data[i + 1] = Q->data[i];
        loc = i;
    }
    Q->data[loc] = k;
    Q->length++;
    return 1;
}

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    find_low_and_insert(1004, &Q);
    print_Q(Q);
}
// 删除顺序表中所有值为x 的元素（拓展：从顺序表中删除给定值在s
// 到t 之间（包含s 和t）的所有元素）【查 + 删多】

// 【分析】
//  1.查找即可 并且循环内部不返回即可

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

// 删除顺序表中所有值为x 的元素(双指针思想)
Elemtype find_x_and_delete_it(Elemtype t, Sqlist *Q)
{
    int k = 0;
    for (int i = 0; i < Q->length; i++)
    {
        if (Q->data[i] != t)
        {
            Q->data[k] = Q->data[i];
            k++;
        }
    }

    if (k == Q->length) // 代表没有删除任何元素
    {
        return -1;
    }
    else
    {
        Q->length = k; // 替换为真实 长度
        return 1;
    }
}

// 从顺序表中删除给定值在s到t 之间（包含s 和t）的所有元素
// Elemtype find_x_and_delete_it(Elemtype s, Elemtype t, Sqlist *Q)
// {
//     for (int i = 0; i < Q->length; i++)
//     {
//         if (s <= Q->data[i] && Q->data[i] <= t)
//         {
//             printf("%d\t", Q->data[i]);
//             Elemtype t = Q->data[i]; // 暂存
//             // 后面的元素替代前面的元素
//             for (int j = i; j < Q->length - 1; j++)
//             {
//                 Q->data[j] = Q->data[j + 1];
//             }
//             Q->length--;
//             i--;
//         }
//     }
// }

int main()
{
    // 初始化 顺序表
    Sqlist Q = init_SQ();
    // 打印初始化的顺序表内容
    print_Q(Q);
    find_x_and_delete_it(996, &Q);
    print_Q(Q);
}
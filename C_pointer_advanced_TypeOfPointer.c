// 空指针:
// 优点: 可以接受任何类型的指针类型
// 缺点: 无法获取里面的数据.

#include <stdio.h>
void swap(void *p1, void *p2, int len);

int main()
{
    // 想要交换ab内部的数据.
    int a = 10;
    int b = 20;

    int *p1 = &a;
    int *p2 = &b;

    // void *p3 = p1;
    // void *p4 = p2;
    // 如果这里强行写获p3的数据,会报错.
    // printf("%d\n",*p3);

    printf("交换之前: %d\n%d\n", a, b);
    int len = 4;
    swap(p1, p2, 4);
    printf("交换后: %d\n%d\n", a, b);
}

// 方法: 交换两个变量的数据
// 如果想用void指针, 需要一个字节一个字节的交换数据
void swap(void *p1, void *p2, int len)
{
    char *pc1 = p1;

    char *pc2 = p2;

    char temp = 0;

    for (int i = 0; i < len; i++)
    {
        temp = *pc1;
        *pc1 = *pc2;
        *pc2 = temp;
        pc1++;
        pc2++;
    }
}
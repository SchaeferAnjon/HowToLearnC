#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 判断数组中是否包含某个数字
int contains(int arr[], int len, int num);

int main()
{
    // 定义数组并初始化
    int arr[10] = {0}; // 用于存储随机数
    int len = sizeof(arr) / sizeof(int);
    int sum = 0;       // 初始化 sum 为 0

    // 设置随机数种子
    srand(time(NULL));

    // 生成随机数并存入数组
    for (int i = 0; i < len;)
    {
        int num = rand() % 10; // 生成 0 到 9 的随机数

        // 检查随机数是否已存在
        if (!contains(arr, i, num))
        {
            arr[i] = num; // 如果不存在，存入数组
            i++;          // 递增索引
        }
    }

    // 输出数组并计算总和
    printf("随机数数组: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n总和: %d\n", sum);

    return 0;
}

// 判断数组中是否包含某个数字
int contains(int arr[], int len, int num)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return 1; // 存在，返回 1
        }
    }
    return 0; // 不存在，返回 0
}

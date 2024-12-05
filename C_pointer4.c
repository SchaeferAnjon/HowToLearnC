// 指针的作用2,让函数返回多个值
// 其原理是通过指针直接在程序的底层修改内存空间的数值

#include <stdio.h>
void getMaxAndMin(int arr[], int len, int *max, int *min);

int main()
{
    //定义变量
    int arr[] = {45, 78, 2, 99, 6};
    int len = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int min = arr[0];
    //调用方法
    getMaxAndMin(arr,len,&max,&min);
    //遍历数组
    printf("数组是\n");
    for(int i = 0;i<len;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");



    printf("数组arr的最大值是%d\n",max);
    printf("数组arr的最小值是%d\n",min);
    

}

// 函数, 获取最大和最小值

void getMaxAndMin(int arr[], int len, int *max, int *min)
{
    // 1. 获取数组的最大值
    *max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }

    // 2.获取数组的最小值
    *min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
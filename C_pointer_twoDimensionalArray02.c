#include <stdio.h>

int main() {
    // 二维数组的定义格式 + 索引遍历
    // 核心：事先先把所有的一维数组定义完毕，再放入到二维数组当中

    // 1. 定义三个一维数组
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 预先计算每一个数组真实的长度
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int len3 = sizeof(arr3) / sizeof(int);

    // 再定义一个数组，存放所有数组的长度
    int lenArr[3] = {len1, len2, len3};

    // 2. 把三个一维数组放入到二维数组当中
    // 数组的数据类型，跟内部存储的元素类型保持一致
    // arr1：使用数组名进行计算的时候，退化为指向第一个元素的指针，
    // 此时不再表示数组的那个整体了
    // 指针 --> 内存地址，64位机器上是8个字节
    int* arr[3] = {arr1, arr2, arr3};

    // 3. 利用索引遍历 arr
    for (int i = 0; i < 3; i++) {
        // i：依次表示二维数组的索引 0, 1, 2
        for (int j = 0; j < lenArr[i]; j++) {
            printf("%d ", arr[i][j]); // 输出二维数组中的每个元素
        }
        printf("\n"); // 换行
    }

    return 0;
}

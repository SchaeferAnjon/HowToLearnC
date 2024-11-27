#include <stdio.h>
int add(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = add(arr, sizeof(arr) / sizeof(arr[0]));
    printf("数组的元素的和是 %d\n", sum);
    return 0;
}

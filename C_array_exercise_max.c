// 求最值
//  #include<stdio.h>
//  int max(int arr[],int sizeof_arr);
//  int main(){
//      int arr[] = {33,5,22,44,55};
//      int sizeof_arr = sizeof(arr)/sizeof(arr[0]);
//      int max_value = max(arr,sizeof_arr);
//      printf("%d\n",max_value);

// }

// int max(int arr[],int sizeof_arr){
//     //求数组中的最大值
//     static int max ;
//     for (int i = 0;i<sizeof_arr;i++ ){
//         for(int j=0;j<sizeof_arr-1;j++){
//             if(arr[i]>arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//                 max = temp;
//             }
//         }
//     }
//     return max;

// }

// 求最值  正确版本
#include <stdio.h>
int max(int arr[], int size);

int main()
{
    int arr[] = {33, 5, 22, 44, 55};
    int sizeof_arr = sizeof(arr) / sizeof(arr[0]);
    int max_value = max(arr,sizeof_arr);
    printf("%d\n",max_value);
}

int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++){
    
        if(arr[i]>max){
            max = arr[i];
        }

    }
    return max;
}
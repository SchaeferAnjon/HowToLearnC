//数组常见的两个问题.
#include<stdio.h>

void printArr(int arr[],int size);

int main(){
    /*
    1. 数组作为函数的参数 需要注意什么
    2. 数组的索引越界
    */
   // 1. 定义数组
   int arr[]= {1,2,3,4,5};
   //int size = sizeof(arr)/sizeof(arr[0]);
   //printArr(arr,size);
    printf("%d\n",arr[10]);
}

// void printArr(int arr[],int size){

//     for(int i=0;i<size;i++){
//         printf("%d\n",arr[i]);
//     }
    

// }
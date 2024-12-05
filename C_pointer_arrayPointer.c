//利用指针遍历数组

#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int *p = arr;

    for(int i = 0;i<5;i++)
    {
        printf("%d\n",*p++);
    }
}
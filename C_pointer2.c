#include<stdio.h>
void swap(int *a, int *b);
//交换a和b的值 
// 如果只是传入参数, ab的值只是在swap函数中被交换,但是如果直接通过地址交换里面的数据,可以将这两个变量的值改变
int main(){
    int a = 10;
    int b = 20;

    printf("交换前的值是: %d,%d\n",a,b);
    swap(&a,&b);
    printf("交换后的值是:%d,%d\n",a,b);

}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
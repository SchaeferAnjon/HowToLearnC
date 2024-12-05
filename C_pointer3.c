//在c语言中, 变量会随着函数的结束而消失, 如果想要一个变量一直持续到程序的结束, 可以在变量前面加上static关键字.
#include <stdio.h>

int* method();
int main(){
     int *p = method();
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    // printf("拖时间\n");
    
    printf("%d\n",*p);

}

int* method(){

    int a = 10;
    return &a;
}

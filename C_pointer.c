#include<stdio.h>

int main(){
    int a = 10;
    int *pa = &a;
    //地址值
    printf("%p\n",&a);
    printf("%p\n",pa);
    *pa = 30;

    //数据值
    printf("%d\n",a);
    printf("%d\n",*pa);

    char c = 'a';
    char *cc = &c;
    printf("%p\n",cc);
}
// 上一个是我自己写的, 这次我看看别人怎么写的

#include <stdio.h>
//这里的函数声明是告诉程序有这个函数, 可以去下面找找, 否则 函数必须写在主函数之前
void func1(void);

static int count =10;

int main(){
    while (count--)
    {
        func1();
    }
    
}

void func1(void){
    static int thing = 5;
    thing++;
    printf("thing的值为%d,count的值为%d\n",thing,count);
}
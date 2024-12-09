#include<stdio.h>
#include<string.h>


union money_type
{
    int money_integer;
    double money_fraction;
    char money_str [100];

};

int main(){
    /*
    需求: 用不同的方式表示钱
    */
   //1. 定义一个共同体变量
   union money_type money;

   //2. 赋值: 每次只能赋值一个值
   money.money_integer = 9999;
   printf("%d\n",money.money_integer);
   money.money_fraction = 9999.99;
   printf("%lf\n",money.money_fraction);
   strcpy(money.money_str,"一万元");
   printf("%s\n",money.money_str);

   //tips: 每次赋值一个成员，然后立即打印该成员的值。
   //这样可以确保打印的值是正确的，因为每次赋值都会覆盖之前的值。


   //

   
   



}

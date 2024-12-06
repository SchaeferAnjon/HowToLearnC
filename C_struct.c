#include<stdio.h>
#include<string.h>
//结构体: 
    //自定义的数据类型.,
    //就是由很多的数据组合成的一个整体
    //每一个数据, 都是结构体的成员
//书写位置: 
    //函数的里面: 局部位置,只能在本函数中使用. 
    //函数的外面: 全局位置,在所有的函数中都可以使用. 
struct GirlFriend
{
    int age ;
    char name[100];
    double height;
    char gender;

};



int main(){
    //使用结构体, 定义一个女朋友的变量
    struct GirlFriend gf1;
    
    strcpy(gf1.name,"刘亦菲");
    gf1.age = 23;
    gf1.height = 164;
    gf1.gender = 'F';

    printf("女朋友1的名字是:%s\n",gf1.name);
    printf("女朋友1的年龄是:%d\n",gf1.age);
    printf("女朋友1的身高是:%.1lf\n",gf1.height);
    printf("女朋友1的性别是:%c\n",gf1.gender);

}
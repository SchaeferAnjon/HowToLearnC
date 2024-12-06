#include<stdio.h>
#include<string.h>

//定义一个学生, 修改它的值


typedef struct student
{
    char name[100];
    int age;
}s;
void edit_data(s ss);
void edit_data_pointer(s* ss);

int main(){
    s s1 = {"aaa",0};
    printf("学生原本的数据是%s\t%d\n",s1.name,s1.age);
    //修改学生的内容 
    // 如果传递的参数是结构体, 那么修改不了数据
    edit_data(s1);

    //应该将传递数据变成指针

    printf("学生修改完的数据是%s\t%d\n",s1.name,s1.age);

    printf("-----------------指针");

    edit_data_pointer(&s1);
    printf("学生修改完的数据是%s\t%d\n",s1.name,s1.age);


}

//定义一个函数修改学生的内容
void edit_data(s ss){
    //在这个函数中, 学生的信息只是在这个函数中发生改变, 
    //这个函数运行结束之后 , 在main函数中, 学生的信息并不会改变.
    printf("接收到的学生的数据是%s\t%d\n",ss.name,ss.age);

    printf("修改的名字是\n");
    scanf("%s",ss.name);

     printf("修改的年龄是\n");
    scanf("%d",&(ss.age));

}


void edit_data_pointer(s* ss){
    //在这个函数中, 接收到的是学生数据的地址

    printf("接收到的学生的数据是%s\t%d\n",(*ss).name,(*ss).age);

    printf("修改的名字是\n");
    scanf("%s",(*ss).name);

     printf("修改的年龄是\n");
    scanf("%d",&((*ss).age));

}



#include<stdio.h>
#include<string.h>

typedef struct  message
{
    char number[100];
    char gmail[100];
}M;


typedef struct Student
{
    char name[100];
    int age;
    char gender;
    double height;
     M contact;
    
    
} S;


int main(){
    //定义学生变量并且给学生变量赋值. 
    //单个赋值
    
    S stu1 ;
    strcpy(stu1.name,"zhangsan");
    stu1.age = 23;
    stu1.gender = 'm';
    stu1.height = 182.3;
    strcpy(stu1.contact.gmail,"infoschaeferanjon@gmail.com");
    strcpy(stu1.contact.number,"15383644113");

    //打印学生信息, 检查

    printf("学生的信息是:%s,%d,%c,%.1lf,\n邮箱是%s,\n电话是%s.\n",stu1.name,stu1.age,stu1.gender,stu1.height,stu1.contact.gmail,stu1.contact.number);
    printf("--------------\n");
    //批量添加进行赋值
    S stu2 = {"lisi",24,'f',165.4,{"123456789","123456789@qq.com"}};//嵌套关系的结构体需要用{}括起来.
    printf("学生的信息是:%s,%d,%c,%.1lf,\n邮箱是%s,\n电话是%s.\n",stu2.name,stu2.age,stu2.gender,stu2.height,stu2.contact.gmail,stu2.contact.number);





}
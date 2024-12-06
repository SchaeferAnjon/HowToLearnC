#include <stdio.h>
//定义三个学生, 并且遍历每个学生的信息. 

struct Student
{
    char name[100] ;
    int age;
};

int main(){
 //1 .定义三个变量的同时,进行to assign.     
    struct Student s1={"zhangsan",23};
    struct Student s2={"lisi",24};
    struct Student s3={"wangwu",25};

//2. 把三个学生放入数组中. 
struct Student stuArr[3]={s1,s2,s3};

//3. 遍历数组, 得到每一个元素.
for (int i= 0;i<3;i++)
{
    struct Student temp = stuArr[i];

    printf("学生的信息为:姓名%s,年龄%d\n",temp.name,temp.age);
    
}

   

    
}
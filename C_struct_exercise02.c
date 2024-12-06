//定义游戏人物,用typedef

#include<stdio.h>
#include<string.h>

typedef struct bodlers_gate
{
    char name[100];
    int age;
    int gender; //1 == male , 2 == female
} B;


int main(){

    B gell = {"盖尔",33,1};
    B shadowHeart = {"影心",25,2};
    B well = {"威尔",40,1};


    B Barr [] = {gell,shadowHeart,well};

    for(int i = 0;i<3;i++)
    {
        B temp = Barr[i];
        printf("游戏角色%s的年龄是%d,性别是:%d\n",temp.name,temp.age,temp.gender);
    }

}
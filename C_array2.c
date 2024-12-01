//数组是一种容器, 可以用来存储同种数据的多个值
/*
定义数组存储全班同学的年龄
定义数组存储身高
定义数组存储衣服的价格
*/


//数组的定义;
// #include <stdio.h>

// int main(){
//     int ages [80];
//     double heights [50];
//     double prices [3];
// }



//数组存储五个学生的身高
//数组存储你的身高


    //数组的初始化
// #include<stdio.h>

// int main(){
//     //数据类型 数组名[个数] = {数据1,2,3};
//     int  ages[5] = {20,34,23,45,60};
//     double heights [] = {180.0};
// }

    //访问数组内的元素
//定义长度为5的数组. 并且初始化:1 2 3 4 5
//要求
    //1 获取索引为 0 2 4的元素, 求和
    //2 把最后一个索引的元素修改为10
// #include<stdio.h>

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int b = 0;
//     for(int i= 1;i<=5;i++){
//         if(i%2==1){
//         printf("%d\n",i);
//         b +=i;
        

//         }
//     }
//     printf("%d\n",b);
//     arr[4] = 10;
//     printf("%d\n",arr[4]);
// }

    //数组的遍历
//定义长度为5的数组. 并且初始化:1 2 3 4 5
//要求 遍历数组
// #include<stdio.h>

// int main (){
//     int arr[5] = {1,2,3,4,5};
//     for(int i = 0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }

    //变量内存与内存地址
#include<stdio.h>

int main(){
    int a =10;
    printf("%p\n",&a);
    printf("-------------\n");
    int arr[3] = {1,2,3};
    printf("%p\n",&arr);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);

}

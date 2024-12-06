//定义一个数组存储5个学生的名字并且遍历
#include<stdio.h>

int main(){
    char arr[5][100] = {
        "zhangsan",
        "lisi",
        "wangwu",
        "qianqi",
        "gouba"
    };

    for(int i = 0;i<5;i++){
        //i 依次表示二维数组的每一个索引
        char *str= arr[i];
        printf("%s\n",str);
    }

    //第二种方式 
    //将5个字符串的指针, 放入数组中
    char* strArr2[5] = {
        "zhangsan",
        "lisi",
        "wangwu",
        "zhaoliu",
        "qianiq"
    };

    for(int i = 0;i<5;i++){
        char* str2 = strArr2[i];
        printf("%s\n",str2);
    }

}
//fread一次读取多行.
#include<stdio.h>

int main(){
    //1.打开文件 
    FILE *file = fopen("/Users/macbook14/Desktop/a.txt","r");

    //2.读取数据
    //细节:
        //英文的abc占用一个字节
        //中文占两个字节. 
    //fread细节:
        //在读取的时候尽可能装满, 返回当前读取到的有效字节个数
        //比如 文件: 100个字节
        //数组长度:30
        //1. 第一次读取30 ,把数组装满, 函数返回30
        //2. 第二次读取30 ,把数组装满, 函数返回30
        //3. 第三次读取30 ,把数组装满, 函数返回30
        //4. 第一次读取10,会把数据放在数组中, 函数返回10
        //第五次: 没有数据可以读取. 函数返回0.

    // char arr[1024];
    // int n = fread(arr,1,1024,file);
    // //打印出来多少个字节 文档有多少个字节. 
    // printf("%d",n);
    // printf("%s",arr);

    char arr[4];
    int n;//读到的有效字节个数. 

    while (0!=(n=(fread(arr,1,4,file))))//为零表示文件已经没有的读了.

    {
        //细节: 没有给字符串加结束标记,所有会把数组里面的内容都变成字符串.
        //如果arr变成四个字节 , 那打印的内容就会有问题.所以,最好可以直接遍历字符串,而不是把数组里面的内容直接变成字符串.


        for (int  i = 0; i < n; i++)
        {   
            //这么写的话没有乱码
            //为什么? 
            //第一次读到了半个中文, 第二次又读半个中文, 就会组合在一起, 就不会出问题.
            //第一次读取: abc+半个你
            //第二次读取: 半个你+好
            //以此类推
            printf("%c",arr[i]);
        }
        
    }
    


    //3. 关闭文件

}
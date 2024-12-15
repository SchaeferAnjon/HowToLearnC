#include<stdio.h>

int main(){
        //1. 打开文件
    FILE *file = fopen("/Users/macbook14/Desktop/a.txt","r");
        //2. 读取文件,一次一行

        char arr[1024];
        char*str;
        while ((str = fgets(arr,1024,file))!= NULL)
        {
            printf("%s\n",str);
        }

        //3 .关闭读取.
        fclose(file);
        
        // char*str1 = fgets(arr,1024,file);
        // printf("%s\n",str1);
        // char*str2 = fgets(arr,1024,file);
        // printf("%s\n",str2);
        // char*str3 = fgets(arr,1024,file);
        // printf("%s\n",str3);
        // char*str4 = fgets(arr,1024,file);
        // printf("%s\n",str4);





}
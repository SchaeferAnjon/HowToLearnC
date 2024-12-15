#include<stdio.h>
//    读取和写入都在stdio.h这个头文件里面. 

int main(){
    /*
    书写步骤:
	1. 打开文件 fopen
	2. 读数据 fgetc, fgets, fread. 
		1. 一次读一个
		2. 一次一行
		3. 一次多个
	3. 关闭文件 fclose
    */

   //1.打开文件
  FILE *file =  fopen("/Users/macbook14/Desktop/a.txt","r");//filename ==文件路径 ,mode=操作文件的模式.

    //2. 读取数据.  
        //细节: 
            //1. 一次读一个字符,如果读到了就返回字符.
            //2. 如果没有读到就返回-1.
    int c;
    while((c  = fgetc(file))!= -1){
        printf("%c",c);
    }
     
    printf("%c",c);

    //3. 关闭文件
    fclose(file);



}
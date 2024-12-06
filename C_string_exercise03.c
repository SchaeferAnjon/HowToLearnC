//从键盘录入一串字符串, 然后统计里面的大写小写与数字的个数

#include<stdio.h>
#include<string.h>

int main(){

    //1. 从键盘录入
    char str[100] ;
    printf("请输入一个包含英文大写小写与数字的字符串\n");
    scanf("%s",str);
    
    // 2. 定义计数器
    int bigCount = 0;
    int smallCount = 0;
    int numberCount = 0;
    
    //3. 获取字符串中的每一个字符
    for (int i = 0; i < strlen(str); i++)
    {   
        char c = str[i];
        if (c>='a'&&c<='z')
        {
            smallCount++;
        }
        if (c>='A'&&c<='Z')
        {
            bigCount++;
        }
        if (c>='1'&&c<='9')
        {
            numberCount++;
        }
        
    }
    printf("这个字符串的小写数量是:%d\n",smallCount);
    printf("这个字符串的大写数量是:%d\n",bigCount);
    printf("这个字符串的数字数量是:%d\n",numberCount);
    


}
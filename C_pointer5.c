//定义一个函数,两数相除,获得其余数
    //需要注意的是: 被除数不能为零. 所以要进行判断.


#include<stdio.h>
int getRemainder(int a,int b,int * res);
int main(){

    int a = 5;
    int b = 0;
    int result ;

    int judge = getRemainder(a,b,&result);

    if(judge==0){
        printf("参数不合法\n");
    }else{
    printf("结果为%d\n",result);    
}

    
    return 0;


}
//获取余数
int getRemainder(int a,int b,int * res){

    
    //如果b!=0,这个函数可用, 返回一个1
    //如果b==0,这个函数不可用, 返回0;
    if (b==0)
    {
        return 0;
    }else{
        *res = a%b;
        return 1;
    }

    
    
}


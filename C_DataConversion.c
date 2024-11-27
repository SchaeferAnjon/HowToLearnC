#include <stdio.h>

int main(){
    //显式数据转换
    double f_a = 3.1415;
    int i_a = (int)f_a;
    printf("%d\n",i_a);
    

    //隐式数据转换
    int i_b = 3;
    double d_a = i_b;
    printf("%.100f\n",d_a); // 修改格式化字符串以去掉小数部分


}
/*

需求:生成10个随机数字存入数组,并求和

*/
#include<stdio.h>
//导入类库
#include<stdlib.h>
#include<time.h>
//1.生成是个随机数字
int main(){
    //1.1 定义数组
    int arr[10]={0};//数组内的元素的默认值都是0.
    int len  = sizeof(arr)/sizeof(arr[0]);
    //2. 生成随机的数据
    //设置种子
    srand(time(NULL));
    int sum ;

    for(int i = 0;i<len;i++){
        int num = rand()%(100-10+1)+10;
        arr[i] = num;
        printf("%d\n",arr[i]);
        sum+=arr[i];
    }
    printf("sum=%d",sum);

}
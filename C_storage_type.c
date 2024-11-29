/*这是c语言的存储类
关于static

*/

#include <stdio.h>

static int count = 5;

int func1(){
    
    count--;
    return count;
}

int main(){

    while (count)
    {
        func1();
        printf("%d\n",count+1);
    }
    

}
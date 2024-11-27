#include <stdio.h>

int x ;
int y;
int add(){
    extern int x;
    extern int y;
    x = 1;
    y = 2;
    return x+y;
}

int main(){
    int result;
    result = add();

    printf("result=: %d\n",result);

    return 0;
}
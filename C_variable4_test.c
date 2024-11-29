#include <stdio.h>

extern int xyy;
extern int yxx;

int xyy= 1;
int yxx =2;

int add(){
    return xyy + yxx;
}

int main(){
    int result = add(); // 不传递参数
    printf("Result: %d\n", result);
    return 0;
}


#include <stdio.h>
#include<float.h>

int main() {
    int a = 0;
    int b = sizeof(a);
    printf("%d\n", b); // 打印结果应该是 4
    printf("float 最小值 %E\n",FLT_MIN);
    printf("float max %E\n",FLT_MAX );
}
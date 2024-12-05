/*
定义加、减、乘、除、四个函数用户键盘录入三个数字
前两个表示参与计算的数字第三个数字表示调用的函数
1：加法
2：减法
3：乘法
4：除法
*/
#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int multiply(int num1, int num2);
int devide(int num1, int num2);

int main() {
    int (*padd)(int, int) = add;
    int (*psub)(int, int) = sub;
    int (*pmul)(int, int) = multiply;
    int (*pdev)(int, int) = devide;
    // 函数指针数组
    int (*arr[4])(int, int) = {padd, psub, pmul, pdev};

    // 用户录入两个数据
    printf("请录入两个数字进行计算: \n");
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("您输入的数字是: %d 和 %d\n", num1, num2);

    // 用户选择操作
    printf("请选择操作: 1-加法, 2-减法, 3-乘法, 4-除法\n");
    int choose;
    scanf("%d", &choose);
    printf("您选择的操作是: %d\n", choose);

    // 检查选择是否有效
    if (choose < 1 || choose > 4) {
        printf("无效的选择\n");
        return 1;
    }

    // 检查除以零的情况
    if (choose == 4 && num2 == 0) {
        printf("除数不能为零\n");
        return 1;
    }

    // 根据用户的选择进行相应的操作
    int res = (arr[choose - 1])(num1, num2);
    printf("计算结果为: %d\n", res);

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int devide(int num1, int num2) {
    return num1 / num2;
}

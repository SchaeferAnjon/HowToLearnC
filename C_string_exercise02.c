#include <stdio.h>
#include <string.h>
//登陆三次 比较用户名和密码

int main() {   
    const char* correctUserName = "abc";
    const char* correctPassword = "abc";
    char inputUserName[50];
    char inputPassword[50];

    int attempts = 0;
    const int maxAttempts = 3;

    printf("请输入用户名和密码\n");

    while (attempts < maxAttempts) {
        scanf("%s%s", inputUserName, inputPassword);

        if (strcmp(correctUserName, inputUserName) == 0 && strcmp(correctPassword, inputPassword) == 0) {
            printf("登录成功\n");
            return 0;
        } else {
            printf("登录失败\n");
        }

        attempts++;
    }

    printf("输入的用户和密码错误频繁，账户已经封锁\n");

    return 0;
}

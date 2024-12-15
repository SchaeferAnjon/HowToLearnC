#include <stdio.h>
#include <string.h>

int main()
{
    //`\`代表着转义字符
    printf("\"\n");
    // 把第二个\变成普通的\.
    printf("\\\n");
    // 这样就可以输出完整的路径了
    char *file = "C:\\aaa\\a.txt";
    printf("%s\n", file);

    // 结果:
    /*
    "
    \
    C:\aaa\a.txt
*/
}
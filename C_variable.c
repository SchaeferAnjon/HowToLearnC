#include <stdio.h>
 extern int xx  ;
 int xx = 45;

int main(){
    int a = 1;
    int *pa = &a;
    *pa = 2;
    printf("%d\n",*pa);
    int x = 10;
    float pi = 3.14;
    char sh = 'a';
    char shs[] = "abc";


    printf("%d\n",x);
    printf("%.2f\n",pi);
    printf("%c\n",sh);
    printf("%s\n",shs);
    printf("%d\n",xx);

   
}
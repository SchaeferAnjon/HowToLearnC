#include <stdio.h>

int max(int a,int b);

int main(){
    int a =1;
    int b= 2;
    int c = max(a,b);
    printf("%d",c);

}

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
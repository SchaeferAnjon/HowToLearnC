//结构体综合练习
/*
某班级组织野外郊游，想要在ABCD四个景点选择其中一个。
现在班上有80名同学进行投票，找出投票数最多的景点
Ps:
1，学生投票，用随机数模拟
2，如果多个景点投票一样的话，A优先B，B优先于C，C优先于D

 景点的名称:    A B C D 
 景点的投票数:  0 0 0 0 
 每次投票的时候如果选到了A,景点 ,A景点的投票数+1. 
 所以其实景点的名称的索引和投票数的索引代表着同一个东西. 代表着景点. 

 //可以定义一个结构体,里面包括这个景点的名称与景点的投票数. 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

struct spot 
{
    char name[10];
    int count;
};

int main(){
    //1.定义数组, 用来存储四个spot的类型的变量. 
     struct  spot arr[4] = {{'A',0},{'B',0},{'C',0},{'D',0}};

    //2. 模拟投票,模拟80名同学的投票 . 
    srand(time(NULL));

    for(int i = 0;i<80;i++){
        //choose的含义: 
                //1.表示用户的投票: 0 == a, 1 ==b, 2==c,3 ==d;
                //2. 表示arr中的索引, 通过索引就可以获得景点的名字和投票的数量.
        
        int choose = rand()%4;
        //如果获得choose为0, 表示有同学投票到了a景点. 
        //choose表示同学的投票, 同时也表示数组中的索引. 
        //arr[choose]表示获取景点的名字和投票的数量.
        //arr[choose].count: 表示这个景点已经投了多少票
        //arr[choose].count++;表示又给这个景点投了一票. 
        arr[choose].count++;
    }
    //3.找到投票数最多的景点的最大值.
    int max = arr[0].count;
    for (int i = 0; i < 4; i++)
    {
        struct spot temp  = arr[i];
        if(temp.count>max){
            max = temp.count;
        }
    }
    // printf("%d",max);
    
    //4. 根据最大值找到票数最多的景点.  
    for(int i = 0;i<4;i++){
        if(arr[i].count == max){
            printf("票数最多的景点是:%s,%d票\n",arr[i].name,arr[i].count);
            //break的作用是不用比接下来的内容,
            //直接找到了最大的, 因为数组的索引和景点的排序的规则(a>b>c>d)是一样的, 所以可以就直接不用比较.
            break;
        }
    }

     
     //遍历初始数据.
     for(int i = 0;i<4;i++){
        struct  spot temp = arr[i];
        printf("%s %d\n",temp.name,temp.count);
        
        
     }
     


}
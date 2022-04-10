#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{   
    int myHands = 0;
    int enHands = 0;
    char* str[3] = {"グー","チョキ","パー"}; 
    puts("-じゃんけんゲーム-");
    puts("最初はグー...");
    puts("じゃんけん...");
    puts("グー:0,チョキ:1,パー:2");
    printf("->");
    scanf("%d",&myHands);
    srand((unsigned int)time(NULL)); 
    enHands = rand()%3;
    printf("あなたの手:%s\n",str[myHands]);
    printf("　私　の手:%s\n",str[enHands]);

    if((myHands==0&&enHands==1)||(myHands==1&&enHands==2)||(myHands==2&&enHands==0)){
        puts("あなたの勝ち");
    }else  if(myHands==enHands){
        puts("あいこ！");
    }else{
        puts("あなたの負け");
    }

    return 0;
}

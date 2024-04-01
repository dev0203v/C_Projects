#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NAMELEN 20
#define NUM_MONSTERS 5

// void Mon();

typedef struct monster{
    char mon_name[NAMELEN];
    char mon_T[NAMELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
}monster;
typedef struct boss{
    char mon_name[NAMELEN];
    char mon_T[NAMELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
}boss;

// int main(){
//     int User_HP = 100;
//     void Mon();
//     monster monster; // 수정할거임 ㅇㅇ
    
//     return 0;
// }


int main(){
    
    srand(time(NULL));
    int i;
    int User_HP = 100;

    monster m[8];

    // monster[0].mon_name = "오크전사";
    // monster[0].mon_T = "네임드";
    // monster[0].mon_HP = rand()%100+50;
    // monster[0].mon_dem =rand()%15+10;
    // monster[0].gold_drop =ramd()%10+5;

    // monster[1].mon_name = "좀비";
    // monster[1].mon_T = "네임드";
    // monster[1].mon_HP = rand()%180+50;
    // monster[1].mon_dem = rand()%30+17;
    // monster[1].gold_drop = ramd()%60+5;

    // monster[2].mon_name = "구울";
    // monster[2].mon_T = "네임드";
    // monster[2].mon_HP = rand()%280+120;
    // monster[2].mon_dem = rand()%45+20;
    // monster[2].gold_drop = ramd()%100+5;

    // monster[3].mon_name = "해골";
    // monster[3].mon_T = "네임드";
    // monster[3].mon_HP = rand()%260+200;
    // monster[3].mon_dem = rand()%55+28;
    // monster[3].gold_drop = ramd()%130+5;

    // monster[4].mon_name = "스파토이";
    // monster[4].mon_T = "네임드";
    // monster[4].mon_HP = rand()%360+260;
    // monster[4].mon_dem = rand()%75+32;
    // monster[4].gold_drop = ramd()%200+5;

    // monster[5].mon_name = "바포매트";
    // monster[5].mon_T = "보스";
    // monster[5].mon_HP =  User_HP*5;
    // monster[5].mon_dem = rand()%450+180;
    // monster[5].gold_drop = ramd()%700+5;

    // monster[6].mon_name = "이동녘";
    // monster[6].mon_T = "찐보스";
    // monster[6].mon_HP =  User_HP*7;
    // monster[6].mon_dem = rand()%550+300;
    // monster[6].gold_drop = ramd()%1000+5;

    // monster[7].mon_name = "류홍걸";
    // monster[7].mon_T = "찐막보스";
    // monster[7].mon_HP =  User_HP*10;
    // monster[7].mon_dem = rand()%1300+500;
    // monster[7].gold_drop = ramd()%3000+5;




    m[0].mon_name = "오크전사";
    m[0].mon_T = "네임드";
    m[0].mon_HP = rand()%100+50;
    m[0].mon_dem =rand()%15+10;
    m[0].gold_drop =ramd()%10+5;

    m[1].mon_name = "좀비";
    m[1].mon_T = "네임드";
    m[1].mon_HP = rand()%180+50;
    m[1].mon_dem = rand()%30+17;
    m[1].gold_drop = ramd()%60+5;

    m[2].mon_name = "구울";
    m[2].mon_T = "네임드";
    m[2].mon_HP = rand()%280+120;
    m[2].mon_dem = rand()%45+20;
    m[2].gold_drop = ramd()%100+5;

    m[3].mon_name = "해골";
    m[3].mon_T = "네임드";
    m[3].mon_HP = rand()%260+200;
    m[3].mon_dem = rand()%55+28;
    m[3].gold_drop = ramd()%130+5;

    m[4].mon_name = "스파토이";
    m[4].mon_T = "네임드";
    m[4].mon_HP = rand()%360+260;
    m[4].mon_dem = rand()%75+32;
    m[4].gold_drop = ramd()%200+5;

    m[5].mon_name = "바포매트";
    m[5].mon_T = "보스";
    m[5].mon_HP =  User_HP*5;
    m[5].mon_dem = rand()%450+180;
    m[5].gold_drop = ramd()%700+5;

    m[6].mon_name = "이동녘";
    m[6].mon_T = "찐보스";
    m[6].mon_HP =  User_HP*7;
    m[6].mon_dem = rand()%550+300;
    m[6].gold_drop = ramd()%1000+5;

    m[7].mon_name = "류홍걸";
    m[7].mon_T = "찐막보스";
    m[7].mon_HP =  User_HP*10;
    m[7].mon_dem = rand()%1300+500;
    m[7].gold_drop = ramd()%3000+5;
    
    for ( i = 0; i < 5; i++)
    {
        printf("%s %s\n쳬력: %d\n데미지: %d\n골드획득: %d\n",m[i]->mon_name,m[i]->mon_T,m[i]->mon_HP,m[i]->mon_dem,m[i]->golddrop);
    }; // 구조체배열 포인터 이해도 부족으로 완성하지 못함
    // 다시 공부하고 수정할것 

    return 0;
}
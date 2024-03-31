#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NAMELEN 20
#define NUM_MONSTERS 5

void Mon();

typedef struct monster{
    char mon_name[NAMELEN];
    char mon_T[NAMELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
}monster;

int main(){
    int User_HP = 100;
    void Mon();
    monster monster; // 수정할거임 ㅇㅇ
    
    return 0;
}


void Mon(struct monster*){
    
    srand(time(NULL));
    int i;

    monster[5];

    monster[0].mon_name = "오크전사";
    monster[0].mon_T = "네임드";
    monster[0].mon_HP = rand()%100+50;
    monster[0].mon_dem =rand()%15+10;
    monster[0].gold_drop =ramd()%10+5;

    monster[1].mon_name = "좀비";
    monster[1].mon_T = "네임드";
    monster[1].mon_HP = rand()%180+50;
    monster[1].mon_dem = rand()%30+17;
    monster[1].gold_drop = ramd()%60+5;

    monster[2].mon_name = "구울";
    monster[2].mon_T = "네임드";
    monster[2].mon_HP = rand()%280+120;
    monster[2].mon_dem = rand()%45+20;
    monster[2].gold_drop = ramd()%100+5;

    monster[3].mon_name = "해골";
    monster[3].mon_T = "네임드";
    monster[3].mon_HP = rand()%260+200;
    monster[3].mon_dem = rand()%55+28;
    monster[3].gold_drop = ramd()%130+5;

    monster[4].mon_name = "스파토이";
    monster[4].mon_T = "네임드";
    monster[4].mon_HP = rand()%360+260;
    monster[4].mon_dem = rand()%75+32;
    monster[4].gold_drop = ramd()%200+5;

    for ( i = 0; i < 5; i++)
    {
        printf("%s %s 쳬력: %d 데미지: %d 골드획득: %d\n",(monster + i)->mon_name,(monster + i)->mon_T,(monster + i)->mon_HP,(monster + i)->mon_dem,(monster + i)->golddrop);
    }; // 구조체 포인터 이해도 부족으로 완성하지 못함
    // 다시 공부하고 수정할것 
    
}
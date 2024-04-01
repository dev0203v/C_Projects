#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NAMELEN 20
#define NUM_MONSTERS 9 

typedef struct monster {
    char mon_name[NAMELEN];
    char mon_T[NAMELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
} monster;


int main() {
    srand(time(NULL));
    int i;
    int User_HP = 100;
    char class_name[][10] = {
        "유시온", "김승수", "권철민", "안광민", "강진영",
        "김영곤", "박선후", "김건", "이준호", "이철", "이동준",
        "황은비", "조세빈", "김성근", "이은승", "박희정", "박장미",
        "김민아", "조대정", "김재신", "박민건", "임석현", "황운하",
        "노주영", "김혜빈", "서훈", "오은지"
    };

    monster m[NUM_MONSTERS];

    strcpy(m[0].mon_name, "오크전사");
    strcpy(m[0].mon_T, "네임드");
    m[0].mon_HP = rand() % 100 + 50;
    m[0].mon_dem = rand() % 15 + 10;
    m[0].gold_drop = rand() % 10 + 5;

    strcpy(m[1].mon_name, "좀비");
    strcpy(m[1].mon_T, "네임드");
    m[1].mon_HP = rand() % 180 + 50;
    m[1].mon_dem = rand() % 30 + 17;
    m[1].gold_drop = rand() % 60 + 5;

    strcpy(m[2].mon_name, "구울");
    strcpy(m[2].mon_T, "네임드");
    m[2].mon_HP = rand()%280 + 120;
    m[2].mon_dem = rand()%45 + 20;
    m[2].gold_drop = rand()%100 + 5;

    strcpy(m[3].mon_name, "해골");
    strcpy(m[3].mon_T, "네임드");
    m[3].mon_HP = rand()%260 + 200;
    m[3].mon_dem = rand()%55 + 28;
    m[3].gold_drop = rand()%130 + 5;

    strcpy(m[4].mon_name, "스파토이");
    strcpy(m[4].mon_T, "네임드");
    m[4].mon_HP = rand()%360 + 260;
    m[4].mon_dem = rand()%75 + 32;
    m[4].gold_drop = rand()%200 + 5;
    
    strcpy(m[5].mon_name, class_name[rand()%27]);
    strcpy(m[5].mon_T, "네임드");
    m[5].mon_HP = User_HP*2;
    m[5].mon_dem = rand()%300 + 100;
    m[5].gold_drop = rand()%500 + 5;

    strcpy(m[6].mon_name, "바포매트");
    strcpy(m[6].mon_T, "보스");
    m[6].mon_HP =  User_HP*5;
    m[6].mon_dem = rand()%450+180;
    m[6].gold_drop = rand()%700+5;

    strcpy(m[7].mon_name, "이동녘");
    strcpy(m[7].mon_T, "찐보스");
    m[7].mon_HP =  User_HP*7;
    m[7].mon_dem = rand()%550+300;
    m[7].gold_drop = rand()%1000+5;

    strcpy(m[8].mon_name , "류홍걸");
    strcpy(m[8].mon_T, "찐막보스");
    m[8].mon_HP =  User_HP*10;
    m[8].mon_dem = rand()%1300+500;
    m[8].gold_drop = rand()%3000+5;
    

    for (i = 0; i < NUM_MONSTERS; i++) {
        printf("%s %s\n체력: %d\n데미지: %d\n골드 획득량: %d\n\n", 
            m[i].mon_name, m[i].mon_T, m[i].mon_HP, m[i].mon_dem, m[i].gold_drop);
    }

    return 0;
}

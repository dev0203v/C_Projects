#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NMAELEN 30
void Mon();

typedef struct monster{
    char mon_name[NMAELEN];
    char mon_T[NMAELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
}monster;
typedef struct boss{
    char mon_name[NMAELEN];
    char mon_T[NMAELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
}boss;


int main(){
    double User_HP = 100;
    void Mon();
    printf("%s %s\n쳬력: %d\n데미지: %d\n골드획득: %d\n",monster + i->mon_name,monster + i->mon_T,monster + i->mon_HP,monster + i->mon_dem,monster + i->golddrop);

}

void Mon(){
    
    srand(time(NULL));
    
    char class_name[][10] = {
        "유시온", "김승수", "권철민", "안광민", "강진영",
        "김영곤", "박선후", "김건", "이준호", "이철", "이동준",
        "황은비", "조세빈", "김성근", "이은승", "박희정", "박장미",
        "김민아", "조대정", "김재신", "박민건", "임석현", "황운하",
        "노주영", "김혜빈", "서훈", "오은지"
    };
    double User_HP = 100;

    struct monster Orc = {
        "네임드",
        "오크전사",
        rand()%100+50,
        rand()%15+10,
        rand()%10+5,
    };
    struct monster Zombie = {
        "네임드",
        "좀비",
        rand()%180+50,
        rand()%30+17,
        rand()%60+5,
    };
    struct monster Ghoul = {
        "네임드",
        "구울",
        rand()%280+120,
        rand()%45+20,
        rand()%100+5,
    };
    struct monster Skul = {
        "네임드",
        "해골",
        rand()%260+200,
        rand()%55+28,
        rand()%130+5,
    };
    struct monster Spartoi = {
        "네임드",
        "스파토이",
        rand()%360+260,
        rand()%75+32,
        rand()%200+5,
    };
    struct monster ClassSodier = {
        "네임드",
        class_name[rand()%27],
        User_HP*2,
        rand()%300+100,
        rand()%500+5,
    };
    struct boss Baphomet = {
        "보스",
        "바포매트",
        User_HP*5,
        rand()%450+180,
        rand()%700+5,
    };
    struct boss Dongneock = {
        "찐보스",
        "이동녘",
        User_HP*7,
        rand()%550+300,
        rand()%1000+5,
    };
    struct boss Honggeol = {
        "찐막보스",
        "류홍걸",
        User_HP*10,
        rand()%1300+500,
        rand()%3000+5,
    };
    

}
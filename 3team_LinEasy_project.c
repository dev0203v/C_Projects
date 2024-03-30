#include <stdio.h>
#define NMAELEN 50
int main(){
    double User_HP = 100;
    return 0;

}

struct monster{
    char mon_name[NMAELEN];
    char mon_T[NMAELEN];
    int mon_HP;
    int mon_dem;
    int gold_drop;
    int town_return_drop;
};


void Mon(){
    
    struct monster Orc = {
        "네임드",
        "오크전사",
        rand()%100+50,
        rand()%15+10,
        ramd()%10+5,
    };
    struct monster Zombie = {
        "네임드",
        "좀비",
        rand()%180+50,
        rand()%30+17,
        ramd()%60+5,
    };
    struct monster Ghoul = {
        "네임드",
        "구울",
        rand()%280+120,
        rand()%45+20,
        ramd()%100+5,
    };
    struct monster Skul = {
        "네임드",
        "해골",
        rand()%260+200,
        rand()%55+28,
        ramd()%130+5,
    };
    struct monster Spartoi = {
        "네임드",
        "스파토이",
        rand()%360+260,
        rand()%75+32,
        ramd()%200+5,
    };
}
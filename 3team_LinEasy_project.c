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
    int mon_dam;
    int gold_drop;
    int town_return_drop;
}monster;


int main() {
    srand(time(NULL));
    int i;
    int full_HP = 100;
    int remain_HP = 100;
    int user_dam = 100;
    int floor = 1;
    int choice;
    int monster_dam;
    int monster_HP;
    float HP_up;
    char monster_T[NAMELEN];
    char monster_name[NAMELEN];

    char class_name[][10] = {
        "유시온", "김승수", "권철민", "안광민", "강진영",
        "김영곤", "박선후", "김건", "이준호", "이철", "이동준",
        "황은비", "조세빈", "김성근", "이은승", "박희정", "박장미",
        "김민아", "조대정", "김재신", "박민건", "임석현", "황운하",
        "노주영", "김혜빈", "서훈", "오은지"
    };

    monster monster[NUM_MONSTERS];

    strcpy(monster[0].mon_name, "오크전사");
    strcpy(monster[0].mon_T, "네임드");
    monster[0].mon_HP = rand() % 100 + 50;
    monster[0].mon_dam = rand() % 15 + 10;
    monster[0].gold_drop = rand() % 10 + 5;

    strcpy(monster[1].mon_name, "좀비");
    strcpy(monster[1].mon_T, "네임드");
    monster[1].mon_HP = rand() % 180 + 50;
    monster[1].mon_dam = rand() % 30 + 17;
    monster[1].gold_drop = rand() % 60 + 5;

    strcpy(monster[2].mon_name, "구울");
    strcpy(monster[2].mon_T, "네임드");
    monster[2].mon_HP = rand()%280 + 120;
    monster[2].mon_dam = rand()%45 + 20;
    monster[2].gold_drop = rand()%100 + 5;

    strcpy(monster[3].mon_name, "해골");
    strcpy(monster[3].mon_T, "네임드");
    monster[3].mon_HP = rand()%260 + 200;
    monster[3].mon_dam = rand()%55 + 28;
    monster[3].gold_drop = rand()%130 + 5;

    strcpy(monster[4].mon_name, "스파토이");
    strcpy(monster[4].mon_T, "네임드");
    monster[4].mon_HP = rand()%360 + 260;
    monster[4].mon_dam = rand()%75 + 32;
    monster[4].gold_drop = rand()%200 + 5;
    
    strcpy(monster[5].mon_name, class_name[rand()%27]);
    strcpy(monster[5].mon_T, "네임드");
    monster[5].mon_HP = full_HP*2;
    monster[5].mon_dam = rand()%300 + 100;
    monster[5].gold_drop = rand()%500 + 5;

    strcpy(monster[6].mon_name, "바포매트");
    strcpy(monster[6].mon_T, "보스");
    monster[6].mon_HP =  full_HP*5;
    monster[6].mon_dam = rand()%450+180;
    monster[6].gold_drop = rand()%700+5;

    strcpy(monster[7].mon_name, "이동녘");
    strcpy(monster[7].mon_T, "찐보스");
    monster[7].mon_HP =  full_HP*7;
    monster[7].mon_dam = rand()%550+300;
    monster[7].gold_drop = rand()%1000+5;

    strcpy(monster[8].mon_name , "류홍걸");
    strcpy(monster[8].mon_T, "찐막보스");
    monster[8].mon_HP =  full_HP*10;
    monster[8].mon_dam = rand()%1300+500;
    monster[8].gold_drop = rand()%3000+5;
    

    // for (i = 0; i < NUM_MONSTERS; i++) {
    //     printf("%s %s\n체력: %d\n데미지: %d\n골드 획득량: %d\n\n", 
    //         monster[i].mon_name, monster[i].mon_T, monster[i].mon_HP, monster[i].mon_dam, monster[i].gold_drop);
    // }
        while (1){
        
            if (floor == 1){
                strcpy(monster_name, "오크전사");
                strcpy(monster_T, "네임드");
                monster_dam = monster[0].mon_dam;
                monster_HP = monster[0].mon_HP;
                HP_up = 0.01;
                floor++;
                break;
            }
        }
            printf("%s 몬스터 %s (이)가 나타났다!\n",monster_T,monster_name);
            printf("몬스터 체력: %d\n",monster_HP);
        while(1){
            int flag = 0;
            int ichoice =0;
            int shieldactivated=0;
           
            printf("나의 체력 : %d\n",remain_HP);
            printf("\n1.공격  2.아이템  3.도망\n 원하는 번호를 선택하시오. : ");
            scanf("%d",&choice);
                
                switch(choice)
                {
                    case 1:
                        printf("현재 공격력 : %d\n",user_dam);
                       
                        printf("용사복이가 몬스터에게 공격을 가합니다.\n");
            
                   
                        printf("몬스터 남은 체력 : %d\n",monster_HP);
                       
                        printf("나의 남은체력 : %d\n",remain_HP);
                        
                        if (monster[0].mon_HP <= 0)
                        {   
                           
                            printf("%s(을)를 처치했습니다!\n",monster[0].mon_name);
                            full_HP = full_HP + (full_HP * HP_up);
                           
                            printf("전투에서 승리하여 체력량이 증가합니다. : %d\n",full_HP);
                                    
                          

                            
                                   
                            printf("체력이 회복되었습니다. 현재 체력은 %d입니다.\n", remain_HP);
                            if(remain_HP >= full_HP)
                            {   
                                
                                printf("남아있는 체력은 최대체력을 넘을 수 없습니다. 현재 체력 : %d\n", remain_HP);
                                remain_HP = full_HP;
                            }

                            if(shiledrandom <= 5)
                            {   item_shield += 1;
                               
                                printf("절대무적방패를 획득하였습니다!\n");
                               
                                printf("현재 소지 방패 수는 %d개입니다.\n", item_shield);
                            }

                            if(item_shield >= 10)
                            {
                                item_shield = 10;
                               
                                printf("절대무적방패가 소지한도를 넘어서 일부 사라집니다.\n");
                                        
                            }

                            drugrandom = rand()%100;
                            if(drugrandom >= 50)
                            {
                                item_drug += 1;
                               
                                printf("환약을 획득 했습니다.\n");
                                if(item_drug >= 10)
                                {
                                    item_drug = 10;
                                   
                                    printf("환약의 소지 한도가 초과 되었습니다.\n");
                                }
                                else
                                   
                                    printf("현재 보유한 환약 수는..%d개 입니다.\n", item_drug);
                            }
                            noterand = rand()%100;
                            if(noterand >= 80)
                            {
                                item_note += 1;
                               
                                printf("데스노트를 획득 했습니다.\n");
                                if(item_note >= 3)
                                {
                                    item_note = 3;
                                   
                                    printf("데스노트의 소지 한도가 초과 되었습니다.\n");
                                }
                                else
                                    printf("현재 보유한 데스노트 수는 %d개 입니다.\n", item_note);
                            }
                            flag = 1;
        
                        }    
                }
    }
    return 0;
}

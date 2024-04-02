#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NAMELEN 30
#define NUM_MONSTERS 9 
int main() {
    srand(time(NULL));
    int full_HP = 100; // 확인용
    int remain_HP = 100; // 확인용
    int user_dam = 1000; // 확인용
    int gold = 300;
    int floor;
    int choice;
    int monster_dam;
    int monster_HP;
    int town_return = 0;
    int town_return_rand;
    int boss_rand;
    int real_boss_rand;
    int final_real_boss_rand;
    int gold_drop_rand;
    int item_HP = 3; // 확인용
    int potion; // 확인용
    int run;
    int class_rand = 0;
    int class_num = 70;
    int teleport = 0;
    int teleport_num;
    int teleport_rand = 0;
    int equip_2T_rand = 0;
    int equip_2T_num = 1;
    int equip_2T =0;
    int equip_3T_rand = 0;
    int equip_3T_num = 1;
    int equip_3T =0;
    int equip_4T_rand = 0;
    int equip_4T_num = 1;
    int equip_4T =0;

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

    while (1){
        
        printf("층 수를 입력하세요: ");
        scanf("%d",&floor);
        
            if (floor == 1){
                strcpy(monster_name, "오크전사");
                strcpy(monster_T, "노말 몬스터");
                monster_dam = rand() % 15 + 10;
                monster_HP = rand() % 100 + 50;
                HP_up = 0.01;
                gold_drop_rand = rand() % 10 + 5;
            }
            else if (floor == 2 ){
                strcpy(monster_name, "좀비");
                strcpy(monster_T, "노말 몬스터");
                monster_dam = rand() % 30 + 17;
                monster_HP = rand() % 180 + 50;
                HP_up = 0.02;
                gold_drop_rand = rand() % 60 + 5;
            }
            else if (floor == 3 ){
                strcpy(monster_name, "구울");
                strcpy(monster_T, "노말 몬스터");
                monster_dam = rand() % 40 + 25; 
                monster_HP = rand()%280 + 120;
                HP_up = 0.03;
                gold_drop_rand = rand()%100 + 5;
            }
            else if (floor == 4 ){
                strcpy(monster_name, "해골");
                strcpy(monster_T, "노말 몬스터");
                monster_dam = rand()%55 + 28;
                monster_HP = rand()%260 + 200;
                HP_up = 0.05;
                gold_drop_rand = rand()%130 + 5;
            }
            else if (floor == 5 ){
                strcpy(monster_name, "스파토이");
                strcpy(monster_T, "노말 몬스터");
                monster_dam = rand()%75 + 32;
                monster_HP = rand()%360 + 260;
                HP_up = 0.07;
                gold_drop_rand = rand()%200 + 5;
            }

            boss_rand = rand()%100;
            if (floor == 5 && boss_rand >= 80){
                strcpy(monster_name, "바포매트");
                strcpy(monster_T, "보스 몬스터");
                monster_dam = rand()%300 + 100;
                monster_HP = remain_HP*5;
                HP_up = 0.3;
                gold_drop_rand = rand()%700+5;
            }
            real_boss_rand = rand()%100;
            if (floor == 5 && real_boss_rand >= 90){
                strcpy(monster_name, "이동녘");
                strcpy(monster_T, "찐보스 몬스터");
                monster_dam = rand()%550+300;
                monster_HP = remain_HP*7;
                HP_up = 0.6;
                gold_drop_rand = rand()%1000+5;
            }
            final_real_boss_rand = rand()%100;
            if (floor == 5 && final_real_boss_rand >= 95){
                strcpy(monster_name, "류홍걸");
                strcpy(monster_T, "찐막보스 몬스터");
                monster_dam = rand()%1300+500;
                monster_HP = remain_HP*10;
                HP_up = 1.0;
                gold_drop_rand = rand()%3000+5;
            }
            class_rand = rand()%100;
            if (class_rand >= class_num){
                strcpy(monster_name, class_name[rand()%27]);
                strcpy(monster_T, "네임드 용사");
                monster_dam = rand()%300 + 100;
                monster_HP = remain_HP*2;
                HP_up = 0.2;
                gold_drop_rand = rand()%500 + 5;
            }
        
            printf("\n%s %s 등장!\n",monster_T,monster_name);
            printf("%s 체력: %d\n",monster_name,monster_HP);
            printf("전투가 시작됩니다\n");

        while(1){
            int flag = 0;
            int ichoice =0;
           
            printf("나의 체력 : %d\n",remain_HP);
            printf("\n1.공격  2.아이템  3.도망\n 원하는 번호를 선택하시오. : ");
            scanf("%d",&choice);
                
                switch(choice)
                {
                    case 1:
                            
                            
                            printf("\n\n용사복이가 %s에게 공격을 가합니다.\n",monster_name);
                             printf("%d의 데미지!\n", user_dam);
                            monster_HP -= user_dam;
                            printf("%s 남은 체력 : %d\n",monster_name,monster_HP);
                            
                        if (monster_HP <= 0)
                        {   
                           
                            printf("%s(을)를 처치했습니다!\n",monster_name);
                            full_HP = full_HP + (full_HP * HP_up);
                            gold += gold_drop_rand;
                            printf("%d G 획득 했습니다. 현재 소지 골드: %d G\n",gold_drop_rand,gold);
                            printf("\n전투에서 승리하여 체력량이 증가합니다. : %d\n",full_HP);

                            town_return_rand = rand()%100;
                            if(town_return_rand >= 80)
                            {
                                town_return += 1;
                               
                                printf("\n마을귀환 주문서를 1개 획득 했습니다.\n");
                                printf("현재 보유한 마을귀환 주문서의 개수는 %d개 입니다.\n", town_return);
                            }
                            if(teleport_rand >= 70)
                            {
                                teleport_num = rand()%3+1;
                                teleport += teleport_num;
                                teleport_rand = 0;
                               
                                printf("\n순간이동 주문서를 %d개 획득 했습니다.\n",teleport_num);
                                printf("현재 보유한 순간이동 주문서의 개수는 %d개 입니다.\n", teleport);
                            }
                            if(equip_2T_rand >= equip_2T_num){
                                equip_2T += 1;
                                equip_2T_rand = 0;

                                printf("\n2티어 장비를 획득 했습니다.\n");
                            }
                            if(equip_3T_rand >= equip_3T_num){
                                equip_3T += 1;
                                equip_3T_rand = 0;

                                printf("\n3티어 장비를 획득 했습니다.\n");
                            }
                            if(equip_4T_rand >= equip_4T_num){
                                equip_4T += 1;
                                equip_4T_rand = 0;
                                printf("\n4티어 장비를 획득 했습니다.\n");
                            }
                            if(strcmp(monster_T,"네임드") == 0){
                                class_num = 70;
                                teleport_rand = rand()%100;
                                equip_2T_num = 80;
                                equip_3T_num = 80;
                                equip_2T_rand = rand()%100;
                                equip_3T_rand = rand()%100;
                            }
                            else if(strcmp(monster_T,"보스 몬스터") == 0){
                                class_num = 80;
                                teleport_rand = rand()%100;
                                equip_3T_num = 80;
                                equip_4T_num = 95;
                                equip_3T_rand = rand()%100;
                                equip_4T_rand = rand()%100;
                            }
                            else if(strcmp(monster_T,"찐보스 몬스터") == 0){
                                class_num = 90;
                                teleport_rand = rand()%100;
                                equip_3T_num = 80;
                                equip_4T_num = 90;
                                equip_3T_rand = rand()%100;
                                equip_4T_rand = rand()%100;
                            }
                            else if(strcmp(monster_T,"찐막보스 몬스터") == 0){
                                class_num = 95;
                                teleport_rand = rand()%100;
                                equip_3T_num = 70;
                                equip_4T_num = 80;
                                equip_3T_rand = rand()%100;
                                equip_4T_rand = rand()%100;
                            }
                            else if (strcmp(monster_name,"해골") == 0 || strcmp(monster_name,"스파토이") == 0 )
                            {
                                equip_2T_num = 80;
                                equip_2T_rand = rand()%100;
                            }
                            
                            flag = 1;
                        }
                        break;
                    case 2:
                        
                            printf("사용할 아이템을 선택해 주세요.\n");
                            printf("1. 빨간물약(%d)   2. 주황물약(%d)   3. 맑은물약(%d)   4. 고농도물약(%d)   5.취소\n",item_HP,item_HP,item_HP,item_HP);
                            scanf("%d", &ichoice);
                            if (ichoice == 1)
                                potion = 30;
                            else if (ichoice == 2)
                                potion = 50;
                            else if (ichoice == 3)
                                potion = 70;
                            else if (ichoice == 4)
                                potion = 150;
                            else if (ichoice == 5)
                                break;
                            else {
                                printf("번호를 다시 입력해주세요.\n");
                                continue;
                            }
                            if(item_HP == 0)
                            {   
                                
                                printf("소지한 물약이 없습니다.\n");
                                break;
                            }
                            else
                            {   
                                
                                printf("현재 체력 : %d  \n",remain_HP);
                                remain_HP = remain_HP + potion;
                                
                                printf("체력이 %d 회복되었습니다.\n",potion);
                                if(remain_HP >full_HP)
                                {   
                                    
                                    printf("\n회복체력이 최대 체력 %d를 초과합니다.\n",full_HP);
                                    
                                    printf("체력이 최대 체력만큼 재조정 됩니다.\n");
                                    remain_HP = full_HP;
                                }
                                
                                printf("회복 후 체력 : %d  \n",remain_HP);
                                item_HP -= 1;
                                
                                printf("남아있는 포션 : %d\n",item_HP);
                                break;
                            }
                            
                            break;
                            
                    case 3:
                            run = rand()%10+1;
                            if (run >= 8)
                            {   
                                printf("\n%s에게서 도망쳤습니다.\n",monster_name);
                                flag=1;
                            }
                            else
                            {   
                                printf("\n도망에 실패했습니다.\n%s의 턴으로 전환됩니다.\n",monster_name);
                            }
                            
                            break;
                            
                    default:
                            
                            printf("번호를 다시 입력해주세요.\n");
                            continue;
                    }    
                    

                if(flag == 1)
                {
                    
                    break; //맵 이동으로 전환
                }
        /////////////////////////////////////////////////////////////몬스터 턴////////////////////////////////////////////////////////////////////////
                
                printf("\n%s(이)가 용사복이를 공격합니다!\n",monster_name);

                printf("%d의 데미지!\n", monster_dam);
                remain_HP = remain_HP - monster_dam;
                
                // printf("나의 남은 체력 : %d\n",remain_HP);

                if(remain_HP < 0)
                {   
                    
                    printf("\n플레이어가 사망했습니다.\n");
                    remain_HP = full_HP*0.1;
                    printf("마을에서 부활합니다. 체력이 10%% 회복됩니다.\n");
                    printf("현재체력: %d\n",remain_HP);
                    break;
                }
                continue;
               
        }

    
    }
    return 0;
}

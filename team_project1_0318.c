#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    char name[40];
    int i=0;
    int turn =0, turn_exp=0, turn_event=0,turn_cnt=0;
    int level = 1;
    int end = 0, game_cnt = 0;
    float now_exp =0,levelup_exp=30000;
    float event_exp = 0;
    float turn_rand = 0,levelup_rand=0;
    float exp_rand =0, total_exp=0, event_rand = 0;


    

    // printf("닉네임을 지정해주세요: ");
    // scanf("%s",name);
    printf("\n========== 게임을 시작 합니다 ==========\n");


    // while(turn_cnt<=1){
    for(i=0; i<1;i++){
        turn = 0;
        while (turn<=4){ 

            // turn_rand = rand()%7000-3500;
            turn_rand = rand()%1000;
            total_exp+= turn_rand; 
            turn++;
            printf("경험치를 %f 획득하였습니다.\n",turn_rand);

            if (turn == 5){   
                event_rand = 1.0 + (float)rand() / ((float)RAND_MAX / 4.0);
                now_exp = total_exp * event_rand;
                levelup_rand = 1.8+(double)rand()/RAND_MAX*(2.5-1.8);
                printf("*****이벤트 발생 경험치 %0.1f배*****\n",event_rand);
                game_cnt++;

                printf("event_rand = %f,\nnow_exp = %f,\nlevelup_rand = %f,\n", event_rand, now_exp, levelup_rand);
                printf("level = %d\n", level);
                

                while (level<=2||level<1){
                    if (now_exp>=levelup_exp){
                        
                        if (level == 1){
                            levelup_exp = 30000;
                        }
                            

                        else if (2<=level){
                            printf("======================================\n");
                            printf("         LV.%d  Exp %f\n",level,now_exp);
                            printf("\n\n============= Victory ==============\n");
                            printf("============= happy ending =============\n\n");
                            printf("\n\n\n");
                            game_cnt = 0;
                            break;
                        }

                        levelup_exp = levelup_rand *levelup_exp;
                        level++;

                    }


                //     else if(now_exp<=0){
                //         level -= level;

                //         if (level<1){
                //             level = 0;
                //             now_exp = 0;
                //             printf("======================================\n");
                //             printf("         LV.%d  Exp %f\n",level,now_exp);
                //             printf("%15d턴째 종료.\n",game_cnt);
                //             printf("======================================\n");
                //             printf("\n\n============= Game Over ==============\n");
                //             printf("============= Bad Ending =============\n\n");
                //             printf("\n\n\n");
                //             game_cnt = 0;
                //             break;
                //         }

                //         else if (level == 0){
                //             level = 0;
                //             now_exp = 0;
                //             printf("======================================\n");
                //             printf("         LV.%d  Exp.%f\n",level,now_exp);
                //             printf("%15d턴째 종료.\n",game_cnt);
                //             printf("======================================\n");
                //             printf("\n\n============= Game Over ==============\n");
                //             printf("============= Knock Down =============\n\n");
                //             printf("\n\n\n");
                //             game_cnt = 0;
                //             break;
                //         }
                    
                //     }        
                //     else{
                //         printf("======================================\n");
                //         printf("         LV.%d  Exp.%f\n",level,now_exp);
                //         printf("다음 레벨까지 필요 경험치 %f\n",levelup_exp-now_exp);
                //         printf("%15d턴째 진행 중입니다.\n",game_cnt);
                //         printf("======================================\n");
                //         printf("게임을 더 진행하시겠습니까? \n yes : enter / no : ctrl + c\n");
                //         char yes = 0;
                //         scanf("%c",&yes);
                //         if ( yes == '\n')
                //             break;

                //     }
                }
            }
        }
    }
    

}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
srand(time(NULL));
char name[40];
int nowlevel =1,turn =0, turn_exp=0, turn_event=0,turn_cnt=0;
int end = 0, game_cnt = 0;
float now_exp =0,levelup_exp=30000;
float event_exp = 0;
float turn_rand = 0,levelup_rand=0;
float exp_rand =0, total_exp=0, event_rand = 0;

printf("닉네임을 지정해주세요: ");
scanf("%s",name);
printf("\n========== 게임을 시작 합니다 ==========\n");


    while(turn_cnt<=1)
    {   
        turn = 0;
        while ( turn<=5)
        { 
            turn_rand = rand()%7000-3500;
            total_exp+= turn_rand; 
            turn++;
         
            printf("경험치를 %f 획득하였습니다.\n",turn_rand);
            if (turn == 5)
            {   
                event_rand = 1.0 + (float)rand() / ((float)RAND_MAX / 4.0);
                now_exp = total_exp * event_rand;
                levelup_rand = 1.8+(double)rand()/RAND_MAX*(2.5-1.8);
                printf("*****이벤트 발생 경험치 %0.1f배*****\n",event_rand);
                game_cnt++;
                while (nowlevel <= 99 || nowlevel < 1)
                {
                    if (now_exp>=levelup_exp)
                    {   
                        if (nowlevel == 1)
                        {
                            levelup_exp = 30000;
                        }
                        
                        levelup_exp = levelup_rand *levelup_exp;
                        nowlevel++;

                        if (nowlevel==99)
                        {
                            printf("======================================\n");
                            printf("         LV.%d  Exp %f\n",nowlevel,now_exp);
                            printf("\n\n============= Victory ==============\n");
                            printf("============= happy ending =============\n\n");
                            printf("\n\n\n");
                            game_cnt = 0;
                            break;
                        }
                    }
                    else if(now_exp<=0)
                    {
                        nowlevel -= nowlevel;

                        if (nowlevel<1)
                        {
                            nowlevel = 0;
                            now_exp = 0;
                            printf("======================================\n");
                            printf("         LV.%d  Exp %f\n",nowlevel,now_exp);
                            printf("%15d턴째 종료.\n",game_cnt);
                            printf("======================================\n");
                            printf("\n\n============= Game Over ==============\n");
                            printf("============= Bad Ending =============\n\n");
                            printf("\n\n\n");
                            game_cnt = 0;
                            
                        }
                        else if (nowlevel == 0)
                        {
                            nowlevel = 0;
                            now_exp = 0;
                            printf("======================================\n");
                            printf("         LV.%d  Exp.%f\n",nowlevel,now_exp);
                            printf("%15d턴째 종료.\n",game_cnt);
                            printf("======================================\n");
                            printf("\n\n============= Game Over ==============\n");
                            printf("============= Knock Down =============\n\n");
                            printf("\n\n\n");
                            game_cnt = 0;
                            
                        }
                       
                    }
                    else
                    {
                        printf("======================================\n");
                        printf("         LV.%d  Exp.%f\n",nowlevel,now_exp);
                        printf("다음 레벨까지 필요 경험치 %f\n",levelup_exp-now_exp);
                        printf("%10d턴째 진행 중입니다.\n",game_cnt);
                        printf("======================================\n");
                        printf("게임을 더 진행하시겠습니까? \n yes : enter / no : ctrl + c\n");
                        char yes = 0;
                        scanf("%c",&yes);
                        if ( yes == '\n')
                        {
                            break;
                        }
                        
                    }        
                }
            }
        }
         
    }
    turn_cnt++;
    
return 0;
}



// 배열로 학우들 이름과 복이를 몬스터 배열에 저장해놓는다.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<termios.h>
#include <wchar.h>
#define ESC_KEY_VAL 27

int getch();
void map_move();

int main()
{

srand(time(NULL));




char monster [4][50] = {
        {"김민아"},{"강진영"},{"조대정"}

};

// char monster [28][10] = {
//         {"유시온"},{"김승수"},{"권철민"},{"안광민"},{"강진영"},
//         {"김영곤"},{"박선후"},{"김건"},{"이준호"},{"이철"},{"이동준"},
//         {"황은비"},{"조세빈"},{"김성근"},{"이은승"},{"박희정"},{"박장미"},
//         {"김민아"},{"조대정"},{"김재신"},{"박민건"},{"임석현"},{"황운하"},
//         {"노주영"},{"김혜빈"},{"서훈"},{"오은지"},{"복이"}
// };

char name[]={};
float Full_HP = 3000;
int item_HP = 3;
int level = 1;
float remain_HP=3000;
int turn  = 0;
int result = 0;


//유저의 이름을 받는다.
printf("이름을 입력해주세요 : "); 
scanf("%s",name);

int monster_random = rand()%2;
int choice,run;
int shiledCount =1;
float monster_HP;
float monster_dam;

while(1)
{   
    map_move();
    int count=0;
    float bok_HP_random  = Full_HP * (5.0 + (float)rand() / ((float)RAND_MAX / 8.0));
    float monster_HP  = Full_HP*(1.0 + (float)rand() / ((float)RAND_MAX / 2.0));
    float monster_dam = Full_HP*(0.5 + (float)rand() / ((float)RAND_MAX / 2.0));
    float potion      = Full_HP*(0.3 + (float)rand() / ((float)RAND_MAX / 0.8));
    float user_dam    = (remain_HP/2)*(1.0 +(float)rand() / ((float)RAND_MAX / 4.0));
    result = wcscmp( monster[monster_random], name );
    if (result == 0 ){
        break;
    }
    else if(monster[monster_random] == "복이"){
            monster_HP = bok_HP_random;
    }
    else
    {
        monster_HP  = Full_HP * (Full_HP*(1.0 + (float)rand() / ((float)RAND_MAX / 2.0)));
    }
    
    monster_HP  = Full_HP*(1.0 + (float)rand() / ((float)RAND_MAX / 2.0));
    monster_dam = Full_HP*(0.5 + (float)rand() / ((float)RAND_MAX / 2.0));

    printf("야생의 %s (이)가 나타났다!!!",monster[monster_random]);  			//몬스터 이름 출력 
    sleep(1);
//////////////////////////////////////////////////////////////////////////유저의 턴/////////////////////////////
        while(1)        
        {
            int flag = 0;
            int ichoice =0;
            int shiledactivated=0;

            printf("\n1. 공격	 2.아이템  3.도망\n 원하는 번호를 선택하시오. : ");
            scanf("%d",&choice);
            
            switch(choice)
            {
                case 1:
                    //공격을 선택하면 공격력 변수를 이용하여 적 몬스터의 체력을 깎고
                    printf("현재 공격력 : %.2f\n",user_dam);
                    sleep(1);
                    printf("플레이어가 몬스터에게 공격을 가합니다.\n");
                    sleep(1);
                    monster_HP -= user_dam;
                    printf("몬스터 체력 : %.2f\n",monster_HP);
                    sleep(1);
                    printf("나의 남은체력 : %.2f\n",remain_HP);
                        if (monster_HP <= 0)
                            {   
                                sleep(1);
                                printf("신난다! %s를 갈기갈기 찢어버렸다!\n",monster[monster_random]);
                                turn+=1;
                                sleep(1);
                                printf("레벨이 올랐습니다!\n");
                                level += 1;
                                Full_HP = Full_HP + (Full_HP * (1.2 + (float)rand() / ((float)RAND_MAX / 2.5)));
                                printf("전투에서 승리해 체력이 재설정 되었습니다. : %.2f",Full_HP);
                                
                                item_HP += rand()%11;
                                if(item_HP >= 300)
                                    {
                                        item_HP = 300;
                                        sleep(1);
                                        printf("회복포션이 소지한도를 넘어서 일부 사라집니다.\n");
                                    }
                                else
                                {    
                                    printf("체력회복 아이템을 획득하였습니다.\n현재 소지한 포션은 %d개 입니다.",item_HP);
                                }

                                remain_HP += Full_HP * (0.3 + (float)rand() / ((float)RAND_MAX / 1.0));
                                sleep(1);
                                
                                printf("체력이 회복되었습니다. 현재 체력은 %.2f입니다.\n", remain_HP);
                                if(remain_HP >= Full_HP)
                                {    
                                    printf("남아있는 체력은 최대체력을 넘을 수 없습니다. 현재 체력 : 3000");
                                    remain_HP = Full_HP;
                                }

                                shiledCount += rand()%6;
                                if(shiledCount = 10)
                                {
                                    shiledCount = 10;
                                    sleep(1);
                                    printf("절대무적방패가 소지한도를 넘어서 일부 사라집니다.\n");
                                    break;
                                }

                                else
                                    {
                                        shiledCount = 10;
                                        sleep(1);
                                        printf("절대무적방패가 소지한도를 넘어서 일부 사라집니다.\n");
                                    }

                            }
                                flag=1;   
 
                            break;


                case 2:
                    sleep(1);
                    printf("사용할 아이템을 선택해 주세요.\n");
                    printf("1. 회복포션   2. 절대무적방패   3.취소\n");
                    scanf("%d", &ichoice);
                    if (ichoice == 1)
                    {
                        if(item_HP == 0)
                        {   
                            sleep(1);
                            printf("소지한 회복 물약이 없습니다.\n");
                            break;
                        }
                        else
                        {   
                            sleep(1);
                            printf("현재 체력 : %.2f  ",remain_HP);
                            if(remain_HP >3000)
                            {   
                                sleep(1);
                                printf("회복한 체력이 %.2f를 넘을 수 없습니다.",Full_HP);
                                remain_HP = Full_HP;
                            }
                            else
                                remain_HP = remain_HP + potion;
                            sleep(1);
                            printf("회복 후 체력 : %.2f  ",remain_HP);
                            item_HP -= 1;
                            sleep(1);
                            printf("남아있는 포션 : %d\n",item_HP);
                            break;
                        }
                    }

                    else if (ichoice == 2)
                    {
                        if(shiledCount == 0)
                        {
                            sleep(1);
                            printf("소지한 방패가 없습니다.\n");
                            break;
                        }
                        else
                        {
                            sleep(1);
                            printf("방패를 사용합니다.\n");
                            sleep(1);
                            printf("이번 턴 받는 데미지가 50%% 감소합니다.\n");
                                                        
                            turn += 1;
                            shiledactivated = 1;
                            break;
                        }
                    }
                    else
                        break;
                        
                case 3:
                    run = rand()%10+1;
                    if (run <= 3)
                    {   
                        sleep(1);
                        printf("몬스터에게서 도망쳤습니다.\n");
                        turn += 1;
                        flag=1;
                    }
                    
                    else
                    {   
                        sleep(1);
                        printf("도망에 실패했습니다.\n몬스터 턴으로 바뀝니다.");
                    }
                    
                    break;
                    
                default:
                    printf("번호를 다시 입력해주세요.\n");
                    break;
            }    
        		

        if(flag == 1)
            break; //맵 이동으로 전환

/////////////////////////////////////////////////////////////몬스터 턴////////////////////////////////////////
        sleep(1);
        printf("몬스터가 플레이어를 공격합니다.\n");
        sleep(1);
        printf("%s의 전광석화!\n", monster[monster_random]);
        monster_dam = Full_HP*(0.5 + (float)rand() / ((float)RAND_MAX / 2.0));
        
        if(shiledactivated==1 && shiledCount >0)
        {
            shiledCount -= 1;
            monster_dam = monster_dam / 2;
        }

        sleep(1);
        printf("%.1f의 데미지!\n", monster_dam);
        remain_HP = remain_HP - monster_dam;
        sleep(1);
        printf("나의 남은 체력 : %.2f",remain_HP);
        turn += 1;
        
        
        if(remain_HP < 0)
           {
               printf("플레이어가 사망했습니다.\n");
               sleep(1);
               printf("Bad Ending....\n");

            exit(0);
           }
        continue;
        }
    }
    return 0;
}



void map_move()
{

    int map[10][50]={
        {0}
    };

    int field_random  = rand()%10+1;
    printf("%d\n",field_random);
    int x=0,y=0;
    int a=0,b=0;
    int count = 0;  //w,a,s,d 입력 합친 값
    int command=0;
        
    do{
        
        for(x=0; x<10 ; ++x)
        {
            for(y=0 ; y<50 ; ++y)
            {
                printf("%d ",map[x][y]);
            }
            printf("\n");
        }
        
        printf("문자 입력\n");
        command = getch();
        printf("출력 문자 %c\n",command);

        switch (command){
            case 'w':
            case 'W':
                        printf("up\n");
                        map[a-1][b]=1;
                        a-=1;
                        count+=1;
                        printf("카운트 : %d\n",count);
                    

                break;
            
            case 's':
            case 'S':
                        printf("down\n");
                        map[a+1][b]=1;
                        a+=1;
                        count+=1;
                        printf("카운트 : %d\n",count);
                        break;
            
            case 'a':
            case 'A':
                        printf("left\n");
                        map[a][b-1]=1;
                        b-=1;
                        count+=1;
                        printf("카운트 : %d\n",count);
                break;
            
            case 'd':
            case 'D':
                        printf("right\n");
                        map[a][b+1]=1;
                        b+=1;
                        count+=1;
                        printf("카운트 : %d\n",count);    
                break;            
        }

    }while(count < field_random); //command!=ESC_KEY_VAL || 


}

 int getch(){
    int c;
     struct termios oldattr, newattr;
    tcgetattr(STDIN_FILENO, &oldattr);           // 현재 터미널 설정 읽음
     newattr = oldattr;
     newattr.c_lflag &= ~(ICANON | ECHO);         // CANONICAL과 ECHO 끔
     newattr.c_cc[VMIN] = 1;                      // 최소 입력 문자 수를 1로 설정
     newattr.c_cc[VTIME] = 0;                     // 최소 읽기 대기 시간을 0으로 설정
     tcsetattr(STDIN_FILENO, TCSANOW, &newattr);  // 터미널에 설정 입력
     c = getchar();                               // 키보드 입력 읽음
     tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);  // 원래의 설정으로 복구
     return c;
}



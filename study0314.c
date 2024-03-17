//<06장 C의 제어문 : 루프>//
// for문

// /* for_cube.c -- for 루프를 사용하여 세제곱 표를 만든다 */
// #include <stdio.h>
// int main(void)
// {
//     int num;

//     printf("    n   n의 세제곱\n");
//     for (num = 1; num <= 6; num++)
//         printf("%5d %5d\n",num, num*num*num);

//     return 0;
// }

// /* for_down.c */
// #include <stdio.h>
// int main(void)
// {
//     int secs;

//     for (secs = 5; secs> 0; secs--)
//         printf("%d초!\n",secs);
//     printf("발사!\n");
//     return 0; 
// }

// /* for_13s.c */
// #include <stdio.h>
// int main(void)
// {
//     int n;      /* 2부터 13씩 세어본다 */

//     for (n = 2; n < 60; n = n +13)
//         printf("%d \n",n);
//     return 0;
// }

// /* for_char.c */
// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     for (ch = 'a'; ch <= 'z'; ch++)
//         printf("%c에 해당하는 ASCII 코드값은 %d입니다.\n",ch,ch);

//     return 0;
// }

// /* for_geo.c */
// #include <stdio.h>
// int main(void)
// {
//     double debt;

//     for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
//         printf("당신의 신용불량채무는 이제 $%.2f입니다.\n",debt);
//     return 0;
// }

// /* for_wild.c */
// #include <stdio.h>
// int main(void)
// {
//     int x;
//     int y = 55;

//     for (x = 1; y <= 75; y = (++x * 5) + 50)
//         printf("%10d %10d\n",x,y);
//     return 0;
// }

// /* for_none.c */
// #include <stdio.h>
// int main(void)
// {
//     int ans, n;

//     ans = 2;
//     for ( n =3; ans <= 25;)
//         ans = ans * n;
//     printf("n = %d; ans = %d.\n",n,ans);
//     return 0;
//     }

// /* for_show.c */
// #include <stdio.h>
// int main(void)
// {
//     int num = 0;

//     for (printf("수를 계속해서 입력하시오!\n"); num != 6; )
//         scanf("%d", &num);
//     printf("그것이 바로 내가 원하는 수입니다!\n");
//     return 0;
// }

// do while문

// /* do_while.c -- 탈출 조건 루프 */
// #include <stdio.h>
// int main(void)
// {
//     const int secret_code = 13;
//     int code_entered;

//     do
//     {
//         printf("13일의 금요일 공포증 치료 동호회에 들어오려면,\n");
//         printf("비밀 코드 번호를 입력하시오: ");
//         scanf("%d", &code_entered);
//     } while (code_entered != secret_code);
//     printf("축하합니다! 치료되었습니다!\n");

//     return 0;
// }

// /* rows1.c -- 중첩 루프를 사용한다 */
// #include <stdio.h>
// #define ROWS 6
// #define CHARS 10
// int main(void)
// {
//     int row;
//     char ch;
    
//     for (row = 0; row < ROWS; row++)
//     {
//         for (ch = 'A'; ch < ('A' + CHARS); ch++)
//             printf("%c",ch);
//         printf("\n");
//     }

//     return 0;
// }

// // rows2.c -- 의존적인 중첩 루프를 사용한다
// #include <stdio.h>
// int main(void)
// {
//     const int ROWS = 6;
//     const int CHARS = 6;
//     int row;
//     char ch;
//     for (row = 0; row <ROWS; row++)

//     {
//         for(ch = ('A'+row); ch < ('A'+CHARS); ch++)
//             printf("%c",ch);
//         printf("\n");
//     }
    
//     return 0;
// }

// // scores_in.c -- 배열 처리에 루프를 사용한다
// #include <stdio.h>
// #define SIZE 10
// #define PAR 72
// int main(void)
// {
//     int index, score[SIZE];
//     int sum = 0;
//     float average;

//     printf("%d개의 골프 스코어를 입력하시오.:\n",SIZE);
//     for (index = 0; index < SIZE; index++)
//         scanf ("%d", &score[index]);   // 10개의 골프 스코어를 읽는다
//     printf("읽은 스코어들은 다음과 같다:\n");
//     for (index = 0; index < SIZE; index++)
//         printf("%5d", score[index]);    // 입력을 검증한다
//     printf("\n");
//     for (index = 0; index < SIZE; index++)
//         sum += score[index];        // 모두 더한다
//     average = (float) sum / SIZE;   // 평균을 구한다
//     printf("스코어의 합 = %d, 평균 = %.2f\n",sum,average);
//     printf("핸디캡이 %.0f이다.\n",average - PAR);

//     return 0;
// }

// // colddays.c -- 영하로 내려간 날들의 백분율을 구한다
// #include <stdio.h>
// int main(void)
// {
//     const int FREEZING = 0;
//     float temperature;
//     int cold_days = 0;
//     int all_days = 0;

//     printf("최저 기온들의 목록을 입력하시오.\n");
//     printf("섭씨 단위를 사용하시오(입력을 끝내려면 q).\n");
//     while (scanf("%f",&temperature) == 1)
//     {
//         all_days++;
//         if (temperature < FREEZING)
//             cold_days++;
//     }
//     if (temperature < FREEZING)
//         cold_days++;
//     if (all_days != 0)
//         printf("전체 %d일 중에 영하의 날씨는 %.1f%%였습니다.\n",all_days,100.0*(float) cold_days / all_days);
//     if (all_days == 0)
//         printf("입력된 데이터가 없습니다!\n");
//     return 0;           
// }

// // cypher1.c -- 스페이스는 유지하고, 입력을 변경한다
// #include <stdio.h>
// #define SPACE ' '   // 작은따옴표 - 스페이스 - 작은따옴표
// int main(void)
// {
//     char ch;

//     ch = getchar();         // 문자 하나를 읽는다
//     while (ch !='\n')       // 라인의 끝이 아닌 동안
//     {
//         if (ch == SPACE)    // 스페이스는 그대로 둔다
//             putchar(ch);    // 변경하지 않는다
//         else
//             putchar(ch + 1);    // 다른 문자들은 변경한다
//         ch = getchar();         // 다음 문자를 얻는다
//     }
//     putchar(ch);        // 개행을 출력한다

//     return 0;
// }

// // cypher2.c -- 알파벳 문자가 아닌 것들은 유지하고, 입력을 변경한다
// #include <stdio.h>
// #include <ctype.h>      // isalpha() 함수를 위해
// int main(void)
// {
//     char ch;

//     while((ch = getchar()) !='\n')
//     {
//         if (isalpha(ch))        // 문자이면
//             putchar(ch + 1);    // 다음 문자를 출력한다
//         else                    // 그렇지 않으면
//             putchar(ch);        // 변경하지 않고 그대로 출력한다
//     }
//     putchar(ch);                // 개행을 출력한다

//     return 0;
// }

// // electric.c -- 전기요금을 계산한다
// #include <stdio.h>
// #define RATE1 0.13230       // 처음 360 kwh까지 적용하는 비율
// #define RATE2 0.15040       // 그 다음 108 kwh까지 적용하는 요율
// #define RATE3 0.30025       // 그 다음 252 kwh까지 적용하는 요율
// #define RATE4 0.34025       // 720 kwh를 초과할 때 적용하는 요율
// #define BREAK1 360.0        // 요율의 첫 번째 구분점
// #define BREAK2 468.0        // 요율의 두 번째 구분점
// #define BREAK3 720.0        // 요율의 세 번째 구분점
// #define BASE1 (RATE1 * BREAK1)      // 360 kwh에 대한 요금
// #define BASE2 (BASE1 + (RATE2 *(BREAK2 - BREAK1))) // 468 kwh에 대한 요금
// #define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))
//                                 // 720 kwh에 대한 요금
// int main(void)
// {
//     double kwh;         // 사용할 전력량
//     double bill;        // 부과할 전기요금

//     printf("사용한 전력량을 입력하시오.\n");
//     scanf("%lf",&kwh);      // double형을 위해 %lf 사용
//     if (kwh <= BREAK1)
//         bill = RATE1 * kwh;
//     else if (kwh <= BREAK2)     // 사용한 전력량이 360과 468사이
//         bill = BASE1 + (RATE2*(kwh - BREAK1));
//     else if (kwh <= BREAK3)     // 사용한 전력량이 468과 720사이
//         bill = BASE2 + (RATE3 * (kwh - BREAK2));
//     else                    // 사용한 전력량이 680을 초과
//         bill = BASE3 + (RATE4 * (kwh - BREAK3));
//     printf("%.1f kwh의 전기요금은 $%1.2f입니다.\n",kwh,bill);

//     return 0;
// }

// // divisors.c -- 중첩된 if문들이 어떤 수의 약수들을 출력한다
// #include <stdio.h>
// #include <stdbool.h>
// int main(void)
// {
//     unsigned long num;
//     unsigned long div;
//     bool isPrime;

//     printf("검사할 정수를 하나 입력하시오");
//     printf("(끝내려면 q)\n");
//     while(scanf("%lu",&num) == 1)
//     {
//         for (div = 2, isPrime = true; (div * div) <= num; div++)
//         {
//             if (num % div == 0)
//             {
//                 if ((div * div) != num )
//                     printf("%lu,%lu: 둘 다 %lu의 약수다.\n",div,num/div,num);
//                 else
//                     printf("%lu: %lu의 약수다.\n",div,num);
//                 isPrime = false;
//             }
//         }  
//             if (isPrime)
//                 printf("%lu: 소수다.\n",num);
//                 printf("검사할 또 다른 정수를 하나 입력하시오");
//                 printf("(끝내려면 q)\n");
        
//     }
//     printf("안녕!\n");
//     return 0;
// }

// <06장 복습문제>
// 문제06. 중첩 루프를 사용하여 다음과 같은 패턴을 출력하는 프로그램을 작성하라

// //for문 사용
// #include <stdio.h>
// int main(void)
// {
//     int i, j;
//     for(i=1; i<=4; i++)
//        {
//         printf("$");
//             for(j=1; j<=7; j++)
//             {
//                 printf("$");
//             }
//         printf("\n");    
//        }     
//  return 0;       
// }

// //while문 사용
// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int j = 0;
//     while (i<=3)
//     {   j=0;
//         printf("$");
//         i++;
//         while (j<=6)
//         {
//             printf("$");
//             j++;
//         }    
//         printf("\n");
//     }
// return 0;
// }

// // <06장 프로그래밍 연습문제>

// /* 문제01. 26개의 원소를 가지는 배열을 만들고,
// 그 배열에 26개의 알파벳 소문자를 저장하는 프로그램을 작성하라. */

// #include <stdio.h>
// int main(void)
// {
//     char alpha[27];
//     char a = 'a';
//     int b = 0;

//     while (a <= 'z')
//     {
//         alpha[b]=a;
//         printf("%c ",alpha[b]);
//         a++,b++;
        
//     }
// return 0;
// }

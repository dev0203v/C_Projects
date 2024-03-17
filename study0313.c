//<05장 연산자, 표현식, 문장>

// /* conert.c --자동 데이터형 변환 */
// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     int i;
//     float fl;

//     fl = i = ch = 'C';
//     printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//     ch = ch + 1;
//     i = fl + 2 * ch;
//     fl = 2.0 * ch + i;
//     printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//     ch = 1107;
//     printf("이제 ch = %c\n", ch);
//     ch = 80.99;
//     printf("이제 ch = %c\n", ch);

//     return 0;
// }

// // running.c -- 욱상선수에게 유용한 프로그램
// #include <stdio.h>
// const int S_PER_M = 60;             // 1뷴의 초 수
// const int S_PER_H = 3600;           // 1시간의 초 수
// const double M_PER_K = 0.62137;     // 1킬로미터의 마일 수
// int main(void)
// {
//     double distk, distm;        // 달린 거리 (각각 킬로미터 수와 마알 수)
//     double rate;                // 평균속도(mph; 시간당 마일 수로)
//     int min, sec;               // 달린 시간(분 수와 초 수로)
//     int time;                   // 달린 시간(초 수로만)
//     double mtime;               // 1마일을 달린 시간(초 수로만)
//     int mmin,msec;              // 1마일을 달린 시간(분 수와 초 수로)

//     printf("이 프로그램은 미터단위계로 측정한 달리기 기록을\n");
//     printf("1마일을 달린 시간과, 평균속도(mph)로 변환한다.\n");
//     printf("달린 거리를 킬로미터 수로 입력하시오.\n");
//     scanf("%lf",&distk);        // double형을 위하여 %lf 사용
//     printf("달린 시간을 분 수와 초 수로 입력하시오.\n");
//     printf("먼저 분 수부터 입력하시오.\n");
//     scanf("%d",&min);
//     printf("이제 초 수를 입력하시오.\n");
//     scanf("%d",&sec);
//     // 달린 시간을 순전한 초 수로 변환한다
//     time = S_PER_M * min + sec;
//     // 킬로미터 수를 마일 수로 변환한다
//     distm = M_PER_K * distk;
//     // 초당 마일 수 * 시간당 초 = mph
//     rate = distm / time * S_PER_H;
//     // 시간/거리 = 마일당 시간
//     mtime = (double) time / distm;
//     mmin = (int) mtime / S_PER_M;       // 완전한 분 수를 구한다
//     msec = (int) mtime % S_PER_M;       // 나머지 초 수를 구한다
//     printf("당신은 %1.2f킬로미터(%1.2f마일)를 %d분, %d초에 달렸다.\n",distk,distm,min,sec);
//     printf("이 페이스는 1마일을 %d분, %d초에 ""달린 것에 해당한다.\n",mmin,msec);
//     printf("평균속도는 %1.2f mph였다.\n",rate);

//     return 0;
// }

// <복습문제 풀이>
// #include <stdio.h>
// int main(void)
// {
//     int y;
//     int x;

//     // x = (2+3) * 6;
//     // printf("%d",x);

//     // x =(12+6)/2*3;
//     // printf("%d",x);
    
//     // y = x = (2 + 3)/4;
//     // printf("%d, %d",y,x);

//     // y = 3 + 2*(x = 7/2);
//     // printf("%d, %d",y,x);
    
//     // x = (int) 3.8 + 3.3;
//     // printf("%d",x);

//     // x = (2 + 3)*10.5;
//     // printf("%d",x);

//     // x = 3 / 5 * 22.0;
//     // printf("%d",x);

//     // x = 22.0 * 3 /5;
//     // printf("%d",x);

//     return 0;

// }

// <06장 C의 제어문: 루프>

// /* summing.c -- 대화식으로 입력한 정수들의 합을 구한다  */
// #include <stdio.h>
// int main(void)
// {
//     long num;
//     long sum = 0L;      /* sum을 0으로 초기화한다 */
//     int status;

//     printf("합을 구할 정수를 하나 입력하시오");
//     printf("(끝내려면 q): ");
//     status = scanf("%ld",&num);
//     while (status == 1)     /* ==는 "같다"는 뜻이다     */
//     {
//         sum = sum + num;
//         printf("다음 정수를 입력하시오(끝내려먼 q): ");
//         status = scanf("%ld",&num);
//     }
//     printf("입력된 정수들의 합은 %ld입니다.\n",sum);

//     return 0;
// }

// // when.c -- 루프는 언제 끝나는가
// #include <stdio.h>
// int main(void)
// {
//     int n =5;

//     while (n<7)
//     {
//         printf("n = %d\n",n);
//         n++;
//         printf("이제 n = %d\n",n);

//     }
//     printf("루프가 끝났다.\n");

//     return 0;
// }

// // cmpflt.c -- 부동소수점 수의 비교
// #include <math.h>
// #include <stdio.h>
// int main(void)
// {
//     const double ANSWER = 3.14159;
//     double response;

//     printf("원주율의 값이 얼마지?\n");
//     scanf("%lf",&response);
//     while (fabs(response - ANSWER)>0.0001)
//     {
//         printf("다시 말해 봐!\n");
//         scanf("%lf",&response);
//     }
//     printf("충분히 가깝다!\n");

//     return 0;
// }

// // truth.c -- 어떤 값들이 참인가?
// #include <stdio.h>
// int main(void)
// {
//     int n = 3;

//     while (n)
//         printf("%2d: 참\n", n--);
//     printf("%2d: 거짓\n",n);    
    
//     n = -3;
//     while (n)
//         printf("%2d: 참\n", n++);
//     printf("%2d: 거짓\n",n);

//     return 0;    
// }

// // trouble.c -- = 의 잘못된 사용
// // 무한 루프를 일으킨다  *****위   무한루프 주의   험*****
// #include <stdio.h>
// int main(void)
// {
//     long num;
//     long sum = 0L;
//     int status;

//     printf("합을 구할 정수를 하나 입력하시오");
//     printf("(끝내려면 q): ");
//     status = scanf("%ld",&num);
//     while (status = 1) // 대입연산자이기에 while 1이 되어버려 무한루프
//     {                   // status == 1로 써야한다
//         sum = sum + num;
//         printf("다음 정수를 입력하시오(끝내려면 q): ");
//         status = scanf("%ld",&num);
//     }
//     printf("입력된 정수들의 합은 %ld입니다.\n",sum);
    
//     return 0;
// }

/* while문으로
1. 1~10 출력하기
2. 10~1 출력하기
3. 0~100까지 짝수 출력하기
4. while문으로 별(*)찍기 정삼각형, 마름모(다이아몬드), 모래시계, 화살표, 크리스마스 트리 */

// // 1~10 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int a = 1;

//     while (a<11)
//     {
//         printf("%d\n",a);
//         a++;
//     }
    
// return 0;
// }

// // 10~1 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int a = 10;

//     while (a>0)
//     {
//         printf("%d\n",a);
//         a--;
//     }
    
// return 0;
// }

// // 0~100까지 짝수 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int a = 0;
//     while (a<50)
//     {
//         a++;
//         printf("%d\n",a*2);
//     }
// return 0;
// }

// //정삼각형 
// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int j = 4;
//     int num = 0;

//     while (i < 5){//i=0 1 2 3 4
//         num=0; j = 4;
//         while (j>=i)//j=0 01 012 0123 01234
//         {
//             printf(" ");
//            j--;
//         }
//         while (num<=i)//num=0 01 012 0123 01234
//         {
//             printf(" *");
//            num++;
//         }
//         printf("\n"); 
//         i++;
  
//     }
    
//     return 0;
// }

// // 마름모(다이아몬드)
// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int j = 4;
//     int k = 0;

//     int a = 0;
//     int b = 0;
//     int c = 0;

//     while (i < 5){
//         k=0; j = 4;
//         while (j>=i)
//         {
//             printf(" ");
//            j--;
//         }
//         while (k<=i)
//         {
//             printf(" *");
//            k++;
//         }
//         printf("\n"); 
//         i++;
  
//     }
//     while (a < 6){
//         c = 3; b = 0;
//         while (b<=a-1)
//         {
//             printf(" ");
//            b++;
//         }
//         while (c>=a-2)
//         {
//             printf(" *");
//            c--;
//         }
//         printf("\n"); 
//         a++;

//     }
//     return 0;
// }

// // 모래시계
// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int j = 4;
//     int k = 0;

//     int a = 0;
//     int b = 0;
//     int c = 0;

//      while (a < 5){
//         c = 4; b = 0;
//         while (b<=a-1)
//         {
//             printf(" ");
//            b++;
//         }
//         while (c>=a-2)
//         {
//             printf(" *");
//            c--;
//         }
//         printf("\n"); 
//         a++;

//     }
//     while (i < 5){
//         k = 0; j = 4;
//         while (j>=i+1)
//         {
//             printf(" ");
//            j--;
//         }

//         while (k<=i+2)
//         {
//             printf(" *");
//            k++;
//         }
//         printf("\n"); 
//         i++;
  
//     }
  
//     return 0;
// }

// // 화살표
// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int j = 4;
//     int k = 0;
//     int a = 0;
//     int b = 0;
//     while (i < 5){
//         k=0; j = 4;
//         while (j>=i)
//         {
//             printf(" ");
//            j--;
//         }
//         while (k<=i)
//         {
//             printf(" *");
//            k++;
//         }
//         printf("\n"); 
//         i++;
//     }
//     while (a<=3)
//     {   b=0;
//         printf("    ");
//         a++;
//         while (b<2)
//         {
//             printf(" *");
//             b++;
//         }    
//         printf("\n");
//     }
//      printf("\n"); 
// return 0;
// }




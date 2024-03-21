// // 포인터 익히기 계산문제 풀어보기

// #include <stdio.h>
// int main (void)
// {
//     int num1 = 15;
//     int num2 = 30;
//     int num3 = 45;

//     int* ptr1 = &num1;
//     int* ptr2 = &num2;
//     int* ptr3 = &num3;

//     ptr1 = ptr2;
//     ptr2 = ptr3;

//     *ptr3 *= 2;
//     *ptr1 += *ptr3;
//     *ptr2 *= 2;

//     printf("%d %d %d",num1, num2, num3);

//     return 0;
// }

// <10장 배열>

// /* day_mon1.c -- 각 달의 날짜 수를 출력한다 */
// #include <stdio.h>
// #define MONTHS 12

// int main(void)
// {
//     int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;

//     for (index = 0; index < MONTHS; index++)
//         printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);

//     return 0;
// }

// /* no_data.c -- 초기화시키지 않은 배열 */
// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     int no_data[SIZE];
//     int i;

//     printf("%2s%14s\n","i","no_data[i]");

//     for ( i = 0; i < SIZE; i++)
//     {
//         printf("%2d%14d\n",i,no_data[i]);
//     }
    
//     return 0;
// }

// /* some_data.c -- 일부분만 초기화된 배열 */
// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     int some_data[SIZE] = {1492, 1066};
//     int i;

//     printf("%2s%14s\n","i","some_data[i]");

//     for ( i = 0; i < SIZE; i++)
//     {
//         printf("%2d%14d\n",i,some_data[i]);
//     }
    
//     return 0;
// }

// /* day_mon2.c -- 컴파일러가 원소 개수를 카운트한다 */
// #include <stdio.h>
// int main(void)
// {
//     int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;

//     for (index = 0; index < sizeof days /sizeof days[0]; index++)
//         printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);

//     return 0;
// }


// /* 위의 문제를 활용하여 1번) 각 값을 *2 한다 2번) 합을 구한다 3번) 출력한다 */
// #include <stdio.h>
// int main(void)
// {
//     int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;
//     int sum = 0;

//     for (index = 0; index < sizeof days /sizeof days[0]; index++){
//         days[index] *= 2;
//         sum +=days[index];
//         printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);      
//     }
    
//     printf("총합은 %d\n",sum);
//     return 0;
// }


// /* 위의 문제를 풀때 혼자 또 어렵게 생각해서 배열을 하나 더 만든 후에
// 새로운 배열에 대입하여 원본값과 바뀐값을 모두 출력하려했다.
// 중간에 잘못된걸 알고 다시 풀었지만 일단 로직짠게 아까워서 성공은 시켜보았다 */
// #include <stdio.h>
// int main(void)
// {
//     int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;
//     int sum = 0;
//     int a;
//     int days2[] = {0};
//     int sum2 = 0;

//     for (index = 0; index < sizeof days /sizeof days[0]; index++){
//         sum +=days[index];
//         printf("%2d월: 날짜 수 %2d\n", index+1, days[index]); 
//     }
//     printf("총합은 %d\n",sum);
//     printf("\n");
//     for(a = 0; a < 12;a++){
//         days[a] *= 2;   
//         days2[a] = days[a];
//         sum2 +=days2[a];
//         printf("%2d월: 날짜 수 %2d\n", a+1, days2[a]);
//     }
//     printf("총합은 %d\n",sum2);

//     return 0;
// }
    
// /* 동준이오빠가 만든 포인터 문제 풀어보기 */
// #include <stdio.h>
// int main(void)
// {
//     int num1 = 15;
//     int num2 = 30;
//     int num3 = 45;
//     int num4 = 50;
//     int num5 = 100;

//     int* ptr1 = &num1;
//     int* ptr2 = &num2;
//     int* ptr3 = &num3;
//     int* ptr4 = &num4;
//     int* ptr5 = &num5;

//     ptr1 = ptr2;
//     ptr2 = ptr3;
//     ptr4 = ptr1;
//     ptr5 = ptr4;

//     *ptr3 *= 2;
//     *ptr1 += *ptr3;
//     *ptr2 *= 2;
//     *ptr4 += *ptr1;
//     *ptr5 *= 2;
    
//     printf("%d %d %d %d %d",num1,num2,num3,num4,num5);

//     return 0;
// }

// /* rain.c -- 강우량 데이터로부터 각 해의 총 강우령과
//              몇 년에 걸쳐 계산한 연평균 강우령,
//             각 달의 월평균 강우령을 구한다 */
// // 각 연도별로 가장 비가 많이 온 달을 찾고 강우량과 달을 출력하시오.
// #include <stdio.h>
// #define MONTH 12
// #define YEARS 5
// int main(void)
// {
//     // 2010년에서 2014년까지의 강우령 데이터의 초기화
//     const float rain[YEARS][MONTH] = 
//     {
//         {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//         {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//         {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//         {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//         {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}

//     };
//     int year, month, max_month=0;
//     float subtot, total;
//     float max_rain = 0;

//     printf(" 년도    강우량(인치)\n");
//     for (year = 0, total = 0; year <YEARS; year++)
//     {                           // 각 해에 대해 12달치 강우량을 더한다
//         max_rain = rain[year][0];
//         max_month=0;
//         for (month = 0, subtot = 0; month < MONTH; month++)
//         {
//             subtot += rain[year][month];
            
//             if (max_rain < rain[year][month] )
//             {
//                 max_rain = rain[year][month];
//                 max_month = month;
//             }
//         }
//         printf("%5d %15.1f\n",2010 + year,subtot);
//         printf(" 최대 강우량 %6d월  %5.1f\n",max_month+1,max_rain);
//         printf("\n");
        
//         total += subtot;        // 여러 해에 걸친 총 강우량을 구한다
//     }
   
//     printf("\n연평균 강우량은 %.1f인치입니다.\n",total/YEARS);
//     printf("월평균 강우량은 다음과 같습니다.\n\n");
//     printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  ");
//     printf("Nov  Dec\n");

//     for (month = 0; month < MONTH; month++)
//     {                           // 각 달에 대해 5년치 강우량을 더한다
//         for (year = 0, subtot = 0; year < YEARS; year++)
//             subtot += rain[year][month];
//         printf("%4.1f ",subtot/YEARS);
//     }
//     printf("\n");

//     return 0;
// }

// <반복문문제 다시 풀어보기 >
// <순서도 문제01>

// //예제01 1부터 10까지 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int i;

//     for(i = 1; i <= 10; i++)
//         printf("%d\n",i);

//     return 0;
// }

// //예제02 10부터 1까지 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
    
//     for(i = 10; i >= 1; i--)
//         printf("%d\n",i);

//     return 0;
// }

// //문제01 1부터 100까지의 합 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum;
    
//     for(i = 1,sum = 0; i <= 100; i++)
//     {
//        sum += i;
//     }
//     printf("1부터 100까지의 수의 합은: %d\n",sum);
    
//     return 0;
// }

// //문제02 1부터 100까지의 짝수의 합 구하기(1)
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum;
    
//     for(i = 2,sum = 0; i <= 100; i+=2)
//     {
//         sum += i;
//     }
//     printf("1부터 100까지의 수 중 짝수의 합은: %d\n",sum);
    
//     return 0;
// }

// //문제03 1부터 100까지의 짝수의 합 구하기(2)
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum;
    
//     for(i = 1,sum = 0; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
    
//     }
//     printf("1부터 100까지의 수 중 짝수의 합은: %d\n",sum);
    
//     return 0;
// }

// //문제04 1, -2, 3, -4, ..., 99, -100의 합 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum;
    
//     for(i = 1,sum = 0; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum -= i;
//         }
//         else
//         {
//             sum += i;
//         }
    
//     }
//     printf("1부터 100까지의 수 중 짝수는 빼고 홀수는 더한 값: %d\n",sum);
    
//     return 0;
// }

// //문제05 계승구하기(팩토리얼 구하기)
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int fact;
    
//     printf("정수를 입력해주세요: ");
//     scanf("%d",&n);

//     for(fact = 1; n > 0; n--)
//     {
//        fact *= n ;
//     }
//     printf("n! = %d",fact);
    
//     return 0;
// }

// //문제06 약수 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int n;
//     printf("정수를 입력해주세요: ");
//     scanf("%d",&n);
    
//     for (i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("약수는 %d\n",i);
//         }
//     }

//     return 0;
// }

// //문제07 공약수 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int n1;
//     int n2;
//     printf("정수를 입력해주세요: ");
//     scanf("%d",&n1);
//     printf("정수를 하나 더 입력해주세요: ");
//     scanf("%d",&n2);
    
//     for (i = 1; i <= n1; i++)
//     {
//         if (n1 % i == 0 && n2 % i ==0)
//         {
//             printf("공약수는 %d\n",i);
//         }
//     }

//     return 0;
// }

// <순서도 문제 02>

// //문제01 1부터 10까지의 수를 배열에 넣고 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int numlist[11] = {0};
//     int i;
//     int index;

//     for (i = 1,index = 0;i <= 10; i++)
//     {
//         numlist[index] = i;
//         printf("%d ",numlist[index]);
//         index++;
//     }
    
//     return 0;
// }

// // 문제02 10, 20, 30, ..., 100 저장하고, 거꾸로 출력하기
// #include <stdio.h>
// int main(void)
// {
//     int numlist[11] = {0};
//     int i;

//     for (i = 1;i <= 10; i++)
//     {
//         numlist[i-1] = i*10;
//         printf("%d ",numlist[i-1]);
//     }
//     printf("\n");
//     for (i = 9; i >= 0; i--)
//     {
//         printf("%d ",numlist[i]);
//     }

//     return 0;
// }

// //문제03 배열 요소 거꾸로 뒤집기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int a[11] = {1,2,3,4,5,6,7,8,9,10};
//     int temp[11] = {0};
//     for (i = 0; i <= 4; i++) // i = 0, 1, 2, 3, 4
//     {
//         temp[i] = a[9-i];  // 9, 8, 7, 6, 5
//         a[9-i] = a[i]; // 0, 1, 2, 3, 4, 
//         a[i] = temp[i];  // 9, 8, 7, 6, 5
//     }
//     for (i = 0; i <= 9; i++)
//     {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// //문제04 리스트 요소 중 최댓값 구하기
// #include <stdio.h>
// int main(void)
// {
//     int a[11]={91, 90, 78, 35, 65, 9, 97, 54, 62, 90};
//     int i;
//     int max;

//     for (i = 1; i <= 9; i++)
//     {
//         max = a[0];
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("최댓값: %d",max);

//     return 0;
// }

// //문제05 리스트 a 요소 리스트 b에 거꾸로 저장하기
// #include <stdio.h>
// int main(void)
// {
//     int a[11]={1,2,3,4,5,6,7,8,9,10};
//     int b[11]={0};
//     int i;

//     for (i = 0; i <= 9; i++)
//     {
//         b[i] = a[9-i];
//         printf("%d ",b[i]);
//     }

//     return 0;
// }

// //문제06 리스트 요소 왼쪽<- 으로 한 칸씩 원형으로 이동하기
// #include <stdio.h>
// int main(void)
// {
//     int a[11]={1,2,3,4,5,6,7,8,9,10};
//     int b[11]={0};
//     int i;
//     int num = a[0];

//     for (i = 0; i <= 9; i++)
//     {
//         b[i] = a[i+1];
//         a[i] = b[i];
//     }
//     a[9] = num;
//         for (i = 0; i <= 9; i++)
//     {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// // <반복문 심화문제>
// //문제01 최대공약수 구하기
// #include <stdio.h>
// int main(void)
// {
//     int n1;
//     int n2;
//     int i;
//     printf("정수를 입력하세요: ");
//     scanf("%d",&n1);
//     printf("정수를 하나 더 입력하세요: ");
//     scanf("%d",&n2);

//     for (i = 0; i <= n1; i++)
//     {
//         if(i % n1 == 0 && i % n2 == 0)
//         {

//         }
//     }


//     return 0;
// }


// <10장 배열과 포인터>

// // pnt_add.c -- 포인터 덧셈
// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     short dates[SIZE];
//     short* pti;
//     short index;
//     double bills[SIZE];
//     double* ptf;

//     pti = dates;
//     ptf = bills;
//     printf("%23s %15s\n","short","double");
//     for (index = 0; index < SIZE; index++)
//         printf("포인터 + %d: %10p %10p\n",index, pti + index, ptf + index);

//     return 0;        
// }

// /* day_mon3.c -- 포인터 표기를 사용한다 */
// #include <stdio.h>
// #define MONTH 12
// int main(void)
// {
//     int days[MONTH] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;

//     for (index = 0; index < MONTH; index++)
//         printf("%2d월: 날짜 수 %2d\n",index+1,*(days + index));
//                                         // days[index]와 같다
//     return 0;
// }

// // sum_arr1.c -- 배열의 원소들의 합을 구한다
// // %zd가 동작하지 않는다면 %u또는 %lu를 사용하라
// #include <stdio.h>
// #define SIZE 10
// int sum(int ar[], int n);
// int main(void)
// {
//     int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
//     long answer;

//     answer = sum(marbles, SIZE);
//     printf("구슬의 전체 개수는 %ld개입니다.\n",answer);
//     printf("marbles의 크기는 %zd바이트입니다.\n",sizeof marbles);

//     return 0;
// }

// int sum(int ar[], int n)
// {
//     int i;
//     int total = 0;

//     for ( i = 0; i < n; i++)
//         total += ar[i];
//     printf ("ar의 크기는 %zd바이트입니다.\n",sizeof ar);

//     return total;
// }

// /* sum_arr2.c -- 배열의 원소들의 합을 구한다 */
// #include <stdio.h>
// #define SIZE 10
// int sump(int * start, int * end);
// int main(void)
// {
//     int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
//     long answer;

//     answer = sump(marbles, marbles + SIZE);
//     printf("구슬의 전체 개수는 %ld개입니다.\n",answer);

//     return 0;

// }
// /* 포인터 계산을 사용한다 */
// int sump(int * start, int * end)
// {
//     int total = 0;

//     while (start < end)
//     {
//         total += *start;    // total에 값을 더한다
//         start++;            // 포인터를 증가시켜 다음 원소를 가리킨다
//     }
    
//     return total;
// }

// /* order.c -- 포인터 연산에서의 우선 순위 */
// #include <stdio.h>
// int data[2] = {100,200};
// int moredata[2] = {300,400};
// int main(void)
// {
//     int *p1, *p2, *p3;

//     p1 = p2 = data;
//     p3 = moredata;
//     printf("  *p1 = %d,  *p2 = %d,  *p3 = %d\n",*p1,*p2,*p3);
//     printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",*p1++,*++p2,(*p3)++);
//     printf("  *p1 = %d,  *p2 = %d,  *p3 = %d\n",*p1,*p2,*p3);

//     return 0;
// }

// // ptr_ops.c -- 포인터 연산
// #include <stdio.h>
// int main(void)
// {
//     int urn[5] = {100,200,300,400,500};
//     int *ptr1, *ptr2, *ptr3;

//     ptr1 = urn;             // 포인터에 주소를 대입한다
//     ptr2 = &urn[2];         // 포인터에 주소를 대입한다
//                     // 역참조된 포인터를 참조하여 포인터의 주소를 얻는다
//     printf("포인터의 값, 역참조된 포인터가 가리키는 값, 포인터의 주소:\n");
//     printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);

//     //포인터 덧셈
//     ptr3 = ptr1 + 4;
//     printf("\n포인터에 정수를 더한다:\n");
//     printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n",ptr1 + 4,*(ptr1 + 3));

//     ptr1++;     // 포인터를 증가시킨다
//     printf("\nptr1++을 수행 한 후의 값:\n");
//     printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1, *ptr2, &ptr2);

//     ptr2--;     // 포인터를 감소시킨다
//     printf("\nptr2--를 수행한 후의 값:\n");
//     printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",ptr2,*ptr2,&ptr2);

//     --ptr1;     // 최초의 값으로 복원한다
//     ++ptr2;     // 최초의 값으로 복원한다
//     printf("\n두 포인터를 최초의 값으로 복원한다:\n");
//     printf("ptr1 = $p, ptr2 = %p\n",ptr1,ptr2);
//                         // 포인터에서 다른 포인터를 뺀다
//     printf("\n포인터에서 다른 포인터를 뺀다:\n");
//     printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",ptr2,ptr1,ptr2-ptr1);
//                         // 포인터에서 정수를 뺀다
//     printf("\n포인터에서 정수를 뺀다:\n");
//     printf("ptr3 = %p, ptr3 - 2 = %p\n",ptr3,ptr3-2);

//     return 0;

// }   

// #include<stdio.h>
// int main()
// {
//     int urn[5] = {100, 200, 300, 400, 500};
//     int* ptr1; // &urn[0] ->&urn[1] ->&urn[0] 100
//     int* ptr2; // &urn[2] ->&urn[1] ->&urn[2] 300
//     int* ptr3; // &urn[0] + 4 -> &urn[4] 500

//     ptr1 = urn;
//     ptr2 = &urn[2];
//     ptr3 = ptr1 + 4;//1 &urn[4]

//     printf("ptr1= %d,ptr2= %d,ptr3= %d\n",*(ptr1),*(ptr2),*(ptr3));
    
//     //ptr1 + 4; // 2 계산 출력 500
//     printf("ptr1 + 4 = %d\n",*(ptr1 + 4));
//     //*(ptr1 +3);//3 계산 출력 &urn[3] 400
//     printf("ptr1 + 3 = %d\n",*(ptr1 + 3));
//     //ptr1++; //4 &urn[0] 100
//     printf("ptr1++ = %d\n",*(ptr1++));
//     //ptr2--; //5 &urn[2] 300
//     printf("ptr2-- = %d\n",*(ptr2--));
//     //--ptr1; //6 &urn[0] 100
//     printf("--ptr1 = %d\n",*(--ptr1));
//     //++ptr2; //7 &urn[2] 300
//     printf("++ptr2 = %d\n",*(++ptr2));
//     //ptr2 - ptr1;//8 계산 출력 2
//     printf("ptr2 - ptr1 = %d\n",ptr2 - ptr1);
//     //ptr3 - 2; //9 계산 출력 &urn[2] 300
//     printf("ptr3 - 2 = %d\n", *(ptr3 - 2));
//     //연산을 수행후 ptr1, ptr2, ptr3의 주소를 * (역참조) 했을 때의 값은?
//     printf("ptr1= %d,ptr2= %d,ptr3= %d\n",*ptr1,*ptr2,*ptr3);
//     return 0;
// }
 
//  /* zippo1.c -- zippo 정보 */
// #include <stdio.h>
// int main(void)
// {
//     int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
//     printf("    zippo = %p,     zippo + 1 = %p\n",
//                 zippo,          zippo + 1);
//     printf("    zippo[0] = %p, zippo[0] + 1 = %p\n",
//             zippo[0],      zippo[0] + 1);
//     printf("   *zippo = %p,    *zippo + 1 = %p\n",
//                *zippo,         *zippo + 1);
//     printf("zippo[0][0] = %d\n", zippo[0][0]);
//     printf("*zippo[0] = %d\n", *zippo[0]);
//     printf("  **zippo = %d\n", **zippo);
//     printf("      zippo[2][1] = %d\n", zippo[2][1]);
//     printf("*(*(zippo+2) + 1) = %d\n",*(*(zippo+2) + 1));

//     return 0;
// }

//  /* zippo2.c -- 포인터 변수를 사용하는 zippo 정보 */
// #include <stdio.h>
// int main(void)
// {
//     int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
//     int (*pz)[2];
//     pz = zippo;
//     printf("    pz = %p,     pz + 1 = %p\n",
//                 pz,          pz + 1);
//     printf("    pz[0] = %p,  pz[0] + 1 = %p\n",
//             pz[0],      pz[0] + 1);
//     printf("   *pz = %p,       *pz + 1 = %p\n",
//                *pz,         *pz + 1);
//     printf("pz[0][0] = %d\n", pz[0][0]);
//     printf("  *pz[0] = %d\n", *pz[0]);
//     printf("    **pz = %d\n", **pz);
//     printf("      pz[2][1] = %d\n", pz[2][1]);
//     printf("*(*(pz+2) + 1) = %d\n",*(*(pz+2) + 1));

//     return 0;
// }

// // 이중포인터 1도 이해 안되지만 풀어야하는 문제
// #include <stdio.h>
// int main(void)
// {
//     int num1;
//     int num2;
//     int* p;
//     int* q;
//     int* r;
//     int** pp;

//     num1 = 10;
//     num2 = 20;

//     p = &num1;
//     q = &num2;
//     r = &num1;

//     pp = &p;
//     *pp = q;
//     **pp = 1024;
//     pp = &r;
//     **pp = *p * 2;

//     printf("num1 = %d, num2 = %d",num1,num2);

//     return 0;
// }

// // array2d.c -- 2차원 배열을 처리하는 함수
// #include <stdio.h>
// #define ROWS 3
// #define COLS 4
// void sum_rows(int ar[][COLS], int rows);
// void sum_cols(int ar[][COLS], int );
// int sum2d(int(*ar)[COLS],int rows);
// int main(void)
// {
//     int junk[ROWS][COLS] = {
//         {2,4,6,8},
//         {3,5,7,9},
//         {12,10,8,6}
//     };

//     sum_rows(junk, ROWS);
//     sum_cols(junk, ROWS);
//     printf("모든 원소들의 합계 = %d\n",sum2d(junk,ROWS));

//     return 0;
// }

// void sum_rows(int ar[][COLS], int rows)
// {
//     int r;
//     int c;
//     int tot;

//     for ( r = 0; r < rows; r++)
//     {
//         tot = 0;
//         for ( c = 0; c < COLS; c++)
//             tot += ar[r][c];
//         printf("%d행: 소계 = %d\n",r,tot);
//     }
// }

// void sum_cols(int ar[][COLS], int rows)
// {
//     int r;
//     int c;
//     int tot;

//     for (c = 0; c < COLS; c++)
//     {
//         tot = 0;
//         for ( r = 0; r < rows; r++)
//             tot += ar[r][c];
//         printf("%d열: 소계 = %d\n",c,tot);
//     }
// }

// int sum2d(int(*ar)[COLS],int rows)
// {
//     int r;
//     int c;
//     int tot = 0;

//     for (r = 0; r < rows; r++)
//         for ( c = 0; c < COLS; c++)
//             tot += ar[r][c];

//     return tot;
// }

// // 배열 회전시키기 돌려돌려 배열판~
// #include <stdio.h>
// int main(void)
// {
//     int a[5][5] = {{1,2,3,4,5},
//                 {6,7,8,9,10},
//                 {11,12,13,14,15},
//                 {16,17,18,19,20},
//                 {21,22,23,24,25}};
//     int rot_a[5][5] = {{0}};
//     int i;
//     int j;

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 4; j > -1; j--){
//             rot_a[i][4-j] = a[j][i];
//         }
//     }
//     for (i = 0; i < 5 ; i++){
//         for(j = 0; j < 5; j++)
//         {
//             printf("%2d ",rot_a[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

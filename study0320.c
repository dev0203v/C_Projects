// /* leethead1.c */
// #include <stdio.h>
// #include <string.h>         // strlen()을 사용 하기 위해
// #define NAME "GIGATHINK, INC."
// #define ADDRESS "101 Megabuck Plaza"
// #define PLACE "Megapolis, CA 94904"
// #define WIDTH 40
// #define SPACE ' '

// void show_n_char(char ch, int num);

// int main(void)
// {
//     int spaces;

//     show_n_char('*',WIDTH);     // 기호 상수를 전달인자로 사용한다
//     putchar('\n');
//     show_n_char(SPACE, 12);     // 기호 상수를 전달인자로 사용한다
//     printf("%s\n",NAME);
//     spaces = (WIDTH - strlen(ADDRESS)) / 2;
//                                 // 몇개의 스페이스가 필요한지
//                                 // 프로그램이 계산하게 한다
//     show_n_char(SPACE, spaces); // 변수를 전달인자로 사용한다
//     printf("%s\n",ADDRESS);
//     show_n_char(SPACE, (WIDTH - strlen(PLACE)) /2 );
//                                 // 표현식을 전달인자로 사용한다
//     printf("%s\n",PLACE);
//     show_n_char('*',WIDTH);
//     putchar('\n');

//     return 0;
// }

// /* show_n_char() 함수의 정의 */
// void show_n_char(char ch, int num)
// {
//     int count;

//     for (count = 1; count <= num; count++)
//         putchar(ch);
// }

// /* lesser.c -- 둘 중에서 작은 것을 구한다 */
// #include <stdio.h>
// int imin(int, int);

// int main(void)
// {
//     int evil1, evil2;

//     printf("두 정수를 입력하시오(끝내려면 q):\n");
//     while (scanf("%d %d",&evil1,&evil2) == 2)
//     {
//         printf("(%d,%d)에서 작은 것은 %d\n",evil1,evil2,imin(evil1,evil2));
//         printf("두 정수를 입력하시오(끝내려면 q):\n");
//     }
//     printf("종료!\n");

//     return 0;
// }

// int imin(int n, int m)
// {
//     int min;

//     if(n<m)
//         min = n;
//     else
//         min = m;

//     return min;
// }

// /* recur.c -- 재귀를 설명한다 */
// #include <stdio.h>
// void up_and_down(int);

// int main(void)
// {
//     up_and_down(1);
//     return 0;
// }

// void up_and_down(int n)
// {
//     printf("Level %d: n의 메모리 주소 %p\n",n,&n);      // #1
//     if (n < 4)
//         up_and_down(n + 1);
//     printf("LEVEL %d: n의 메모리 주소 %p\n",n,&n);      // #2

// }

// // factor.c -- 계승을 계산하기 위해 루프와 재귀를 사용한다
// #include <stdio.h>
// long fact(int n);
// long rfact(int n);
// int main(void)
// {
//     int num;

//     printf("이 프로그램은 계승을 계산합니다.\n");
//     printf("0-12 범위의 한 값을 입력하시오(끝내려면 q):\n");
//     while (scanf("%d",&num) == 1)
//     {
//         if (num < 0)
//             printf("음수는 계승이 정의 되지 않습니다.\n");
//         else if (num > 12)
//             printf("13 미만을 입력하시오.\n");
//         else
//         {
//             printf("루프: %d! = %ld\n",num, fact(num));
//             printf("재귀: %d! = %ld\n",num, rfact(num));
//         }
//     }   printf("0-12 범위의 한 값을 입력하시오(끝내려면 q):\n");
//     printf("종료!\n");

//     return 0;
// }

// long fact(int n)
// {
//     long ans;

//     for (ans = 1; n > 1; n--)
//         ans *= n;

//     return ans;
// }

// long rfact(int n)
// {
//     long ans;

//     if (n > 0)
//         ans = n * rfact(n-1);
//     else
//         ans = 1;

//     return ans;
// }

// /* binary.c -- 정수를 2진수 표기로 출력한다 */
// #include <stdio.h>
// void to_binary(unsigned long n);

// int main(void)
// {
//     unsigned long number;
//     printf("정수 하나를 입력하시오(끝내려면 q):\n");
//     while (scanf("%lu",&number) == 1)
//     {
//         printf("2진수 표기: ");
//         to_binary(number);
//         putchar('\n');
//         printf("정수 하나를 입력하시오(끝내려면 q):\n");
//     }
//     printf("종료!\n");

//     return 0;
// }

// void to_binary(unsigned long n)
// {
//     int r;

//     r = n % 2;
//     if (n >= 2)
//         to_binary(n / 2);
//     putchar (r == 0? '0' : '1');

//     return;
// }

// /* loccheck.c -- 변수들이 어디에 저장되는지 확인한다 */
// #include <stdio.h>
// void mikado (int);
// int main(void)
// {
//     int pooh = 2, bah = 5;

//     printf("main()에 있는 pooh = %d, &pooh = %p\n",pooh,&pooh);
//     printf("main()에 있는 bah = %d, &bah = %p\n",bah,&bah);
//     mikado(pooh);

//     return 0;
// }

// void mikado(int bah)
// {
//     int pooh = 10;

//     printf("mikado()에 있는 pooh = %d, &pooh = %p\n",pooh,&pooh);
//     printf("mikado()에 있는 bah = %d, &bah = %p\n",bah,&bah);
// }

/* swap3.c -- 포인터를 사용하여 맞교환을 바르게 수행한다  */
#include <stdio.h>
void interchange(int* u, int* v);

int main(void)
{
    int x = 5, y = 10;

    printf("교환 전 x = %d, y = %d\n",x,y);
    interchange(&x,&y);
    printf("교환 후 x = %d, y = %d\n",x,y);


    return 0;
}

void interchange (int* u, int* v)
{
    int temp;

    temp = *u;
    *u = *v;
    *v = temp;
}

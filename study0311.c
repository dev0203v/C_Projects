// /* platinum.c -- 플래티넘 가치로 계산한 몸무게      */
// #include <stdio.h>
// int main(void)
// {
//     float weight;
//     float value;

//     printf("당신의 몸무게를 플래티넘 가치로 계산하면 얼마나 나갈까요?\n");
//     printf("어디 한번 계산해 봅시다.\n");
//     printf("몸무게를 파운드 단위로 입력하시오: ");

//     /* 사용자로 부터 입력을 받는다      */
//     scanf("%f",&weight);
//     /* 플래티넘 가격이 온스당 $1700라고 가정한다        */
//     /* 14.5833은 상향 파운드 단위를 금형 온스 단위로 변환한다   */
//     value = 1700.0 * weight * 14.5833;
//     printf("당신의 몸무게를 플래티넘 가치로 계산하면 $%.2f입니다.\n",value);
//     printf("당신의 몸값은 그 정도 가치가 나갑니다. 플래티넘 가격이 떨어지면,\n");
//     printf("가치를 유지하기 위해 식사량을 늘려아 합니다.\n");

//     return 0;
    
//  }

// /* print1.c -- printf()의 몇 가지 특성을 설명한다 */
// #include <stdio.h>
// int main(void)
// {
//     int ten = 10;
//     int two = 2;

//     printf("바르게 지정했을 때: ");
//     printf("%d에서 %d를 빼면 %d\n", ten, 2, ten - two);
//     printf("틀리게 지정했을 때: ");
//     printf("%d에서 %d를 빼면 %d\n",ten, 2, ten - two);    // 뒤의 두 전달인자를 빼먹었다

//     return 0;
// }

// /* bases.c -- 100을 10진수, 8진수, 16진수 표기로 출력한다   */
// #include <stdio.h>
// int main(void)
// {
//     int x = 100;

//     printf("10진수 = %d; 8진수 = %o; 16진수 = %x\n",x,x,x);
//     printf("10진수 = %d; 8진수 = %#o; 16진수 = %#x\n",x,x,x);

//     return 0;
// }

// /* toobig.c -- 저자가 사용한 시스템에서 int형의 최대 크기를 초과한다 */
// #include <stdio.h>
// int main(void)
// {
//     int i = 2147483647;
//     unsigned int j = 4294967295;

//     printf("%d %d %d\n",i,i+1,i+2);
//     printf("%u %u %u\n",j,j+1,j+2);

//     return 0;
// }

// /* charcode.c -- 문자에 대응하는 코드값을 표기한다.     */
// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     printf("키보드를 영문 모드로 놓고, 문자 하나를 입력하시오.\n");
//     scanf("%c",&ch);
//     printf("문자 %c에 대응하는 코드값은 %d이다.\n",ch,ch);

//     return 0;
// }

// /* showf_pt.c -- float형 값을 두 가지 표기로 출력한다   */
// #include <stdio.h>
// int main(void)
// {
//     float aboat = 32000.0;
//     double abet = 2.14e9;
//     long double dip = 5.32e-5;

//     printf("%f은 %e로 표현할 수 있다.\n",aboat,aboat);
//     // 다음 라인은 C99 이상의 표준을 따를 것을 요구한다
//     printf("그것은 16진수 2의 거듭제곱으로 %a이다.\n",aboat);
//     printf("%f은 %e로 표현할 수 있다.\n",abet,abet);
//     printf("%Lf은 %Le로 표현할 수 있다.\n",dip,dip);

//     return 0;
// }

// /* typesize.c -- 데이터형들의 크기를 출력한다   */
// #include <stdio.h>
// int main(void)
// {
// /* c99는 크기를 위해 %zd 포맷 지정자를 제공한다*/
//     printf("int형의 크기: %zd바이트\n",sizeof(int));
//     printf("char형의 크기: %zd바이트\n",sizeof(char));
//     printf("long형의 크기: %zd바이트\n",sizeof(long));
//     printf("long long형의 크기: %zd바이트\n",sizeof(long long));
//     printf("double형의 크기: %zd바이트\n",sizeof(double));
//     printf("long double형의 크기: %zd바이트\n",sizeof(long double));
//     return 0;
// }

// // 문제02
// #include <stdio.h>
// int main(void)
// {
//     int a = 0;
//     printf("ASKII 코드값을 입력하세요: ");
//     scanf("%d",&a);
//     printf("%c\n",a);
// }

// //문제03 다음과 같은 텍스트를 화면에 출력하는 프로그램을 작성하라.
// #include <stdio.h>
// void main()
// {
//     printf("갑작스런 소리에 깜짝 놀라 샐리는 외쳤다,\n\"호박대왕이다!\"");
// }

// /*문제04 부등소수점 수를 하나 읽고, 처음에는 소수점 표기로, 다음에는 지수 표기로,
// 그 다음에는 시스템이 지원한다면 p표기로 출력하는 프로그램을 작성하라.   */
// #include <stdio.h>
// int main(void)
// {
//     float a =0;
//     printf("부동소수점 수를 입력하시오: ");
//     scanf("%f",&a);
//     printf("고정소수점 표기: %f\n",a);
//     printf("지수 표기: %e\n",a);
//     printf("p 표기: %a\n",a);
// }

// 문제05
// #include <stdio.h>
// int main(void)
// {
//     int age = 0;
//     printf("나이를 입력하세요: ");
//     scanf("%d",&age);
//     printf("%f\n",age*3.156e7);
// }

// //문제06
// #include <stdio.h>
// int main(void)
// {
//     int water = 0;
//     printf("물의 양을 쿼트 단위로 입력하세요: ");
//     scanf("%d",&water);
//     printf("%e\n",950*water/3.1e-23);

// }

// //문제07
// #include <stdio.h>
// int main(void)
// {
//     int height = 0;
//     printf("키를 센티미터 단위로 입력하세요: ");
//     scanf("%d",&height);
//     printf("%f\n",height/2.54);
// }

//문제08

// //<04장 문자열과 입출력 포맷>

// //talkback.c -- 수다스럽지만, 정보를 주는 프로그램
// #include <stdio.h>
// #include <string.h>     // strlen() 포로토타입을 사용하기 위해
// #define DENSITY 62.4    // 신체밀도(입방피트당 파운드 수)
// int main(void)
// {
//     float weight, volume;
//     int size, letters;
//     char name[40];      //name 영문자로 40개를 넣을 수 있는 배열이다

//     printf("하이! 이름이 뭐예요?\n");
//     scanf("%s",name);
//     printf("%s 씨, 몸무게는 몇 파운드나 나가요?\n",name);
//     scanf("%f",&weight);
//     size = sizeof name;
//     letters = strlen(name);
//     volume = weight / DENSITY;
//     printf("옳거니, %s 씨의 몸은 %2.2f입방피트를 차지합니다.\n",name,volume);
//     printf("그리고 이름이 %d글자니까,\n",letters);
//     printf("저장하려면 %d바이트가 필요합니다.\n",size);

//     return 0;
// }

// /* praise2.c */
// // 사용하는 시스템이 %zd를 인식하지 못한다면
// // %u 또는 %lu를 사용한다

// #include <stdio.h>
// #include <string.h>     /* strlen() 프로토타입을 제공한다   */
// #define PRAISE "You are an extraordinary being."
// int main(void)
// {
//     char name[40];

//     printf("실례지만 성함이 어떻게 되시는지?\n");
//     scanf("%s",name);
//     printf("반갑습니다, %s 씨. %s\n",name,PRAISE);
//     printf("이름은 %zd글자인데 메모리 셀 %zd개를 차지합니다.\n",strlen(name),sizeof name);
//     printf("감탄문은 %zd글자인데",strlen(PRAISE));
//     printf("메모리 셀 %zd개를 차지합니다.\n",sizeof PRAISE);

//     return 0;
// }

// /* pizza.c -- 피자 집에서 쓰는 용어로 상수를 정의한다   */
// #include <stdio.h>
// #define PI 3.14159
// int main(void)
// {
//     float area, circum, radius;

//     printf("피자의 반지름이 얼마냐?\n");
//     scanf("%f",&radius);
//     area = PI * radius * radius;
//     circum = 2.0 * PI * radius;
//     printf("피자의 기본 매개변수는 다음과 같다:\n");
//     printf("circumference = %1.2f, area = %1.2f\n",circum,area);

//     return 0;
// }

// //  defines.c -- limits.h와 float.h에 정의되어 있는 기호 상수들을 사용한다
// #include <stdio.h>
// #include <limits.h>
// #include <float.h>
// int main(void)
// {
//     printf("이 시스템이 표현하는 수의 한계:\n");
//     printf("int형 최대값: %d\n",INT_MAX);
//     printf("long long형 최소값: %lld\n",LLONG_MIN);
//     printf("이 시스템에서 1바이트는 %d비트이다.\n",CHAR_BIT);
//     printf("double형 최대값: %e\n",DBL_MAX);
//     printf("float형 최소값: %e\n",FLT_MIN);
//     printf("float형 정밀도는 소수점 아래 %d자리까지\n",FLT_DIG);
//     printf("float형 epdilon = %e\n",FLT_EPSILON);

//     return 0;
// }

// /* width.c -- 필드 너비 */
// #include <stdio.h>
// #define PAGES 959
// int main(void)
// {
//     printf("*%d*\n",PAGES);
//     printf("*%2d*\n",PAGES);
//     printf("*%10d*\n",PAGES);
//     printf("*%-10d*\n",PAGES);

//     return 0;
// }

// // floats.c -- 몇 가지 부등소수점형 포맷 지정자의 사용
// #include <stdio.h>

// int main(void)
// {
//     const double RENT = 3852.99;    // const로 지정한 상수
//     printf("*%f*\n",RENT);
//     printf("*%e*\n",RENT);
//     printf("*%4.2f*\n",RENT);
//     printf("*%3.1f*\n",RENT);
//     printf("*%10.3f*\n",RENT);
//     printf("*%10.3E*\n",RENT);
//     printf("*%+4.2f*\n",RENT);
//     printf("*%010.2f*\n",RENT);

//     return 0;
// }

// /* flags.c -- 몇 가지 포맷 변경자 플래그를 보여 준다 */
// #include <stdio.h>
// int main(void)
// {
//     printf("%x %X %#x\n",31,31,31);
//     printf("**%d** d**% d**\n",42,42,-42);
//     printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);

//     return 0;
// }

// /* stringf.c -- 문자열 포맷 */
// #include <stdio.h>
// #define BLURB "Authentic imitatiom!"
// int main(void)
// {
//     printf("[%2s]\n",BLURB);
//     printf("[%24s]\n",BLURB);
//     printf("[%24.5s]\n",BLURB);
//     printf("[%-24.5s]\n",BLURB);

//     return 0;
// }

// /* longstring.c -- 긴 문자열의 출력 */
// #include <stdio.h>
// int main(void)
// {
//     printf("이것은 긴 문자열을 출력하는 ");
//     printf("첫 번째 방법이다.\n");
//     printf("이것은 긴 문자열을 출력하는 \ 두 번째 방법이다.\n");
//     printf("이것은 긴 문자열을 출력하는 ""가장 새로운 방법이다.\n");    /* ANSI C */

//     return 0;
// }

// /* varwid.c -- 필더 너비가 가변적이다 */
// #include <stdio.h>
// int main(void)
// {
//     unsigned width, precision;
//     int number = 256;
//     double weight = 242.5;

//     printf("필드 너비를 입력하시오:\n");
//     scanf("%d",&width);
//     printf("Number:%*d:\n",width,number);
//     printf("필드 너비와 정밀도를 함께 입력하시오:\n");
//     scanf("%d %d", &width, &precision);
//     printf("Weight = %*.*f\n",width,precision,weight);
//     printf("종료!\n");

//     return 0;
// }

// <04장 복습 문제>

// // 문제04. 다음과 같은 프로그램에서 에러를 찾아라.
// #include <stdio.h>
// #define B "거짓말"
// #define X 10
// main(int)
// {
//     int age;
//     int xp;
//     char name[40];

//     printf("이름이 뭡니까?");
//     scanf("%s",&name);
//     printf("좋아요, %s씨, 나이는 얼마죠?\n",name);
//     scanf("%d",&age);
//     xp = age + X;
//     printf("%s! 최소한 %d세는 되어 보이는데.\n",B,xp);

//     return 0;
// }




// // 문제05. 다음과 같이 출력하기 위해 BOOK,cost,percent를 사용하는 printf()문을 작성하라.
// #include <stdio.h>
// #define BOOK "전장과 평화"
// int main(void)
// {
//     float cost = 12.99;
//     float percent = 80.0;

//     printf("신간 \"%s\"를 $%0.2f에 드립니다.\n그것은 정가의 %0.0f%% 가격입니다.",BOOK,cost,percent);

//     return 0;
// }


// // 문제09. 다음과 같은 각 입력 라인에 대해, 그것을 읽는 scanf()문을 작성하라.
// #include <stdio.h>
// int main(void)
// {
//     int a = 0;
//     scanf("%d",&a);
//     printf("%d",a);

//     return 0;
// }


//<04장 프로그래밍 연습 문제>

// //문제01. 먼저 이름을 요청하고, 이어서 다시 성을 요청한다. 그러고 나서 성, 이름순으로 출력하는 프로그램을 작성하라.
// #include <stdio.h>
// int main(void)
// {
//     char name[40];
//     char lastname[40];

//     printf("이름을 입력하시오: ");
//     scanf("%s",&name);
//     printf("성을 입력하시오: ");
//     scanf("%s",&lastname);
//     printf("\n네, 안녕하세요 %s %s씨\n",lastname,name);

//     return 0;
// }

// //문제02.이름을 요청하고 그 이름을 다음과 같은 포맷으로 출력하는 프로그램을 작성하라.
// #include <stdio.h>
// int main(void)
// {
//     char name[40];

//     printf("이름을 입력하시오: ");
//     scanf("%s",&name);
//     printf("\"%20s\"\n",name);
//     printf("\"%-20s\"\n",name);

//     return 0;
// }

// /* 문제03. 하나의 부동소수점 수를 읽고, 그것을 먼저 소수점 표기로 출력하고,
// 이어서 지수 표기로 출력하는 프로그램을 작성하라. 출력 포맷은 다음과 같아야한다.*/
// #include <stdio.h>
// int main(void)
// {

// }


// <05장 연산자, 표현식, 문장>

// /* shoes1.c -- 사이즈 단위를 인치 단위로 변환한다 */
// #include <stdio.h>
// #define ADJUST 7.31         // 기호 상수의 한 종류
// int main(void)
// {
//     const double SCALE=0.333;   // 기호 상수의 다른 종류
//     double shoe, foot;

//     shoe = 9.0;
//     foot = SCALE * shoe + ADJUST;
//     printf("신발 사이즈(남자용)  발길이\n");
//     printf("%10.1f %15.2f 인치\n",shoe,foot);

//     return 0;
// }

// /* shoes2.c -- 여러 개의 신발 사이즈를 인치 단위로 계산한다 */
// #include <stdio.h>
// #define ADJUST 7.31     // 기호 상수의 다른 종류
// int main(void)
// {
//     const double SCALE = 0.333;    // 기호 상수의 다른 종류
//     double shoe, foot;

//     printf("신발사이즈(남자용)    발길이\n");
//     shoe = 3.0;
//     while (shoe<18.5)   /* while 루프의 시작*/
//     {                   /* 블록의 시작      */
//         foot = SCALE * shoe + ADJUST;
//         printf("%10.1f %15.2f 인치\n",shoe,foot);
//         shoe = shoe + 1.0;
//     }                   /* 블록의 끝        */
//     printf("그 신발이 발에 맞는다면, 그것을 신으세요.\n");

//     return 0;
    
// }

// /* wheat.c -- 지수적 증가 */
// #include <stdio.h>
// #define SQUARES 64      /* 체스판의 네모칸 수       */
// int main(void)
// {
//     const double CROP=2E16;     // 밀 수확에서의 세계 밀 생산량
//     double current, total;
//     int count = 1;

//     printf("네모칸     추가       누계     ");
//     printf("세계 수확량과의\n");
//     printf("번  호    낱알 수    낱알 수    ");
//     printf("상대 비율\n");
//     total = current = 1.0;      /* 낱알 하나로부터 시작한다 */
//     printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
//     while (count < SQUARES)
//     {
//         count = count + 1;
//         current = 2.0 * current;
//         /* 다음 네모칸은 2배의 낱알로 채운다        */
//         total = total + current;    /* 누계를 갱신한다  */
//         printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
//     }
//     printf("이제 끝이다.\n");

//     return 0;
// }

// /* post__pre.c -- 후외 모드와 전위 모드 */
// #include <stdio.h>
// int main(void)
// {
//     int a = 1, b = 1;
//     int a_post, pre_b;

//     a_post = a++;
//     pre_b = ++b;
//     printf("a  a_post  b  pre_b \n");
//     printf("%1d %5d %5d %5d\n",a,a_post,b,pre_b);

//     return 0;
// }

// /* bottles.c -- 카운트 다운 */
// #include <stdio.h>
// #define MAX 100
// int main(void)
// {
//     int count = MAX + 1;

//     while (--count > 0)
//     {
//         printf("%d 병의 샘물이 냉장고에 있었네,""%d 병이!\n",count,count);
//         printf("그 중 한 병을 꺼내 마셨지,\n");
//         printf("%d 병의 샘물이 아직 남았네!\n\n",count - 1);
//     }
//     return 0;
// }

// // <연습문제>

// #include <stdio.h>
// int main(void)
// {
//     int num1 = 0;
//     int num2 = 10;
//     int result1 = num1++ + num2;
//     int result2 = ++num1 + num2++;
//     int result3 = num1-- + num1-- - --num2;
//     int result4 = num2++ * num1++ - --num2 + num1;

//     printf("%d %d %d %d %d %d",result1,result2,result3,result4,num1,num2);

//     return 0;
// }
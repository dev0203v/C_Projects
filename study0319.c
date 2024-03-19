// <08장 문자 입출력과 입력 유효성 검사>

// /* echo.c -- 입력을 반복한다 */
// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '#')
//         putchar(ch);

//     return 0;    
// }

// /* echo_eof.c -- 파일의 끝까지 입력을 에코한다 */ // ctrl + d 해야 종료됨
// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != EOF)
//         putchar(ch);

//     return 0;    
// }

// /* gouess.c -- 수 맞추기 프로그램( 수정완료~ )*/
// #include <stdio.h>
// int main(void)
// {
//     int guess = 1;
//     char response;

//     printf("1에서 100까지 범위에 있는 한 정수를 생각하시오.\n");
//     printf("내가 추측하지요. 내 추측이 맞으면 y로 응답하고,\n");
//     printf("내 추측이 틀리면 n으로 응답하시오.\n");
//     printf("당신이 생각한 수가 %d입니까?\n",guess);
//     while ((response = getchar()) != 'y')        /* 응답을 읽는다 */
//     {   
//         if (response == 'n')
//             printf("그러면 %d입니까?\n",++guess);
//         else
//             printf("미한하지만, y 또는 n으로만 응답해 주시오.\n");
        
//         while (getchar( ) != '\n') 
//             continue;       /* 입력 라인의 나머지를 건니뛴다 */
//     }
//     printf("그것 봐요, 내가 맞출 수 있다고 했잖아요!\n");

//     return 0;
// }

// /* showchar2.c -- 지정한 행 수와 열 수만큼 문자들을 출력한다  */
// #include <stdio.h>
// void display(char cr, int lines, int width);
// int main(void)
// {
//     int ch;             // 출력할 문자
//     int rows, cols;     // 행 수와 열 수
//     printf("문자 하나와 두 개의 정수를 입력하시오.\n");
//     while ((ch=getchar()) != '\n')
//     {
//         if (scanf("%d %d",&rows, &cols) != 2)
//             break;
//         display (ch,rows,cols);
//         while (getchar() != '\n' )
//             continue;
//         printf("또 다른 문자와 두 개의 정수를 입력하시오.\n");
//         printf("끝내려면 그냥 Enter 키를 누르시오.\n");
//     }
//     printf("안녕!\n");
    
//     return 0;
// }
// void display (char cr, int lines, int width)
// {
//     int row,col;

//     for (row = 1; row <= lines;row++)
//     {
//         for (col = 1; col <= width; col++)
//             putchar(cr);
//         putchar('\n');      // 라인을 끝내고 새 라인을 시작한다
//     }
// }

// /* checking.c -- 입력의 유효성을 검사한다 */
// #include <stdio.h>
// #include <stdbool.h>
// // 입력이 정수인지 검사한다
// long get_long(void);
// // 범위 한계가 유효한지 검사한다
// bool bad_limits(long begin, long end, long row, long high);
// // a에서 b까지의 범위에 있는
// // 정수들의 제곱의 합을 계산한다
// double sum_squares(long a, long b);
// int main(void)
// {
//     const long MIN = -10000000L;    // 범위의 하한
//     const long MAX = +10000000L;    // 범위의 상한
//     long start;                     // 범위의 시작
//     long stop;                      // 범위의 마감
//     double answer;

//     printf("이 프로그램은 어떤 범위에 있는 정수들의 제곱의 합을 계산한다.\n"
//     "범위의 시작값은 -10000000보다 작을수 없다.\n"
//     "범위의 마감값은 +10000000보다 클 수 없다.\n"
//     "시작값과 마감값을 입력하시오.\n"
//     "(끝내려면 두 값을 모두 0으로 입력):\b범위의 시작값: ");
//     start = get_long();
//     printf("범위의 마감값: ");
//     stop = get_long();
//     while (start != 0 || stop != 0)
//     {
//         if (bad_limits(start, stop, MIN, MAX))
//             printf("범위를 다시 지정하시오.\n");
//         else
//         {
//             answer = sum_squares(start, stop);
//             printf("정수들의 제곱의 합");
//             printf("%ld에서 %ld까지의 범위에 있는 장수들의 제곱의 합은 %g입니다.\n",start,stop,answer);
//         }
//         printf("시작값과 마감값을 입력하시오.\n"
//             "(끝내려면 두 값을 모두 0으로 입력):\n");
//         printf("범위의 시작값: ");
//         start = get_long();
//         printf("범위의 마감값: ");
//         stop = get_long();
//     }
//     printf("종료!\n");

//     return 0;
    
// }

// long get_long(void)
// {
//     long input;
//     char ch;

//     while (scanf("%d",&input) != 1)
//     {
//         while ((ch = getchar()) != '\n')
//             putchar(ch);    // 잘못된 입력을 폐기한다
//         printf(": 정수가 아닙니다.\n25,-178,3과 같은");
//         printf("정수값을 입력하시오: ");
        
//     }
    
//     return input;
// }

// double sum_squares(long a, long b)
// {
//     double total = 0;
//     long i;

//     for ( i = a; i <= b; i++)
//         total += (double)i * (double)i;

//     return total;
// }

// bool bad_limits(long begin, long end, long low, long high)
// {
//     bool not_good = false;

//     if (begin > end)
//     {
//         printf("시작값은 마감값보다 크면 안 됩니다.\n");
//         not_good = true;
//     }
//     if (begin<low||end<low)
//     {
//         printf("시작값과 마감값은 %d보다 크거나 같아야 합니다.\n",low);
//         not_good =true;
//     }
//     if (begin>high || end>high)
//     {
//         printf("시작값과 마감값은 %ld보다 작거나 같아야 합니다.\n",high);
//         not_good = true;
//     }

//     return not_good;
// }

/* menuette.c -- 메뉴 테크닉 */
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
    int choice;
    void count(void);

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':   printf("쌀 때 사서 비쌀 때 파시오.\n");
                    break;
        case 'b':   putchar('\a');
                    break;            
        case 'c':   count();
                    break;
        default:    printf("프로그램 에러!\n");
                    break;
        }
    }
    printf("안녕!\n");

    return 0;
}
void count(void)
{
    int n, i;
    
    printf("몇까지 카운트할까요? 정수 하나를 입력하시오:\n");
    n = get_int();
    for (i=1; i <= n; i++)
        printf("%d\n",i);
    while ( getchar() != '\n')
        continue;
}

// char get_choice(void)
// {
//     int ch;

//     printf("a,b,c,q 중에서 하나를 선택하시오:\n");
//     printf("a. 조언         b. 경고\n");
//     printf("c. 카운트       q. 종료\n");
//     ch = get_first();
//     while ((ch < 'a' || ch > 'c') && ch != 'q')
//     {
//         printf("a,b,c,q 중에서 하나를 선택해야 합니다.\n");
//         ch = get_first();
//     }
    
//     return ch;
// }

// char get_first(void)
// {
//     int ch;

//     ch = getchar();
//     while (getchar() != '\n')
//         continue;

//     return ch;
// }
// int get_int(void)
// {
//     int input;
//     char ch;

//     while (scanf("%d", &input) != 1)
//     {
//         while ((ch = getchar()) != '\n' )
//             putchar(ch);
//         printf(": 정수가 아닙니다.\n25,-178, 3과 같은");
//         printf("정수값을 입력하시오: ");
//     }
    
//     return input;
// }

// //자판기 만들기 ver.1

// #include <stdio.h>
// int main(void)
// {
//     int money = 0;
//     int order = 0;
//     int num = 0;
//     printf("돈을 넣어 주세요: ");
//     scanf("%d",&money);

//     if (money < 900){
//         printf("돈이 부족합니다.");
//     }
//     else{
//         char ch;
        
//         printf("\n1) 콜라 1200\n");
//         printf("2) 우주맛 콜라 1900\n");
//         printf("3) 제로콜라 1200\n");
//         printf("4) 스프라이트 1100\n");
//         printf("5) 환타 900\n");
//         printf("6) 닥터페퍼 1100\n");
//         printf("7) 몬스터 1800\n");
//         printf("8) 파워에이드 1900\n");
//         printf("9) 네스티 1600\n");
//         printf("a) 글라소 비타민 워터 2100\n");
//         printf("b) 미닛메이드 1700\n");
//         printf("c) 조지아 커피 900\n");
//         printf("d) 암바사 900\n");
//         printf("e) 마테차 1700\n");
//         printf("S) 계산 하기\n");
//         printf("X) 종료하기\n");
//         printf("원하는 음료를 선택하세요: ");

// /* 계산 하기를 누르기 전까지는 선택한 음료는 저장이 되고
// 총 금액의 합산을 변수에 저장 하여 입력한 돈과 비교 하여 계산을 한다.
// 입력한 돈이 주문의 합보다 적으로 돈이 부족 하다고 하면서 종료 시킨다. */




//         while ((ch = getchar()) != 'X' || (ch = getchar()) != 'x')
//         {
//             switch (ch)
//             {
//                 case '1':
//                     printf("콜라 1200\n");
//                     order += 1200;
//                      break;
//                 case '2': 
//                     printf("우주맛 콜라 1900\n");
//                     order += 1900;
//                     break;
//                 case '3': 
//                     printf("제로콜라 1200\n");
//                     order += 1200;
//                     break;
//                 case '4': 
//                     printf("스프라이트 1100\n");
//                     order += 1100;
//                     break;
//                 case '5': 
//                     printf("환타 900\n");
//                     order += 900;
//                     break;
//                 case '6': 
//                     printf("닥터페퍼 1100\n");
//                     order += 1100;
//                     break;
//                 case '7': 
//                     printf("몬스터 1800\n");
//                     order += 1800;
//                     break;
//                 case '8': 
//                     printf("파워에이드 1900\n");
//                     order += 1900;
//                     break;
//                 case '9': 
//                     printf("네스티 1600\n");
//                     order += 1600;
//                     break;
//                 case 'a': 
//                     printf("글라소 비타민 워터 2100\n");
//                     order += 2100;
//                     break;
//                 case 'b': 
//                      printf("미닛메이드 1700\n");
//                     order += 1700;
//                     break;
//                 case 'c': 
//                     printf("조지아 커피 900\n");
//                     order += 900;
//                     break;
//                 case 'd': 
//                     printf("암바사 900\n");
//                     order += 900;
//                     break;
//                 case 'e': 
//                     printf("마테차 1700\n");
//                     order += 1700;
//                     break;    
//                 case 's':
//                 case 'S': 
//                     if (money<order){
//                         printf("\n돈이 부족합니다\n");
//                         printf("%d원 반환합니다\n",money);
//                         break;
//                     }
//                     else {
//                         printf("\n주문이 완료되었습니다\n");
//                         printf("총 주문금액 %d원\n",order);
//                         printf("거스름돈 %d원 반환합니다\n",money-order);
//                         break;
//                     }
//                     break;
//                 default:
//                     break;
//             }
//         }
//     }
//     return 0;
// }


// // 자판기 만들기ver.2

// #include <stdio.h>
// int main(void)
// {
//     int money = 0;
//     int order = 0;
//     int num = 0;
//     printf("돈을 넣어 주세요: ");
//     scanf("%d",&money);

//     if (money < 900){
//         printf("돈이 부족합니다.");
//     }
//     else{
//         char ch;
        
//         printf("\n1) 콜라 1200\n");
//         printf("2) 우주맛 콜라 1900\n");
//         printf("3) 제로콜라 1200\n");
//         printf("4) 스프라이트 1100\n");
//         printf("5) 환타 900\n");
//         printf("6) 닥터페퍼 1100\n");
//         printf("7) 몬스터 1800\n");
//         printf("8) 파워에이드 1900\n");
//         printf("9) 네스티 1600\n");
//         printf("10) 글라소 비타민 워터 2100\n");
//         printf("11) 미닛메이드 1700\n");
//         printf("12) 조지아 커피 900\n");
//         printf("13) 암바사 900\n");
//         printf("14) 마테차 1700\n");
//         printf("S) 계산 하기\n");
//         printf("X) 종료하기\n");
//         printf("원하는 음료를 선택하세요: ");

//         while ((ch = getchar()) != 'X')
//         {
//             switch (ch = getchar())
//             {
//                 case '1':
//                     switch(ch = getchar())
//                     {
//                         case '\n':
//                             printf("콜라 1200\n");
//                             order += 1200;
//                             break;
//                         case '0': 
//                             printf("글라소 비타민 워터 2100\n");
//                             order += 2100;
//                             break;
//                         case '1': 
//                             printf("미닛메이드 1700\n");
//                             order += 1700;
//                             break;
//                         case '2': 
//                             printf("조지아 커피 900\n");
//                             order += 900;
//                             break;
//                         case '3': 
//                             printf("암바사 900\n");
//                             order += 900;
//                             break;
//                         case '4': 
//                             printf("마테차 1700\n");
//                             order += 1700;
//                             break;
//                         default:
//                             break;
//                     }
//                      break;
//                 case '2': 
//                     printf("우주맛 콜라 1900\n");
//                     order += 1900;
//                     break;
//                 case '3': 
//                     printf("제로콜라 1200\n");
//                     order += 1200;
//                     break;
//                 case '4': 
//                     printf("스프라이트 1100\n");
//                     order += 1100;
//                     break;
//                 case '5': 
//                     printf("환타 900\n");
//                     order += 900;
//                     break;
//                 case '6': 
//                     printf("닥터페퍼 1100\n");
//                     order += 1100;
//                     break;
//                 case '7': 
//                     printf("몬스터 1800\n");
//                     order += 1800;
//                     break;
//                 case '8': 
//                     printf("파워에이드 1900\n");
//                     order += 1900;
//                     break;
//                 case '9': 
//                     printf("네스티 1600\n");
//                     order += 1600;
//                     break;
//                 case 's':
//                 case 'S': 
//                     if (money<order){
//                         printf("\n돈이 부족합니다\n");
//                         printf("%d원 반환합니다\n",money);
//                         break;
//                     }
//                     else if(money-order){
//                         printf("\n주문이 완료되었습니다\n");
//                         printf("총 주문금액 %d원\n",order);
//                         printf("거스름돈 %d원 반환합니다\n",money-order);
//                         break;
//                     }
//                     break;
//                 default:
//                     break;
//             }
            
//                 if (ch != '\n')
//                     ch = getchar();
//         }
    
//     }
    
//     return 0;
// }

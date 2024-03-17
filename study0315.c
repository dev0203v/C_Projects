// // <07장 C의 제어문 : 분기와 점프>

// // chcount.c -- 논리 연산자 AND를 사용한다
// #include <stdio.h>
// #define PERIOD '.'
// int main(void)
// {
//     int ch;
//     int charcount = 0;

//     while ((ch = getchar()) != PERIOD)
//     {
//         if (ch != '"' && ch != '\'')
//             charcount++;
//     }
//     printf ("따옴표는 빼고, 문자 %d개가 들어 있습니다.\n",charcount);

//     return 0;
// }

// // wordcnt.c -- 문자 수, 단어 수, 라인 수를 카운트한다
// #include <stdio.h>
// #include <ctype.h>      // isspace()를 사용하기 위해
// #include <stdbool.h>    // bool, truw, false를 사용하기 위해
// #define STOP '|'
// int main(void)
// {
//     char c;                 // 현재 읽은 문자
//     char prev;              // 바로 전에 읽은 문자
//     long n_chars = 0L;      // 문자 수
//     int n_lines = 0;        // 라인 수
//     int n_words = 0;        // 단어 수
//     int p_lines = 0;        // 불완전 라인 수
//     bool inword = false;    // c가 여전히 한 단어 안에 속해 있으면 true

//     printf("분석할 영문 텍스트를 입력하시오(끝내려면 |):\n");
//     prev = '\n';        // 완전 라인을 식별하는 데 사용한다
//     while ((c = getchar()) != STOP)
//     {
//         n_chars++;
//         if ( c == '\n')
//             n_lines++;      // 문자를 카운트한다
//         if (!isspace(c) && !inword)
//         {
//             inword = true;   
//             n_words++;      // 라인을 카운트한다
//         }
//         if (isspace(c) && inword)
//         {
//             inword = false;     // 단어의 끝에 도달했다
//          prev = c;              // 문자의 값을 보관한다
//         }
//         if (prev != '\n')
//             p_lines = 1;
//         printf("문자 수 = %ld,단어 수 = %d, 라인 수 = %d, ",n_chars,n_words,n_lines);
//         printf("불완전 라인 수 = %d\n",p_lines);

//         return 0;
//     }
// }

// /* paint.c -- 조건 연산자를 사용한다    */
// #include <stdio.h>
// #define COVERAGE 350
// int main(void)
// {
//     int sq_feet;
//     int cans;

//     printf("페인트로 칠할 면적을 평방피트 단위로 입력하시오:\n");
//     while (scanf("%d", &sq_feet) == 1)
//     {
//         cans = sq_feet / COVERAGE;
//         cans += (sq_feet % COVERAGE == 0) ? 0: 1;
//         printf("페인트 %d통(%s)을 구입해야 한다.\n",cans,cans == 1 ? "can":"cans");
//         printf("다음 값을 입력하시오 (끝내려면 q):\n");
//     }
//     return 0;
// }

// /* skippart.c -- continue를 사용하여 루프의 일부를 건너뛴다 */
// #include <stdio.h>
// int main(void)
// {
//     const float MIN = 0.0f;
//     const float MAX = 100.0f;

//     float score;
//     float total = 0.0f;
//     int n =0;
//     float min = MAX;
//     float max = MIN;

//     printf("첫 번째 스코어를 입력하시오 (끝내려면 q): ");
//     while (scanf("%f",&score) == 1 )
//     {
//         if (score < MIN || score > MAX)
//         {
//             printf("%0.1f: 우효한 값이 아닙니다. 다시 입력하시오: ",score);
//             continue; 
//         }
//     }
//     printf("%0.1f: 유효한 값입니다.\n",score);
//     min = (score < min) ? score: min;
//     max = (score > max) ? score: max;
//     total += score;
//     n++;
//     printf("다음 스코어를 입력하시오(끝내려면 q): ");
    
//         if (n>0)
//         {
//         printf("스코어 %d개의 평균은 %0.1f입니다.\n",n,total/n);
//         printf("최저 = %0.1f, 최고 = %0.1f\n",min,max);
//         }
//         else
//             printf("유효한 값을 전혀 입력하지 않았습니다.\n");
// return 0;    
// }       

// /* break.c -- 루프를 벗어나기 위해 break를 사용한다 */ 
// #include <stdio.h>
// int main(void)
// {
//     float length, width;

//     printf("사각형의 길이를 입력하시오:\n");
//     while (scanf("%f",&length) == 1 )
//     {
//         printf("길이 = %0.2f:\n",length);
//         printf("너비를 입력하시오:\n");
//         if (scanf("%f",&width) != 1 )
//             break;
//         printf("너비 = %0.2f:\n",width);
//         printf("넓이 = %0.2f:\n",length*width);
//         printf("사각형의 길이를 입력하시오:\n");
//     }
//     printf("종료!\n");

//     return 0;
// }

// /* animals.c -- swich문을 사용한다  */
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     char ch;

//     printf("알파벳 글자를 입력하시오. ");
//     printf("그러면 내가\n그 글자로 시작하는 동물 이름을 하나 대겠습니다.\n");
//     printf("글자를 하나 입력하시오 (끝내려면 #):\n");
//     while ((ch = getchar()) != '#')
//     {
//         if('\n' == ch)
//             continue;
    
//         if(islower(ch))
//         { 
//             switch (ch)
//             {
//                 case 'a':
//                     printf("argali, 아시아의 야생 양\n");
//                     break;
//                 case 'b':
//                     printf("babirusa, 말레이 반도의 야생 돼지\n");
//                     break;
//                 case 'c':
//                     printf("coati, 미국 너구리\n");
//                     break;
//                 case 'd':
//                     printf("desman, 물에사는, 두더지 비슷한 동물\n");
//                     break;
//                 case 'e':
//                     printf("echidna, 바늘두더지\n");
//                     break;
//                 case 'f':
//                     printf("fisher, 갈색을 띤 담비\n");
//                     break;
//                 default:
//                     printf("에이, 너무 어렵다!\n");
//             }
//         }
//         else
//             printf("나는 소문자만 알아듣는다.\n");
//         while (getchar() != '\n')
//             continue;
//         printf("다른 글자를 하나 입력하시오 (끝내려면 #):\n");
//     }
//     printf("안녕!\n");

// return 0;
// }

// /* vowels.c -- 한 문장에 다수의 레이블을 사용한다   */
// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     int a_ct,e_ct,i_ct,o_ct,u_ct;

//     a_ct = e_ct = i_ct = o_ct = u_ct = 0;

//     printf("간단한 영문 텍스트를 입력하시오(끝내려면 #):\n");
//     while ((ch = getchar()) != '#' )
//     {
//         switch(ch)
//         {
//             case'a':
//             case'A': a_ct++;
//                     break;
//             case'e':
//             case'E': e_ct++;
//                     break;
//             case'i':
//             case'I': i_ct++;
//                     break;
//             case'o':
//             case'O': o_ct++;
//                     break;
//             case'u':
//             case'U': u_ct++;
//                     break;
//             default: break;   
//         }
//     }
//     printf("모음의 수: A    E    I    O    U\n");
//     printf("        %4d %4d %4d %4d %4d\n",a_ct,e_ct,i_ct,o_ct,u_ct);

//     return 0;
// }

// <07장 프로그래밍 연습문제>

// /* 문제01. #문자를 만날 때까지 입력을 읽고, 읽은 스페이스의 수,
// 읽은 개행 문자의 수, 읽은 기타 모든 문자들의 수를 출력하는 프로그램을 작성하라. */
// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     int space_cnt = 0;
//     int n_cnt = 0;
//     int o_cnt = 0;

//     printf("간단한 영문 텍스트를 입력하시오(끝내려면 #):\n");
//     while ((ch = getchar()) != '#' )
//     {
//         if(ch == ' ')
//         {
//             space_cnt++;
//         }
//         else if (ch == '\n')
//         {
//             n_cnt++;
//         }
//         else
//             o_cnt++;
//     }
//     printf("읽은 스페이스의 수: %d\n읽은개행 문자의 수: %d\n읽은 기타 모든문자들의 수:%d\n",space_cnt,n_cnt,o_cnt);

// return 0;
// }

// /* 문제02. 문자를 만날 때까지 입력을 읽는 프로그램을 작성하라. 각각의 입력 문자와 그 문자에 해당하는
// ASKII 코드값을 10진수로 출력하라. 이 문자 - 코드 쌍을 한 라인당 8개 출력하라 */

// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     int ch_cnt=0;

//     printf("문자를 입력하시오:\n");
//     while ((ch = getchar()) != '\n' ) //개행되기 전까지 와일문 반복
//     {   
//         if(ch != ' ')  // 스페이스를 포함 안하기 위한 조건
//         {
//             printf(" %c : %d ",ch,ch); //문자 : 아스키코드 출력
//             ch_cnt++;  // 증감식을써서
//             if (ch_cnt == 8) // 8개가 되면
//             {
//                 printf("\n"); // 개행해라
//                 ch_cnt = 0; // 다시 반복 시키기 위해서 초기화
//             }
//         }
//     }
// return 0;
// }

// /* 문제03. 0을 입력할 때까지 정수들을 읽는 프로그램을 작성하라.
// 입력이 종료된 후, 프로그램은 입력된 정수 중에서 
// 짝수(0은 제외)의개수와 평균, 홀수의 개수와 평균을 보고해야한다*/

// #include <stdio.h>
// int main(void)

// {
//     int a = 0,cnt_a = 0,cnt_b = 0;
//     float sum_a = 0,sum_b=0;
    
//     printf("정수를 입력하시오(종료하려면 0):\n");
//     while((scanf("%d",&a)) != 0)
//     {    
//         if (a == 0) 
//         {
//             break; // 0을 입력하면 반복문 종료
//         }
//         else if(a%2==0)
//         {   
//             cnt_a++;
//             sum_a+=a;
            
//         }
//         else
//             cnt_b++;
//             sum_b+=a;
            
//     }
    
// printf("짝수의 개수는 %d개 평균은: %0.2f\n",cnt_a,sum_a/cnt_a);
// printf("홀수의 개수는 %d개 평균은: %0.2f\n",cnt_b,sum_b/cnt_b);

// return 0;

// }

/* # 문자를 만날 때까지 입력을 읽고, if else문을 사용하여
마침표는 느낌표로, 느낌표는 느낌표 두 개로 대체하고, 대체한 횟수를 
끝에 출력하는 프로그램을 작성하라.*/

#include <stdio.h>
int main (void)
{
    char ch;
    int p_cnt=0,cnt=0;
    

    printf("간단한 영문 텍스트를 입력하시오(끝내려면 #):\n");
    while ((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            ch = '!';
            p_cnt++;

        }
        else if (ch == '!')
        {
            ch = 0;
            printf("!!");
            cnt++;
        }
        else ch = ch;

    printf("%c",ch);
    
    }
    printf("\n%d번 대체 되었습니다.",cnt+p_cnt);
    
return 0;

}

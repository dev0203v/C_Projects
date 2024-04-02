// <14장 구조체와 그 밖의 데이터형>
// // funds4.c -- 함수에 구조체의 배열을 전달한다
// #include <stdio.h>
// #define FUNDLEN 50
// #define N 2

// struct funds{
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(const struct funds money[], int n);
// double add(struct funds *money[], int n);

// int main(){
//     struct funds jones[N] = {
//         {
//             "국민은행",
//             4032.27,
//             "동아상호신용금고",
//             8543.94
//         },
//         {
//             "우리은행",
//             3620.88,
//             "대한상호신용금고",
//             3802.91
//         }
//     };
    
//     printf("Jones 씨네 두 형제의 총 잔고는 $%.2f입니다.\n",sum(jones, N));

//     return 0;
// }

// double sum(const struct funds money[], int n){
//     double total;
//     int i;

//     for ( i = 0, total = 0; i < n; i++){
//         total += money[i].bankfund + money[i].savefund;
//     }
//     return total;
// }

// double add( struct funds *money[], int n){
//     double total2;
//     int i;
    
//     for ( i = 0, total2 = 0; i < n; i++){
//         money[i]->bankfund = (money[i]->bankfund) + (money[i]->bankfund)*0.05;
//         money[i]->savefund = (money[i]->savefund) + (money[i]->savefund)*0.05;
//         total2 += money[i]->bankfund + money[i]->savefund;
//     }
//     return total2;
// }

// enum.c -- 열거된 상수들을 사용한다
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char* s_gets(char* st, int n);
enum spectrum {red, orange, yellow, green, blue, violet};
const char* colors[] = {"red","orange","yellow","green","blue","violet"};

#define LEN 30
int main(){
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts("컬러를 입력하시오(끝내려면 빈 라인):");
    while (s_gets(choice,LEN) != NULL && choice[0] != '\0')
    {
        for ( color = red; color <= violet; color++)
        {
            if (strcmp(choice, colors[color]) == 0)
            {
                color_is_found = true;
                break;
            }
            
        }
        if (color_is_found)
            switch (color){
            case red: puts("장미는 red.");
                break;
            case orange: puts("양귀비는 orange.");
                break;
            case yellow: puts("햐바라기는 yellow.");
                break;
            case green: puts("잔디는 green.");
                break;
            case blue: puts("불루벨은 blue.");
                break;
            case violet: puts("제비꽃은 violet.");
                break;
            }
        else
            printf("%s 컬러는 잘 모르겠습니다.\n",choice);
        color_is_found = false;
        puts("다음 컬러를 입력하시오(끝내려면 빈 라인):");
    }
    puts("안녕!");

    return 0;
    
}
char* s_gets(char* st,int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st,n,stdin);
    if (ret_val){
        find = strchr(st,'\n');
        if(find)
            *find = '\0';
        else
            while (getchar()!='\n')
            continue;
    }
    return ret_val;
}
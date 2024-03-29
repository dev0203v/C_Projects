// // <14장 구조체와 그밖의 데이터형>
// //book.c -- 관리하는 도서가 하나뿐인 도서 목록
// #include <stdio.h>
// #include <string.h>
// #define MAXTITL 41
// #define MAXAUTL 31

// struct book{
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };
// char * s_gets(char * st, int n);
// int main()
// {
//     struct book Library;
    
//     printf("도서 제목을 입력하시오.\n");
//     s_gets(Library.title,MAXTITL);
//     printf("저자명을 입력하시오.\n");
//     s_gets(Library.author,MAXAUTL);
//     printf("정가를 입력하시오.\n");
//     scanf("%f",&Library.value);
//     printf("%s by %s: $%.2f\n",Library.title,Library.author,Library.value);
//     printf("종료.\n");

//     return 0;
// }
// char * s_gets(char * st, int n)
// {
//     char* ret_val;
//     char* find;

//     ret_val = fgets(st,n,stdin);
//     if (ret_val)
//     {
//         find = strchr(st,'\n');
//         if (find)
//             *find = '\0';
//         else
//             while (getchar()!='\n')
//             continue;
//     }
//     return ret_val;
// }

#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main()
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("도서 제목을 입력하시오.\n");
    printf("끝내려면 라인의 시작 위치에서 [enter] 키를 누르시오.\n");
    while (count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("저자명을 입력하시오.\n");
        s_gets(library[count].author,MAXAUTL);
        printf("정가를 입력하시오.\n");
        scanf("%f",&library[count++].value);
        while (getchar()!= '\n')
            continue;
        if (count < MAXBKS)
            printf("다음 타이틀을 입력하시오.\n");
    }
    if (count > 0)
    {
        printf(" 다음은 소장하고 있는 도서들의 목록입니다:\n");
        for ( index = 0; index < count; index++)
            printf("%s by%s: $%.2f\n",library[index].title,library[index].author,library[index].value);

    }
    else
        printf("책이 한 권도 없어요? 야, 장하다 장해.\n");

    return 0;
}
char * s_gets(char * st, int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        find = strchr(st,'\n');
        if (find)
            *find = '\0';
        else
            while (getchar()!='\n')
            continue;
    }
    return ret_val;
}

// //friend.c -- 중첩된 구조체를 사용한다
// #include <stdio.h>
// #define LEN 20
// const char* msgs[5] = 
// {
//     "훌륭한 저녁 대접에 감사드립니다.",
//     "당신의 직업이 ",
//     "라는 점은 당신이 정말 특별한 분이라는 것을 증명합니다.",
//     "우리는 맛있는",
//     "를 먹고 약간 웃는 것 이상으로 함께했음에 틀림이 없습니다."
// };
// struct names {
//     char first[LEN];
//     char last[LEN];
// };
// struct guy{
//     struct names handle;
//     char favfood[LEN];
//     char job[LEN];
//     float income; 
// };
// int main(){
//     struct guy fellow = {
//         { "Ewen", "Villard"},
//         "훈제 연어",
//         "성격 코치",
//         68112.00
//     };

//     printf("친애하는 %s,\n\n",fellow.handle.first);
//     printf("%s%s\n",msgs[0],fellow.handle.first);
//     printf("%s%s. \n",msgs[1],fellow.job);
//     printf("%s\n",msgs[2]);
//     printf("%s%s%s",msgs[3],fellow.favfood,msgs[4]);
//     if (fellow.income > 150000.0)
//         puts("!!");
//     else if (fellow.income > 75000.0)
//         puts("!");
//     else
//         puts(".");
//     printf("\n%40s%s\n"," ","또 뵈어요,");
//     printf("%40s%s\n"," ","Shalala");

// return 0;   
// }



// //friends.c -- 구조체를 가리키는 포인터를 사용한다
// #include <stdio.h>
// #define LEN 20

// struct names {
//     char first[LEN];
//     char last[LEN];
// };
// struct guy{
//     struct names handle;
//     char favfood[LEN];
//     char job[LEN];
//     float income; 
// };
// int main(){
//     struct guy fellow[2] = {{
//         { "Ewen", "Villard"},
//         "grilled salmon",
//         "personality coach",
//         68112.00
//     },
//     {{"Rodney","Swillbelly"},
//     "tripe",
//     "tabloid editor",
//     232400.00
//     }
// };
// struct guy* him;
// printf("주 소 #1: %p #2: %p\n", &fellow[0],&fellow[1]);
// him = &fellow[0];
// printf("포인터 #1: %p #2: %p\n",him,him+1);
// printf("him->income은 $%.2f: (*him).income은 $%.2f\n",him->income,(*him).income);
// him++;
// printf("him->favfood는 %s: him->handle.lasr는 %s\n",him->favfood,him->handle.last);

// return 0;
// }

// // funds1.c -- 구조체의 멤버를 전달인자로 전달한다
// #include <stdio.h>
// #define FUNDLEN 50

// struct funds {
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(double, double);

// int main(){
//     struct funds stan = {
//         "국민은행",
//         3024.72,
//         "동아상호신용금고",
//         9237.11
//     };

//     printf("Stan 씨의 총 잔고는 $%.2f입니다.\n",sum(stan.bankfund,stan.savefund));

//     return 0;
// }

// // 두 개의 double형 값을 더한다
// double sum(double x,double y)
// {
//     return(x+y);
// }

// // funds3.c -- 구조체를 전달한다
// #include <stdio.h>
// #define FUNDLEN 50

// struct funds {
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(struct funds moolah);

// int main(){
//     struct funds stan = {
//         "국민은행",
//         4032.27,
//         "동아상호신용금고",
//         8543.94
//     };

//     printf("Stan 씨의 총 잔고는 $%.2f입니다.\n",sum(stan));

//     return 0;
// }

// double sum(struct funds moolah)
// {
//     return(moolah.bankfund + moolah.savefund);
// }

// // names1.c -- 구조체를 가리키는 포인터를 사용한다
// #include <stdio.h>
// #include <string.h>

// #define NLEN 30
// struct namect{
//     char fname[NLEN];
//     char lname[NLEN];
//     int letters;
// };
// void getinfo(struct namect *);
// void makeinfo(struct namect *);
// void showinfo(const struct namect *);
// char * s_gets(char * st, int n);
// int main(){
//     struct namect person;

//     getinfo(&person);
//     makeinfo(&person);
//     showinfo(&person);
//     return 0;
// }
// void getinfo(struct namect* pst){
//     printf("이름을 입력하시오.\n");
//     s_gets(pst->fname,NLEN);
//     printf("성씨를 입력하시오.\n");
//     s_gets(pst->lname,NLEN);
// }
// void makeinfo(struct namect* pst){
//     pst->letters = strlen(pst->fname)+ strlen(pst->lname);
// }
// void showinfo(const struct namect *pst){
//     printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",pst->fname,pst->lname,pst->letters);
// }
// char * s_gets(char * st, int n){
//     char* ret_val;
//     char* find;

//     ret_val = fgets(st,n,stdin);
//     if (ret_val){
//         find = strchr(st,'\n');
//         if (find)
//             *find = '\0';
//         else
//             while (getchar()!='\n')
//             continue;
//     }
//     return ret_val;
// }

// StructTypedef.c
// #include <stdio.h>

// struct point{
//     int xpos;
//     int ypos;
// };

// typedef struct point Point;

// typedef struct person{
//     char name[20];
//     char phoneNum[20];
//     int age;
// } Person;

// int main(){
//     Point pos = {10,20};
//     Person man = {"이승기", "010-1212-0001",21};
//     printf("%d %d \n",pos.xpos,pos.ypos);
//     printf("%s %s %d \n",man.name,man.phoneNum,man.age);

//     return 0;
// }

// // names3.c -- 포인터와 malloc()을 사용한다
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SLEN 81
// struct namect{
//     char* fname;
//     char* lname;
//     int letters;
// };
// void getinfo(struct namect* pst);
// void makeinfo(struct namect* pst);
// void showinfo(const struct namect *pst);
// void cleanup(struct namect *pst);
// char * s_gets(char * st, int n);
// int main(){
//     struct namect person;

//     getinfo(&person);
//     makeinfo(&person);
//     showinfo(&person);
//     cleanup(&person);

//     return 0;
// }
// void getinfo(struct namect* pst){
//     char temp[SLEN];
//     printf("이름을 입력하시오.\n");
//     s_gets(temp,SLEN);
//     pst->fname = (char*) malloc(strlen(temp)+1);
//     strcpy(pst->fname,temp);
//     printf("성씨를 입력하시오.\n");
//     s_gets(temp,SLEN);
//     pst->lname = (char*) malloc(strlen(temp)+1);
//     strcpy(pst->lname,temp);
// }
// void makeinfo(struct namect* pst){
//     pst->letters = strlen(pst->fname)+ strlen(pst->lname);
// }
// void showinfo(const struct namect *pst){
//     printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",pst->fname,pst->lname,pst->letters);
// }
// void cleanup(struct namect *pst){
//     free(pst->fname);
//     free(pst->lname);
// }
// char * s_gets(char * st, int n)
// {
//     char* ret_val;
//     char* find;

//     ret_val = fgets(st,n,stdin);
//     if (ret_val)
//     {
//         find = strchr(st,'\n');
//         if (find)
//             *find = '\0';
//         else
//             while (getchar()!='\n')
//             continue;
//     }
//     return ret_val;
// }

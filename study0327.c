// // < 11장 문자열 표현과 문자열 입출력>
// // strings1.c
// #include <stdio.h>
// #define MSG "I am symbolic string constant."
// #define MAXLENGTH 81
// int main(void)
// {
//     char words[MAXLENGTH] = "I am a string in an array.";
//     const char* pt1 = "Something is pointing at me.";
//     puts("Here are some strings:");
//     puts(MSG);
//     puts(words);
//     puts(pt1);
//     words[8] = 'p';
//     puts(words);

//     return 0;
// }

// // strptr.c --포인터로서의 문자열들
// #include <stdio.h>
// int main(void)
// {
//     printf("%s, %p, %c\n","We","are",*"space farers");

//     return 0;
// }

// //arrchar.c --포인터의 배열, 문자열의 배열
// #include <stdio.h>
// #define SLEN 40
// #define LIM 5
// int main(void)
// {
//     const char *mytalents[LIM] = {
//         "Adding numbers swiftly",
//         "Multiplying accurately", "Stashing data",
//         "Following instructions to the letter",
//         "Understanding the C language"
//     };
//     char yourtalents[LIM][SLEN] = {
//         "Walking in a strainght line",
//         "Sleeping", "Watching television",
//         "Malling letters","Reading email"
//     };
//     int i;

//     puts("let's compare talents.");
//     printf("%-36s %-25s\n","My Talents","Your Talents");
//     for (i = 0; i < LIM; i++)
//         printf("%-36s %-25s\n",mytalents[i],yourtalents[i]);
//     printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",sizeof(mytalents),sizeof(yourtalents));

//     return 0;
// }

// //p_and_s.c -- 포인터와 문자열
// #include <stdio.h>
// int main(void)
// {
//     const char* mesg = "섣불리 판단하지 말라!";
//     const char* copy;

//     copy = mesg;
//     printf("%s\n",copy);
//     printf("mesg = %s; &mesg = %p; 값 = %p\n",mesg,&mesg,mesg);
//     printf("copy = %s; &copy = %p; 값 = %p\n",copy,&copy,copy);

//     return 0;
// }

// // fgets1.c -- fgets()와 fputs() 사용
// #include <stdio.h>
// #define STLEN 14
// int main(void)
// {
//     char words[STLEN];

//     puts("문자열을 입력하세요.");
//     fgets(words,STLEN,stdin);
//     printf("당신의 문자열 두 번 (puts(), 그리고 나서 fputs()):\n");
//     puts(words);
//     fputs(words,stdout);
//     puts("다른 문자열을 입력하세요.");
//     fgets(words,STLEN,stdin);
//     printf("당신의 문자열 두 번 (puts(), 그리고 나서 fputs()):\n");
//     puts(words);
//     fputs(words,stdout);
//         puts("Done.");
//         return 0;

// }

// // fgets2.c -- fgets()와 fputs() 사용
// #include <stdio.h>
// #define STLEN 10
// int main(void)
// {
//     char words[STLEN];
//     puts("문자열을 입력하세요 (탈출하려면 빈 행):");
//     while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//         fputs(words, stdout);
//     puts("종료.");

//     return 0;
// }

// // fgets3.c -- fgets()와 fputs() 사용
// #include <stdio.h>
// #define STLEN 10
// int main(void)
// {
//     char words[STLEN];
//     int i;

//     puts("문자열을 입력하세요 (탈출하려면 빈 행):");
//     while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//     {
//         i = 0;
//         while (words[i] != '\n' && words[i] != '\0')
//             i++;
//         if (words[i] == '\n')
//             words[i] = '\0';
//         else    // words[i] == '\0'이어야 한다
//             while (getchar() != '\n')
//                 continue;
//         puts(words);
//     }
//     puts("종료.");
//     return 0;
// }

// //s_gets.c 함수
// char* sgets(char* st, int n)
// {
//     char* ret_val;
//     int i = 0;

//     ret_val = fgets(st,n,stdin);
//     if (ret_val) // 즉, ret_val != NULL
//     {
//          while (st[i] != '\n' && st[i] != '\0')
//             i++;
//         if (st[i] == '\n')
//             st[i] = '\0';
//         else    // words[i] == '\0'이어야 한다
//             while (getchar() != '\n')
//                 continue;
//     }
    
//     return ret_val;
// }

// // nono.c -- no!
// #include <stdio.h>
// int main(void)
// {
//     char side_a[] = "Side A";
//     char dont[] = {'W','O','W','!'};
//     char side_b[] = "Side B";

//     puts(dont);     // dont는 문자열이 아니다

//     return 0;
// }
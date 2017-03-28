// #ifndef (__STDC__) || (__cplusplus)
#ifdef __cplusplus //c++编译环境中才会定义__cplusplus (plus就是"+"的意思)
#error 亲，您当前使用的不是GCC编译器噢！
extern "C" { //告诉编译器下面的函数是c语言函数（因为c++和c语言对函数的编译转换不一样，主要是c++中存在重载）
#endif
#ifndef __GNUC__
#error 亲，您当前使用的不是GCC编译器噢！
#endif
// #define SECONDS_PER_YEAR (365*24*60*60)UL
#define SECONDS_PER_YEAR (60UL * 60UL * 24UL * 365UL)
#define MIN(A,B) ((A)<=(B)?(A):(B))

void run_one_embeded_practice(){
    printf("%ld\n",SECONDS_PER_YEAR);
    int a=15,b=30;
    printf("Min of %d and %d is %d\n",a,b,MIN(a,b));
    long counter=0;
    // gotoLoop:printf("Dead Loop %ld times.\n",counter);
    // counter++;
    // goto gotoLoop;
    // while(1){printf("Dead Loop %ld times.\n",counter);counter++;}
    // for(;;){printf("Dead Loop %ld times.\n",counter);counter++;}
    //5. 用变量a给出下面的定义
    // a) 一个整型数（An integer）
    int a;
    // b)一个指向整型数的指针（ A pointer to an integer）
    int *a;
    // c)一个指向指针的的指针，它指向的指针是指向一个整型数（ A pointer to a pointer to an intege）r
    int **a;
    // d)一个有10个整型数的数组（ An array of 10 integers）
    int a[10];
    // e) 一个有10个指针的数组，该指针是指向一个整型数的。（An array of 10 pointers to integers）
    int *a[10];
    // f) 一个指向有10个整型数数组的指针（ A pointer to an array of 10 integers）
    int (*a)[10];
    // g) 一个指向函数的指针，该函数有一个整型参数并返回一个整型数（A pointer to a function that takes an integer as an argument and returns an integer）
    int (*a)(int);
    // h) 一个有10个指针的数组，该指针指向一个函数，该函数有一个整型参数并返回一个整型数 （ An array of ten pointers to functions that take an integer argument and return an integer ）
    int (*a[10])(int);






}
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
}
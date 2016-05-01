#include <time.h>
#include <stdio.h>

#define ONLY_ONCE plsDontUseThisNameElseWhereOrIWontCompile
#define TIMEWAIT 357913941
#define SPEED_LOOP(X) int ONLY_ONCE=0;for(;ONLY_ONCE<X;ONLY_ONCE++){asm volatile("nop");}
#define SLEEP(X) SPEED_LOOP(TIMEWAIT*X) 
#define PRODUCTION 1
#ifndef PRODUCTION
  #include <limits.h>
  #define TIMING(X) X=(int)time(NULL);SPEED_LOOP(INT_MAX)X=INT_MAX/((int)time(NULL)-X);
#endif
int main(void) {
  #ifndef PRODUCTION
    int i;
    TIMING(i)
    printf("Need %d loops per second ;)\n", i);
  #endif
  #ifdef PRODUCTION
    SLEEP(1)
  #endif
}

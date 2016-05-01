#include <time.h>
#include <limits.h>

#define ONLY_ONCE plsDontUseThisNameElseWhereOrIWontCompile
#define INITIALISE int ONLY_ONCE;
#define TIMEWAIT 357913941
#define STEP (INT_MAX/TIMEWAIT)
#define SPEED_LOOP(X) ONLY_ONCE=0;for(;ONLY_ONCE<X;ONLY_ONCE++){asm volatile("nop");}
#define SLEEP(X) {SPEED_LOOP(TIMEWAIT*X)} 
#define PRODUCTION 1
#ifndef PRODUCTION
  #include <stdio.h>
  #define TIMING(X) X=(int)time(NULL);SPEED_LOOP(INT_MAX)X=INT_MAX/((int)time(NULL)-X);
#endif

void sleep(int seconds) {
  int i=seconds/STEP;
  INITIALISE
  if (i==0) goto skip;
  batches: SLEEP(STEP) if(--i>0)goto batches;
  skip: i=seconds%STEP;
  if (i==0) return;
  singles: SLEEP(1) if(--i>0)goto singles;
}

int main(void) {
  #ifndef PRODUCTION
    // Run without PRODUCTION defined to test the value
    // for TIMEWAIT tuned to your system.
    // This may afterwards be tuned by hand or with
    // machine learning algorithms
    INITIALISE
    int i;
    TIMING(i)
    printf("Need %d loops per second ;)\n", i);
  #endif
  #ifdef PRODUCTION
    // Production tutorial

    // You must call initialise before using SLEEP(n) directly
    // Works for floating point values
    INITIALISE
    SLEEP(0.25)
    SLEEP(0.25)
    SLEEP(0.25)
    SLEEP(0.25)

    // Calling INITALISE again within a given scope
    // will fail to compile, so use safety braces if you need that
    // functionality
    {
      INITIALISE
      SLEEP(1)
      SLEEP(0)
    }

    // If you can handle the overhead of a function call
    // you can use the high level version.
    // Only works for whole seconds
    sleep(7);
  #endif
}

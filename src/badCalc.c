#include <stdio.h>
#include <assert.h>

#define ADD(x, y, RET) do{assert(x); assert(y); RET = x+y;}while(0)

int main(void) {
  int res;
  ADD(1, 2, res);
  int i = 0;
  int j = 0;
  int res2;
  ADD(++i, ++j, res2);
  printf("1 + 2 = %d, 1 + 1 = %d\n", res, res2);
}

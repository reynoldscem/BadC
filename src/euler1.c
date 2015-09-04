#include <stdio.h>

int main() {
  int j = 0, i = 0;
  s:j+=(!(i%0b11)|!(i%0b101))?i:0;
  if(++i<0x3e8)goto s;
  printf("%d\n", j);
}

#include <stdlib.h>
#include <stdio.h>

unsigned long set(int, unsigned long);

int a = 2, b = 2;
unsigned long* arr;

int main(void) {
  arr    = malloc(a * sizeof(unsigned long));
  arr[0] = 0;
  arr[1] = 1;
  unsigned long c = 0;
  unsigned long val;
  int i = 2;

  loop:;if((val = arr[i-1]+arr[i-2])>4000000)goto out;
  c+=(set(i++,val)%2)?0:val;goto loop;
  out:printf("%d\n", c);
}

unsigned long set(int index, unsigned long value) {
  if (index < a) goto assign;
  unsigned long* tmp = malloc(a * b * sizeof(unsigned long));
  int i = 0;
  cp: tmp[i] = arr[i]; if (i++ < a) goto cp;
  a *= b;
  free(arr);
  arr = tmp;
  assign:;
    arr[index] = value;
  return value;
}

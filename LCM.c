#include <stdio.h>
#define loop {max++;goto start;}
#define output printf("%d\n",max);

int main(void) {
  int first, second, max;
  printf("Enter two positive ints: ");
  scanf("%d %d", &first, &second);
  max = (first > second ? first : second);

  start: if (max % first || max % second) max++; else goto end;
  goto start;
  end: output
}

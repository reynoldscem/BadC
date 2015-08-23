#include <stdio.h>
#include <stdlib.h>
#define LITERAL "A man a plan a canal panama.\n"

int main(void) {
  int max = 0;
  self: if (*(LITERAL+max++)) goto self; else max--;
  char* str = malloc(max-- + 1);
  int i = 0;
  rev: if (max-i+1) *(str+i) = *(LITERAL+max-i++); else goto end;
  goto rev;
  end: printf("%s", str);
}

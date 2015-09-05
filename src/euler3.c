#include <stdio.h>
#define LIMIT 600851475143
#define div(x,y) !(x % y)

int main() {
  long a, b, c;
  for (a=LIMIT,b=2,c;b!=a;!(a%b)?(a=a/b)|(c=b)|(b=2):b++);
  printf("%d\n", a);
}

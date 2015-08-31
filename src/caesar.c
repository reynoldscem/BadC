#include <stdio.h>
#include <stdlib.h>

// Usage: 
//   ./caesar 1 "String"
// Where:
//   1        = rotation amount
//   "String" = string to rotate
int main(int argc, char** argv) {
  int tmp = 0, i = 0, j = 0;
  s:switch(*(*(argv+2)+j++)){case 0:puts(*(argv+2));break;default:i=j-1;((*(*(argv+2)+i)>64&&*(*(argv+2)+i)<91)||(*(*(argv+2)+i)>96&&*(*(argv+2)+i)<123))?(((tmp=*(*(argv+2)+i)>96)?*(*(argv+2)+i)-=32:0)|((*(*(argv+2)+i)+=(atoi(argv[1])%26)-65)>25?*(*(argv+2)+i)+=6:0)|(*(*(argv+2)+i)+=65)|(tmp?(*(*(argv+2)+i)<91)?*(*(argv+2)+i)+=32:((*(*(argv+2)+i)>96)?*(*(argv+2)+i)-=32:0):0)):0;goto s;}
}

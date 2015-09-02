#include <stdio.h>
#include <stdlib.h>
// Usage: 
//   ./caesar 1 "String"
// Where:
//   1        = rotation amount
//   "String" = string to rotate
int main(int argc, char** argv) {
  (*((long*)&*argv+0))=0;s:switch(*(*(argv+2)+(*((short*)&*argv+2))++)){case 0:puts(*(argv+2));break;default:(*((short*)&*argv+1))=(*((short*)&*argv+2))-1;((*(*(argv+2)+(*((short*)&*argv+1)))>64&&*(*(argv+2)+(*((short*)&*argv+1)))<91)||(*(*(argv+2)+(*((short*)&*argv+1)))>96&&*(*(argv+2)+(*((short*)&*argv+1)))<123))?((((*((short*)&*argv))=*(*(argv+2)+(*((short*)&*argv+1)))>96)?*(*(argv+2)+(*((short*)&*argv+1)))-=32:0)|((*(*(argv+2)+(*((short*)&*argv+1)))+=(atoi(argv[1])%26)-65)>25?*(*(argv+2)+(*((short*)&*argv+1)))+=6:0)|(*(*(argv+2)+(*((short*)&*argv+1)))+=65)|((*((short*)&*argv))?(*(*(argv+2)+(*((short*)&*argv+1)))<91)?*(*(argv+2)+(*((short*)&*argv+1)))+=32:((*(*(argv+2)+(*((short*)&*argv+1)))>96)?*(*(argv+2)+(*((short*)&*argv+1)))-=32:0):0)):0;goto s;}
}

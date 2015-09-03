#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Usage:
//   ./vigenere "Key" "Str"
int main(int argc, char** argv) {
  *(long*)&*argv=0;s:((*(*(argv+2)+(*((short*)&*argv)))>64&*(*(argv+2)+(*((short*)&*argv)))<91)|(*(*(argv+2)+(*((short*)&*argv)))>96&*(*(argv+2)+(*((short*)&*argv)))<123))?*(*(argv+2)+(*((short*)&*argv)))=(((toupper(*(*(argv+2)+(*((short*)&*argv))))-65+toupper(*(*(argv+1)+((*((short*)&*argv+1))%strlen(*(argv+1)))))-65)%26)+65):(*((short*)&*argv+1))--;(*((short*)&*argv))++;(*((short*)&*argv+1))++;if((*((short*)&*argv))<strlen(*(argv+2)))goto s;printf("%s\n", *(argv+2));
}

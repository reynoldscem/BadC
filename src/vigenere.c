#include <stdio.h>

// Usage:
//   ./vigenere "Key" "Str"
int main(int argc, char** argv) {
  *(long*)&*argv=0;while(*(*(argv+1)+(*((char*)&*argv+3))++));(*((char*)&*argv+3))--;while(*(*(argv+2)+(*((char*)&*argv+4))++));(*((char*)&*argv+4))--;s:((*(*(argv+2)+(*((char*)&*argv)))>64&*(*(argv+2)+(*((char*)&*argv)))<91)|(*(*(argv+2)+(*((char*)&*argv)))>96&*(*(argv+2)+(*((char*)&*argv)))<123))?*(*(argv+2)+(*((char*)&*argv)))=(((((*(*(argv+2)+(*((char*)&*argv))))-=(*(*(argv+2)+(*((char*)&*argv)))>96)?32:0)-65+((*(*(argv+1)+((*((char*)&*argv+1))%*((char*)&*argv+3))))-=((*(*(argv+1)+((*((char*)&*argv+1))%*((char*)&*argv+3))))>96)?32:0)-65)%26)+65):(*((char*)&*argv+1))--;(*((char*)&*argv))++;(*((char*)&*argv+1))++;if((*((char*)&*argv))<*((char*)&*argv+4))goto s;printf("%s\n", *(argv+2));
}

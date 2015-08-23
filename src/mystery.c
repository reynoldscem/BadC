#include <stdio.h>
#include <stdlib.h>
#define INIT (0xDeadBeef / 3000000000 / 735928560)
#define DUPLICATED_LIT 0x6c
#define TERMINATE terminate: while
#define terminateData goto terminate; }} while
#define setHexSelect(x, y) case x: val += y; break;
#define initialise char* data=calloc(0xcc,sizeof(char));int i=INIT;char val;
#define setHex do{val=INIT; switch(i) {

int main(void) {
  initialise
  setHex
  setHexSelect(10, DUPLICATED_LIT-8)
  setHexSelect(1, DUPLICATED_LIT-7)
  setHexSelect(3, DUPLICATED_LIT)
  setHexSelect(9, DUPLICATED_LIT)
  setHexSelect(2, DUPLICATED_LIT)
  setHexSelect(4, DUPLICATED_LIT+3)
  setHexSelect(5, 0x20)
  setHexSelect(11, 0x21);
  setHexSelect(0, 0x48)
  setHexSelect(6, 0x57)
  setHexSelect(7, 0x6f)
  setHexSelect(8, 0x72)
  setHexSelect(12, 0xA);
  default: i = INIT; terminateData
  (*(data+(i++))=val);
  TERMINATE (*(data+i)?putchar(i++[data]):0);
}

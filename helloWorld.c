#include <stdio.h>
#include <stdlib.h>
#define INIT (0xDeadBeef / 3000000000 / 735928560)
#define DUPLICATED_CHAR 0x6c
#define PRINT print: while
#define printStr goto print; }} while
#define setChar(x, y) case x: val += y; break;
#define setupData char* str=calloc(0xcc,sizeof(char));int i=INIT;char val;
#define setCharacters do{val=INIT; switch(i) {

int main(void) {
  setupData
  setCharacters
  setChar(10, DUPLICATED_CHAR-8)
  setChar(1, DUPLICATED_CHAR-7)
  setChar(3, DUPLICATED_CHAR)
  setChar(9, DUPLICATED_CHAR)
  setChar(2, DUPLICATED_CHAR)
  setChar(4, DUPLICATED_CHAR+3)
  setChar(5, 0x20)
  setChar(11, 0x21);
  setChar(0, 0x48)
  setChar(6, 0x57)
  setChar(7, 0x6f)
  setChar(8, 0x72)
  setChar(12, 0xA);
  default:
    i = INIT;
    printStr
  (*(str+(i++))=val);
  PRINT (*(str+i)?putchar(i++[str]):0);
}

#include <stdio.h>

void addChar(char *s, char c) {
  while(*s++);

  *(s - 1) = c;

  *s = '\0';
}

void wipeString(char *str) {
  
str[0] = '\0';
}

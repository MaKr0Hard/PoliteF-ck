#include <stdio.h>

void addChar(char *s, char c) {
  while(*s++);

  *(s - 1) = c;

  *s = '\0';
}

void wipeString(char *str) {
  int i = 0;
  while (str[i]) {
    str[i] = ' ';
    i++;
  }
str[0] = '\0';
}

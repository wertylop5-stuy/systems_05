#include <stdio.h>
#include <string.h>
#include"include/liK.h"

int cmpthestrs (char *s1, char *s2){
  return *s1 - *s2;
}

char * chrthestrs ( char *s, char c ){
  int i = 1;
  while (i){
    if (*s == c){
      return s;
    }
    s++;
    if (*s == 0){
      i = 0;
    }
  }
  return 0;
}


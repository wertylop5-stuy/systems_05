#include <stdio.h>
#include <string.h>

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

int main(){
  printf("----------TESTING CMPTHESTRS----------\n");
  char string1[] = "banana";
  char string2[] = "apple";
  char string3[] = "banana";
  printf("string1: %s\nstring2: %s\nstring3: %s\n", string1, string2, string3);
  printf("[MINE] cmpthestrs(string1, string2) returned:%d\n", cmpthestrs(string1, string2));
  printf("[STANDARD] strcmp(string1, string2) returned:%d\n", strcmp(string1, string2));
  printf("[MAIN] cmpthestrs(string2, string1) returned:%d\n", cmpthestrs(string2, string1));
  printf("[STANDARD] strcmp(string2, string1) returned:%d\n", strcmp(string2, string1));
  printf("[MAIN] cmpthestrs(string1, string3) returned:%d\n", cmpthestrs(string1, string3));
  printf("[STANDARD] strcmp(string1, string3) returned:%d\n", strcmp(string1, string3));
  printf("----------TESTING CHRTHESTRS----------\n");
  char str1[] = "keyboard";
  char str2[] = "b";
  char str3[] = "n";
  printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
  printf("[MINE] chrthestrs(str1, str2) returned:%s\n", chrthestrs(str1, *str2));
  printf("[STANDARD] strchr(str1, str2) returned:%s\n", strchr(str1, *str2));
  printf("[MINE] chrthestrs(str1, str3) returned:%s\n", chrthestrs(str1, *str3));
  printf("[STANDARD] strchr(str1, str3) returned:%s\n", strchr(str1, *str3));
}

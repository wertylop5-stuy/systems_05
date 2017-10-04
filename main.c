#include<stdio.h>
#include<string.h>
#include"include/linS.h"
#include"include/liK.h"

int main() {
	char c[20] = "";
	char d[] = "abcdefg";
	
	printf("testing my_strncat\n");
	
	char a[] = "apple";
	char b[] = "banana";
	printf("my_strncat(a, b, 2): %s\n", my_strncat(a, b, 2));
	
	char aa[] = "apple";
	char bb[] = "banana";
	printf("strncat(a, b, 2): %s\n", strncat(aa, bb, 2));
	
	printf("\ntesting my_strlen\n");
	printf("my_strlen(b): %d\n", my_strlen(bb));
	printf("strlen(b): %lu\n", strlen(bb));
	
	printf("my_strlen(\"\"): %d\n", my_strlen(""));
	printf("strlen(\"\"): %lu\n", strlen(""));
	
	char h[100];
	printf("\ntesting my_strcpy\n");
	printf("my_strcpy(h, \"\"): %s\n", my_strcpy(h, ""));
	printf("strcpy(h, \"\"): %s\n", strcpy(h, ""));
	
	printf("my_strcpy(h, \"apples\"): %s\n", my_strcpy(h, "apples"));
	printf("strcpy(h, \"apples\"): %s\n", strcpy(h, "apples"));
	
	printf("my_strcpy(h, b): %s\n", my_strcpy(h, b));
	printf("strcpy(h, b): %s\n", strcpy(h, b));
	
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

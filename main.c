#include<stdio.h>
#include<string.h>
#include"include/linS.h"
#include"include/liK.h"

int main() {
	char a[100] = "apple";
	char aa[100] = "apple";
	char b[] = "banana";
	char c[] = "12345";
	char d[] = "abcdefg";
	char h[100] = "";
	
	printf("a: %s\naa: %s\nb: %s\nc: %s\nd: %s\nh: %s\n", a, aa, b, c, d, h);
	
	printf("\ntesting my_strcpy\n");
	printf("my_strcpy(h, \"\"): %s\n", my_strcpy(h, ""));
	printf("strcpy(h, \"\"): %s\n", strcpy(h, ""));
	
	printf("my_strcpy(h, \"apples\"): %s\n", my_strcpy(h, "apples"));
	printf("strcpy(h, \"apples\"): %s\n", strcpy(h, "apples"));
	
	printf("my_strcpy(h, b): %s\n", my_strcpy(h, b));
	printf("strcpy(h, b): %s\n", strcpy(h, b));
	
	
	
	printf("\ntesting my_strncat\n");
	printf("my_strncat(a, b, 2): %s\n", my_strncat(a, b, 2));
	printf("strncat(aa, b, 2): %s\n", strncat(aa, b, 2));
	
	//reset array
	printf("resetting array\n");
	my_strcpy(a, "apple");
	my_strcpy(aa, "apple");
	printf("my_strncat(a, b, 4): %s\n", my_strncat(a, b, 4));
	printf("strncat(aa, b, 4): %s\n", strncat(aa, b, 4));
	
	//test without reset
	printf("my_strncat(a, b, 3): %s\n", my_strncat(a, b, 3));
	printf("strncat(aa, b, 3): %s\n", strncat(aa, b, 3));
	
	printf("resetting array\n");
	my_strcpy(a, "apple");
	my_strcpy(aa, "apple");
	printf("strncat(a, b, 0): %s\n", strncat(a, b, 0));
	printf("strncat(aa, b, 0): %s\n", strncat(aa, b, 0));
	
	printf("resetting array\n");
	my_strcpy(a, "apple");
	my_strcpy(aa, "apple");
	printf("strncat(a, b, 100): %s\n", strncat(a, b, 100));
	printf("strncat(aa, b, 100): %s\n", strncat(aa, b, 100));
	
	printf("resetting array\n");
	my_strcpy(a, "apple");
	my_strcpy(aa, "apple");
	printf("\ntesting my_strcat\n");
	printf("my_strcat(a, b): %s\n", my_strcat(a, b));
	printf("strcat(aa, b): %s\n", strcat(aa, b));
	
	//reset array
	printf("resetting array\n");
	my_strcpy(a, "apple");
	my_strcpy(aa, "apple");
	printf("my_strcat(a, c): %s\n", my_strcat(a, c));
	printf("strcat(aa, c): %s\n", strcat(aa, c));
	
	
	//reset array
	printf("resetting array\n");
	my_strcpy(a, "apple");
	my_strcpy(aa, "apple");
	printf("my_strcat(a, \"\"): %s\n", my_strcat(a, ""));
	printf("strcat(aa, \"\"): %s\n", strcat(aa, ""));
	
	
	printf("\ntesting my_strlen\n");
	printf("my_strlen(b): %d\n", my_strlen(b));
	printf("strlen(b): %lu\n", strlen(b));
	
	printf("my_strlen(\"\"): %d\n", my_strlen(""));
	printf("strlen(\"\"): %lu\n", strlen(""));
	
	
	
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

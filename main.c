#include<stdio.h>
#include<string.h>
#include"include/linS.h"

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
}

#include<stdio.h>
#include<string.h>

int my_strlen(char *s);
char* my_strcpy(char *dest, char *src);
char* my_strncat(char *dest, char *src, size_t n);

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
	
	printf("testing my_strlen\n");
	printf("my_strlen(b): %d\n", my_strlen(bb));
	printf("strlen(b): %lu\n", strlen(bb));
	
	/*
	printf("my_strncat%s\n", my_strncat(c, d, 4));
	printf("my_strncat%s\n", my_strncat(b, a, 0));
	printf("my_strncat%s\n", my_strncat(d, c, 3));
	*/
	/*
	printf("%s\n", my_strcat(i, o));
	printf("%s\n", my_strcat(a, b));
	printf("%s\n", my_strcat(a, b));
	printf("%s\n", my_strcat(d, c));
	printf("%s\n", my_strcat(d, c));
	*/
}


int my_strlen(char *s) {
	char *tmp;
	for (tmp = s; *(tmp++););
	return tmp - s - 1;
}

char* my_strcpy(char *dest, char *src) {
	for (; *(src++);) {
		*(dest++) = *(src++);
	}
	*dest = 0;
}

/*
dest is required to have enough space for the resulting string
otherwise, may have unexpected behavior

both strings should be null terminated, otherwise undesired behavior
may result
*/
char* my_strncat(char *dest, char *src, size_t n) {
	char *temp = dest;
	
	//iterates until it reaches \0
	while (*(temp++));
	temp--;
	
	//size_t is never negative, so it's a bad idea use n > 0
	for (n += 1; n > 1; n--) {
		//stop if terminator is reached
		if (!*src) break;
		
		*(temp++) = *(src++);
	}
	*temp = 0;
	
	return dest;
}

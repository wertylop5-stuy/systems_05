#include<stdio.h>
#include<string.h>

int my_strlen(char *s);
char* my_strcpy(char *dest, char *src);
char* my_strncat(char *dest, char *src, int n);

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


int my_strlen(char *s) {
	char *tmp;
	
	/*
	keep incrementing through the string until
	it finds the null
	*/
	for (tmp = s; *(tmp++););
	
	//overshoot by one, so subtract
	return tmp - s - 1;
}

char* my_strcpy(char *dest, char *src) {
	char *tmp = dest;
	
	/*
	increment both pointers while also copying the values
	over. Keep checking if the copied value is null
	*/
	while (*(tmp++) = *(src++));
	
	//add null terminator
	*tmp = 0;
	
	return dest;
}

/*
dest is required to have enough space for the resulting string
otherwise, may have unexpected behavior

both strings should be null terminated, otherwise undesired behavior
may result
*/
char* my_strncat(char *dest, char *src, int n) {
	char *temp = dest;
	
	//iterates until it reaches \0
	while (*(temp++));
	
	//overshoots by one
	temp--;
	
	//size_t is never negative, so it's a bad idea use n > 0
	for (; n > 0; n--) {
		//stop if terminator is reached
		if (!*src) break;
		
		*(temp++) = *(src++);
	}
	*temp = 0;
	
	return dest;
}

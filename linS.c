#include<stdio.h>
#include<string.h>

char* my_strncat(char *dest, char *src, size_t n);

int main() {
	
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

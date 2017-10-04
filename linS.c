#include<stdio.h>
#include<string.h>
#include"include/linS.h"

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


/*
same as above, but using all of src by default
*/
char* my_strcat(char *dest, char *src) {
	//we want to use the whole string, so count the length
	char *temp = src;
	while(*(temp++));
	
	//minus 1 cuz we did temp++ (overshot by one)
	return my_strncat(dest, src, temp - src - 1);
}



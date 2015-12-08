#include <stdio.h> 
#include <ctype.h> 
int main() { 
char *line = NULL; 
size_t len = 0;
ssize_t read; 
size_t i; 
size_t counter = 1; 
while ((read = getline(&line, &len, stdin)) != -1) { 
	for(i = 0 ; i < len ; i++) { 
		if((line[i] < 'a' || line[i] > 'z') && (line[i] < 'A' || line[i] > 'Z' )) { 
			if ((line[i + 1] >= 'a' && line[i + 1] <= 'z') || (line[i + 1] >= 'A' && line[i + 1] <= 'Z' )) { counter++; } } } } printf("\nBroi dumi:%d\n", counter); 
			return 0; }

#include <stdlib.h>
#include <stdio.h>
int main()
{
	char word[1000];
	printf("Enter your word sir: ");
	gets(word);
	printf("Your word's characters are: \n");
	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] != ' ') { 
			printf("%c   ", word[i]); 
		}
	}
	return 0;
}

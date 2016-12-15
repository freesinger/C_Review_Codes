/* Counts the smallest and largest word */

#include <stdio.h>
#include <string.h>

#define NUM_WORD 20

void read_line(char str[], int n);

int main(void)
{
	char smallest_word[NUM_WORD + 1],
	largest_word[NUM_WORD + 1],
	input_word[NUM_WORD + 1];

	printf("Enter word: ");
	read_line(input_word, NUM_WORD);
	strcpy(smallest_word, strcpy(largest_word, input_word));

	while (strlen(input_word) != 4) {
		printf("Enter word: ");
		read_line(input_word, NUM_WORD);
		if (strcmp(input_word, smallest_word) < 0)
			strcpy(smallest_word, input_word);
		if (strcmp(input_word, largest_word) > 0)
			strcpy(largest_word, input_word);
	}

	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);

	return 0;
}

void read_line(char str[], int n)  //function read_line
{
	int i = 0, ch;

	while ((ch = getchar()) != '\n')
	    if (i < n)
		    str[i++] = ch;
	str[i] = '\0';
}
/* Perform simple encryption */

#include <ctype.h>
#include <stdio.h>

#define KEY '&'

int main(void)
{
	int ori_char, res_char;

	while ((ori_char = getchar()) != EOF)
	{
		if (isdigit(ori_char))
			res_char = ori_char + KEY; // reprogramme won't decode digit
		else 
			res_char = ori_char ^ KEY; // XOR encryption can be reversed

		if (isprint(ori_char) && isprint(res_char))
			// isprint() check out whether output can be put out
			printf("%c", res_char); // putchar(res_char);
		else
			printf("%c", ori_char); // putchar(ori_char);
	}

	return 0;
}
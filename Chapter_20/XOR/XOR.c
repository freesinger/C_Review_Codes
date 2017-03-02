/* Perform XOR encryption */

#include <ctype.h>
#include <stdio.h>

#define KEY '&'

int main(void)
{
    int ori_char, res_char;

    while ((ori_char = getchar()) != EOF)
    {
        res_char = ori_char ^ KEY;
        if (isprint(ori_char) && isprint(res_char))
        //isprint() check out whether output can be put out
            printf("%c", res_char); //putchar(res_char);
        else 
            printf("%c", ori_char); //putchar(ori_char);
    }

    return 0;
}
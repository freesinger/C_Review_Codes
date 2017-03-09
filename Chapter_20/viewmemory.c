/* Allow the user to view regions of computer memory */

#include <stdio.h>
#include <ctype.h>

typedef unsigned char BYTE;

int main(void)
{
    unsigned int addr;
    int i, n;
    BYTE *ptr;

    printf("Address of main function: %x\n", (unsigned int) main);
    printf("Address of addr variable: %x\n", (unsigned int) &addr);
    printf("\nEnter a (hex) number: ");
    scanf("%x", &addr);
    printf("Enter the number of bytes to view: ");
    scanf("%d", &n);

    printf("\n");
    printf(" Address               Bytes           Characters\n");
    printf(" -------    ------------------------   ----------\n");
    
    ptr = (BYTE *) addr;
    // cast to 'BYTE *' (aka 'unsigned char *') from smaller integer type 'unsigned int' [-Wint-to-pointer-cast]'
    
    for (; n > 0; n -= 10) {
        printf("%8X  ", (unsigned int) ptr);
        for (i = 0; i < 10 && i < n; i++)
            printf("%.2X ", *(ptr + i));
        for (; i < 10; i++)
            printf("   ");
        printf("  ");
        for (i = 0; i < 10 && i < n; i++) {
            BYTE ch = *(ptr + i);
            if (!isprint(ch))
                ch = '.';
            printf("%c", ch);
        }
        printf("\n");
        ptr += 10;
    }

    return 0;
}
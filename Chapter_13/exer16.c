/* Counts number of space in string */

//Original edition
int count_space(const char s[])
{
    int count = 0; i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            count++;
    
    return count;
}

//While edtion
int count_space(const char *s)
{
    int count = 0;

    while (*s++ == ' ')
        count++;
 
    return count;
}
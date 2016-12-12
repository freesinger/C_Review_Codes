//(a) Jump null char before reading
int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i == 0 && isspace(ch))
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

//(b) Stop reading when meet first '\0'
int read_line(char str[], int n)
{
    int ch, i = 0;

    while (!isspace(ch))
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

//(c) Stop and store the first '\n' into str[]
int read_line(char str[],int n)
{
    int ch, i = 0;

    do {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}

//(d) Store only n chars in str[], save extra chars
int read_line(char str[], int n)
{
    int ch, i = 0;

    for (i = 0; i < n; i ++) {
        ch = getchar();
        if (ch == '\n')
            break;
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
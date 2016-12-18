/* Find country by the state-number */

#include <stdio.h>

#define  NUM_COUNTRIES \
        ((int)((sizeof(country_codes)) / sizeof(country_codes[0])))

int main(void)
{
    int number;

    struct dialing_code {
        char *country;  //must be pointer here    char *
        int code;
    };

    const struct dialing_code country_codes[] = 
    {
        {"Brazil",      55}, {"China",       86},
        {"Colombia",    57}, {"Egypt",       20},
        {"France",      33}, {"Germany",     49},
        {"India",       91}, {"Italy",       39},
        {"Russia",       7}, {"USA",          1}
    };

    while (1) {
        int i;

        printf("Enter state-number: ");
        scanf("%d", &number);

        for (i = 0; i < NUM_COUNTRIES; i++)
            if (number == country_codes[i].code) {
                printf("Corresponding country: %s\n", 
                        country_codes[i].country);
                return 0;
            }
        printf("No corresponding country.\n");
        printf("\n");
    }
}
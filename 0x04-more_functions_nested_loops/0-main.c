#include "0-main.h"

int main(void)
{
    int c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));

    c = 'a';
    printf("%c: %d\n", c, _isupper(c));

    c = 'Z';
    printf("%c: %d\n", c, _isupper(c));

    c = 'z';
    printf("%c: %d\n", c, _isupper(c));

    return (0);
}


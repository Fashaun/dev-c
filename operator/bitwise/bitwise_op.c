#include <stdio.h>
int main(void)
{
    unsigned int a = 29;
    unsigned int b = 48;
    int c = 0;
    /* 29 = 0001 1101 */
    /* 48 = 0011 0000 */
    /* 32 = 0001 0000 */
    c=a&b;
    printf("%d & %d = %d\n", a, b, c );
    c=a|b; /* 61 = 0011 1101 */ printf("%d | %d = %d\n", a, b, c );
    c=a^b; /* 45 = 0010 1101 */ printf("%d ^ %d = %d\n", a, b, c );
    // NOT
    c = ~a; /* -30 = 1110 0010 */ printf("~%d = %d\n", a, c );
    c = a << 2; /* 116 = 0111 0100 */ printf("%d << 2 = %d\n", a, c );
    c = a >> 2; /* 7 = 0000 0111 */ printf("%d >> 2 = %d\n", a, c );
    return 0;
}

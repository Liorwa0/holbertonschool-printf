#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello %s! Character: %c, Percent: %%\n", "World", 'A');
    _printf("Length printed: %d\n", len);
    return (0);
}

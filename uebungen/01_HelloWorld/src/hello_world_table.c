// Zweite Übung "Hello World Zeichentabelle"

#include <stdio.h>

int main()
{
    int i;
    char hw_text[] = "Hello World\n";

    for (i=0; i<sizeof(hw_text); ++i)
    {
        printf("%2d  %c  %3d  %02x\n", i, hw_text[i], hw_text[i], hw_text[i]);
    }
    
    return 0;
}

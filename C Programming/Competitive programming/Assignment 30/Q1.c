#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("%-10s %-10s %-10s %-10s\n","Symbol", "Decimal", "Hex", "Octal");
    printf("------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if((i >= 0 && i < 32) || i == 127)
        {
            printf("%-10s %-10d %-10X %-10o\n",
                   "CTRL", i, i, i);
        }
        else
        {
            printf("%-10c %-10d %-10X %-10o\n",
                   (unsigned char)i, i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();
    return 0;
}
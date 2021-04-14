#include <stdio.h>

int count;
extern void write_extern();

int main()
{
    count = 7;

    write_extern();
}
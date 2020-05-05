#include <stdio.h>

int main()
{
//A
int j = -2;
for(int i = 0 ; i < 3 ; i++)
{
    if(j + 2 == 2 || j + 2 == 3)
        j--;
    else if(j + 2 == 0)
        j += 2;
    else
        j = 0;
    if(j > 0)
        goto A
    j = 3 - i;
}
A:
    return 0;
}
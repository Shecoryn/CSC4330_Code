#include <stdio.h>

int main()
{
//A
int j = -3;
for(int i = 0 ; i < 3 && j <= 0 ; i++)
{
    switch( j + 2 )
    {
        case 3 :
        case 2 : j--;
        continue;
        case 0 : j += 2;
        continue;
        default : j = 0;
    }
    j = 3 - i;

}
    return 0;
}
#include <stdio.h>
void main()
{
    char c;
    printf("Enter Designation:");
    scanf("%c", &c);
    switch (c)
    {
    case 'P':
    printf("President");
        break;
        case 'V':
        printf("Vice Presidnt");
        break;
    case 'C':
    printf("Chairman");
    break;
    case 'H':
    printf("Head Of Department");
    break;
    case 'A':
    printf("Accontant");
        break;
    }
}
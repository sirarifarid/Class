#include <stdio.h>

int main()
{
    int score;
    printf("Enter student score: ");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 10:
    case 9:
    case 8:
        printf("Student got A+");
        break;
    case 7:
        printf("Student got A");
        break;
    case 6:
        printf("Student got A-");
        break;
    case 5:
        printf("Student got B");
        break;
    case 4:
        printf("Student got C");
        break;
    default:
        printf("Student got F");
    }
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    switch (tolower(a))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel", a);
        break;
    default:
        printf("%c is not a vowel", a);
    }

    return 0;
}

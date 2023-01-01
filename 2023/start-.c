#include <stdio.h>
#include <time.h>
#include <string.h>

void main()
{
    char a[100];
    char Enter[10];
    time_t ct;
    struct tm *now;
    ct = time(NULL);
    now = localtime(&ct);

    printf("Happy New Year!!,%d/%d/%d %2d:%2d;%2d\n", (now->tm_year)+1900, (now->tm_mon)+1, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec);
    gets(Enter);
    strcpy(a, "Happy!!");
    while(1)
    {
        printf("%s", a);
        strcat(a, "Happy!!");
    }
}
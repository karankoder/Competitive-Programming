#include <stdio.h>
#include <string.h>
int main()
{
    int in, p = 0;
    char name[] = "<h1>           my name is karan              <h1>";
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == '>')
        {
            in = 0;
            continue;
        }
        else if (name[i] == '<')
        {
            in = 1;
            continue;
        }
        if (in == 0)
        {
            name[p] = name[i];
            p++;
        }
    }
    name[p] = '\0';
    // removing of trailing spaces from the begining
    while (name[0] == ' ')
    {
        for (int i = 0; i < strlen(name); i++)
        {
            name[i] = name[i + 1];
        }
    }
    // removing of trailing spaces from the end
    while (name[strlen(name) - 1] == ' ')
    {
        name[strlen(name) - 1] = '\0';
    }

    printf("String after parsing.........\n");
    printf("~~%s~~", name);

    return 0;
}
#include <stdio.h>
#include <string.h>

char* find(char *, char);
int main()
{
    char haystack[400];
    char needle;
    char *index_holder = 0;
    
    scanf("%[^\n]s",haystack);
    getchar();
    scanf("%c",&needle);
    
    if(find(haystack ,needle) == NULL)
    {
        printf("-1\n");
    }
    else
    {
        index_holder = find(haystack ,needle);
        printf("%d\n",(int)(index_holder - haystack));
    }
    return 0;
}

char* find(char *haystack ,char needle)
{
    int counter = 0;
        
    while(haystack[counter] != '\0')
    {
        if(haystack[counter] == needle)
        {
            return &haystack[counter];
        }
        counter ++;
    }
    return NULL;
}
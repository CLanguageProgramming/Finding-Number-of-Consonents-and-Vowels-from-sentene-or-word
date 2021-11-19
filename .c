#include <stdio.h>
#include <string.h>
int main()
{
    char name[]={"Skanda Bharadwaj"};
    int cnt=0;
    for(int i=0;i<=strlen(name); i++)
    {
        if(name[i]=='a')
        {
            cnt++;
        }
        else if(name[i]=='e')
        {
            cnt++;
        }
        else if(name[i]=='i')
        {
            cnt++;
        }
        else if(name[i]=='o')
        {
            cnt++;
        }
        else if(name[i]=='u')
        {
            cnt++;
        }
        else
        {
            continue;
        }
    }
    int cons=strlen(name)-cnt;
    printf("Total number of vowels: %d", cnt);
    printf("\nTotal number of consonents: %d", cons);
}

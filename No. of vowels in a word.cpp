
/*
Write any word...
program can tell how many vowel on that word
*/


#include <stdio.h>

int main()
{
    char string;
    int i, vowels = 0;

    printf("Enter a string: ");
    scanf("%s", &word);

    for(i=0; word[i]!=0; ++i)
    {	
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u')
        {
            ++vowels;
        }
    }

    printf("Vowels: %d",vowels);
    return 0;
}


/*
Write any word...
program can tell how many vowel on that word
*/


#include <stdio.h>

int main()
{
    char word[100];
    int i=0,space =0, vowels = 0, numbers = 0,specials=0, consonants = 0;

    printf("Enter a string: ");
    gets (word);

    while(word[i]!='\0')
    {	
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' ||
           word[i]=='O' || word[i]=='U')
        {
            vowels++;
        }
        else if(word[i]>='a' && word[i]<='z' || word[i]>='A' && word[i]<='Z')
        {
        	consonants++;
		}
		else if(word[i]>='0' && word[i]<='9')
		{
			numbers++;
		}		
		else if(word[i]==' ')
		{
			space++;
		}
		else if(word[i]>= 0 && word[i]<=47 || word[i]>= 58 && word[i]<=64 || word[i]>= 91 && word[i]<= 96 || word[i]>= 123 && word[i]<= 255)
		{
			specials++;
		}
		i++;
    }

    printf("Vowels: %d\n",vowels);
    printf("consonants: %d\n",consonants);
    printf("Number: %d\n",numbers);
    printf("space: %d\n",space);
    printf("Special Character: %d",specials);

	return 0;
}

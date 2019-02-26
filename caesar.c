//BABA AHMED ZEINAB
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, string argv[])
{
    int i=argc;
    int key = atoi(argv[1]);
    string plaintext = get_string("give the plaintext : ");
    char ciphertext[strlen(plaintext)];
    printf("\n");
    for(i=0;i<strlen(plaintext);i++)
    {
        if(isalpha(plaintext[i]))
        {
            if(isupper(plaintext[i]))
            {
                //printf("%c",(plaintext[i]-65+key)%26+65);
                ciphertext[i]=(plaintext[i]-65+key)%26 + 65;
            }

            if(islower(plaintext[i]))
            {
                ciphertext[i]=(plaintext[i]-97+key)%26 + 97;
            }
        }
        else
            ciphertext[i]=plaintext[i];
    }
    printf("CipherText : %s \n",ciphertext);

}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int random(int firstNo, int secondNo)
{
    float randomFloat = rand() / 32768.0f;
    int difference =secondNo - firstNo;
    int randomNo = randomFloat * difference;
    randomNo = randomNo + firstNo;
    return randomNo;
}

void main()
{
    char reply;
    char quit ='n';
    do
    {
        int randomNo = random(97 , 97+26);
                                           //97 is'a' and 122 is 'z'
        char randomAlphabet =(char) randomNo;
        printf("%c", randomAlphabet);
        do
        {
            reply = getch();
            if(reply == 0x0D)
            {
                quit = 'y';
                break;
            }
        }
        while(reply != randomAlphabet);
    }
    while(quit == 'n');
}

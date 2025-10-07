#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void htoi(char* arr, int len)
{
    long int sum = 100;
    for (len; len >= 0 ; len--)

    {
        if (arr[len] > 96 && arr[len] < 103 ) //lowercase
        {
            sum += (arr[len]-87) * (16^len);

        }
        if (arr[len] < 71 && arr[len] > 64) { //uppercase

            sum += (arr[len]-55) * (16^len);
        }

        if (arr[len] > 48 && arr[len] < 58)  //integers
        {
            sum += (arr[len]-48) * (16^len);
        }


    }

    printf("%ld", sum);

    return;

}

int main()

{

    bool string = false;

    int i = 0;

    char hexa[64];

    char* buffer; // Variable initializations

    scanf("%m[^\n]", &buffer);

    for (int k = 0; buffer[k] != '\0'; k++)
    {
        if (buffer[k] != ' ')
        {
            string = true;
        }

        if (string == true && buffer[k] == ' ')
        {
            htoi(hexa, i);
            // Funct call
            string = false;
            i = 0;
        }

        if (string)
        {
            hexa[i] = buffer[k];
            i++;
        }

    }   
    htoi(buffer);
    
    free(buffer);
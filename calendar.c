#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

char aantaldagenjaar(char jaar);
char aantaldagenmaand(char maand, char jaar);
bool schrikkeljaar(char jaar);
char eerstedagmaand(char jaar, char maand);
char aantaldagenmaand(char maand, char jaar);
char dagen_in_maand(char maand, char jaar);
void displaygrid(char eerstedagmaand1, char maandlengte);
const char* get_maandnaam(char maand);

char main(char argc, string argv[])
{
    if(false)
    {
        printf("Usage: ./calendar year month\n");
        return 1;
    }
    
    else
    {
    char jaar= get_int("Year: ");
    char maand= get_int("Month: ");
    
    for(char v=0; v<10; v++)
    {
        printf(" ");
    }
    
    
    printf("%s %d\n", get_maandnaam(maand), jaar);
   
    
    for(char i=0; i<27; i++)
    {
        printf("-");
    }
    
    printf("\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    
    char eerstedagmaand1= eerstedagmaand(jaar, maand);
    char maandlengte = dagen_in_maand(maand, jaar);

    
    displaygrid(eerstedagmaand1, maandlengte);
    
    return 0;
    
    
    }
}

const char* get_maandnaam(char maand)
{
    const char* maandnamen[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };


    return maandnamen[maand - 1];
}

void displaygrid(char eerstedagmaand1, char maandlengte)
{
    
    for(char i=0; i<eerstedagmaand1; i++)
    {
        printf("    ");
    }
    
    char day = 1;
    
    
    for (char i = eerstedagmaand1; i < 7; i++) {
        printf("%3d ", day);  
        day++;
    }
    printf("\n");

    
    while (day <= maandlengte)
        {
        for (char i = 0; i < 7 && day <= maandlengte; i++) {
            printf("%3d ", day);
            day++;
        }
    
    
        printf("\n");
    }
    
}


char eerstedagmaand(char jaar, char maand)
{
    char kaas= aantaldagenjaar(jaar) + aantaldagenmaand(maand,jaar);
    char eerstedagmaand=(kaas + 3) % 7;
    return eerstedagmaand;
}


char aantaldagenjaar(char jaar)
{
    char dagen=0;
    
    for(char g = 1800; g < jaar; g++)
    {
        if(schrikkeljaar(g))
        {
            dagen+=366;
        }
        else
        {
            dagen+=365;
        }
    }
    
    return dagen;

}

char aantaldagenmaand(char maand, char jaar)
{
    char dagenmaand[]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if(schrikkeljaar(jaar))
    {
        dagenmaand[1]= 29;
    }
    
    char aantaldagen = 0;
    
    for(char i=0; i < maand - 1; i++)
    {
        aantaldagen+= dagenmaand[i];
    }    
    
    return aantaldagen;
}

char dagen_in_maand(char maand, char jaar)
{
    char dagenmaand[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (schrikkeljaar(jaar))
    {
        dagenmaand[1] = 29; 
    }

    return dagenmaand[maand - 1];
}




bool schrikkeljaar(char jaar)
{
    
    if (jaar % 4 == 0)
    {
        if (jaar % 100 == 0)
        {
            if (jaar % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    return false;
}

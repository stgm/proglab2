#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

int aantaldagenjaar(int jaar);
int aantaldagenmaand(int maand, int jaar);
bool schrikkeljaar(int jaar);
int eerstedagmaand(int jaar, int maand);
int aantaldagenmaand(int maand, int jaar);
int dagen_in_maand(int maand, int jaar);
void displaygrid(int eerstedagmaand1, int maandlengte);
const char* get_maandnaam(int maand);

int main(int argc, string argv[])
{
    if(false)
    {
        printf("Usage: ./calendar year month\n");
        return 1;
    }
    
    else
    {
    int jaar= get_int("Year: ");
    int maand= get_int("Month: ");
    
    for(int v=0; v<10; v++)
    {
        printf(" ");
    }
    
    
    printf("%s %d\n", get_maandnaam(maand), jaar);
   
    
    for(int i=0; i<27; i++)
    {
        printf("-");
    }
    
    printf("\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    
    int eerstedagmaand1= eerstedagmaand(jaar, maand);
    int maandlengte = dagen_in_maand(maand, jaar);

    
    displaygrid(eerstedagmaand1, maandlengte);
    
    return 0;
    
    
    }
}

const char* get_maandnaam(int maand)
{
    const char* maandnamen[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };


    return maandnamen[maand - 1];
}

void displaygrid(int eerstedagmaand1, int maandlengte)
{
    
    for(int i=0; i<eerstedagmaand1; i++)
    {
        printf("    ");
    }
    
    int day = 1;
    
    
    for (int i = eerstedagmaand1; i < 7; i++) {
        printf("%3d ", day);  
        day++;
    }
    printf("\n");

    
    while (day <= maandlengte)
        {
        for (int i = 0; i < 7 && day <= maandlengte; i++) {
            printf("%3d ", day);
            day++;
        }
    
    
        printf("\n");
    }
    
}


int eerstedagmaand(int jaar, int maand)
{
    int kaas= aantaldagenjaar(jaar) + aantaldagenmaand(maand,jaar);
    int eerstedagmaand=(kaas + 3) % 7;
    return eerstedagmaand;
}


int aantaldagenjaar(int jaar)
{
    int dagen=0;
    
    for(int g = 1800; g < jaar; g++)
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

int aantaldagenmaand(int maand, int jaar)
{
    int dagenmaand[]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if(schrikkeljaar(jaar))
    {
        dagenmaand[1]= 29;
    }
    
    int aantaldagen = 0;
    
    for(int i=0; i < maand - 1; i++)
    {
        aantaldagen+= dagenmaand[i];
    }    
    
    return aantaldagen;
}

int dagen_in_maand(int maand, int jaar)
{
    int dagenmaand[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (schrikkeljaar(jaar))
    {
        dagenmaand[1] = 29; 
    }

    return dagenmaand[maand - 1];
}




bool schrikkeljaar(int jaar)
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

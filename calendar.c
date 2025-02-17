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




string maand;  
int dagen;
  if (maand_nummer == 1)
  {
      maand = "Jan";
      dagen = 31;
  }
  if (maand_nummer == 2)
  {
      maand = "Feb";
    
      if ((jaar_nummer%4==0&&jaar_nummer%100!=0)||jaar_nummer%400==0)
      {
          dagen =29;
          
      }
      else
      {
          dagen =28;
          
      }
      
      
      
  }
  if (maand_nummer == 3)
  {
      maand = "Mar";
      dagen = 31;
  }
  if (maand_nummer == 4)
  {
      maand = "Apr";
      dagen = 30;
  }
  if (maand_nummer == 5)
  {
      maand = "Mei";
      dagen = 31;
  }
  if (maand_nummer == 6)
  {
      maand = "Jun";
      dagen = 30;
  }
  if (maand_nummer == 7)
  {
      maand = "Jul";
      dagen = 31;
  }
  if (maand_nummer == 8)
  {
      maand = "Aug";
      dagen = 31;
  }
  if (maand_nummer == 9)
  {
      maand = "Sep";
      dagen = 30;
  }
  if (maand_nummer == 10)
  {
      maand = "Okt";
      dagen = 31;
  }
  if (maand_nummer == 11)
  {
      maand = "Nov";
      dagen = 30;
  }
  if (maand_nummer == 12)
  {
      maand = "Dec";
      dagen = 31;
  }
  
  int nummers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
////

       

        printf("%13s %i\n", maand, jaar_nummer);
        printf("---------------------------\n");
        printf("Sun Mon Tue Wed Thu Fri Sat\n");
        
        
        int los = gap(maand_nummer, jaar_nummer);
        
        for(int niks=0;niks<los;niks++)
            {
                printf("    ");
            }
            
        
        for(int plek=0;plek<dagen;plek++)
        {
            printf("%3i ",nummers[plek]);
            
            if(6-los == plek||13-los == plek||20-los == plek||27-los == plek||34-los == plek)
            {
                printf("\n");
            }
            
            
        }
        printf("\n");
            
        
        
        
    
    
}


int gap(int maand_nummer, int jaar_nummer)
{
    
    int optellen = jaar_nummer-1800;
    int dagen_na = 0;
    
    
    int schrikkel_=0;
    int niet =0;
   
    
    for(int jaar=0;jaar<optellen;jaar++)
    {
        
      
        
        if (jaar%4==0&&jaar%100!=0)
        {
            dagen_na += 366;
            schrikkel_++;
                    
            
        }
        else
        {
            dagen_na += 365;
            
        }
        
    }
    printf("schrikkel %i\n", schrikkel_);
    
    for (int over = 1600;over<jaar_nummer;over++)
    {
       if (over - 1600 == 400||over - 1600 == 800||over - 1600 == 1200)
       {
           dagen_na += 1;
       }
    }
   
    
   
    
    int m_normaal[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int m_ander[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    
        
    if ((jaar_nummer%4==0&&jaar_nummer%100!=0)||jaar_nummer%400==0)
    {
        for (int tot=0;tot<maand_nummer-1;tot++)
        {
            dagen_na += m_ander[tot];
            
        }
    }
    else
    {
        for (int tot=0;tot<maand_nummer-1;tot++)
        {
           
            dagen_na += m_normaal[tot];
            
            
        }
    }
    
    printf("dagen = %i\n", dagen_na);
   int losse_dagen = (dagen_na+3)%7;
   
   return losse_dagen;
}

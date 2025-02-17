#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int gap(int maand_nummer, int jaar_nummer);


int main(int argc, string argv[])
{

    int maand_nummer = get_int("Year: ");
    int jaar_nummer = get_int("Month: ");
    
    
    
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

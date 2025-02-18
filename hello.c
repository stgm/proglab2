#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <cs50.h>



int main(void)
{
    get_int("HALLO? ");
    srand(time(NULL));
    printf("%d\n", rand());
    printf("%d\n", rand());
}

  
  
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    get_input("HALLO? ");
    srand(time(NULL));
    printf("%d\n", rand());
    printf("%d\n", rand());
}

  
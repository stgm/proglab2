#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    printf("%f", rand());
}

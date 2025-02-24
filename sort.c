/**
 * Generates an array of random numbers, then sorts and prints them.
 *
 * Usage: ./sort <n>
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// maximum amount of hay
#define LIMIT 65536

// Fills array of size n with random numbers
void generate_random_numbers(int arr[], int n);

// Sorts array of n values
void sort(int values[], int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./sort <n>\n");
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 0 || size > MAX)
    {
        printf("Please enter a valid size between 1 and %d\n", MAX);
        return 1;
    }

    // seed the random number generator
    srand48((long int) time(NULL));

    // generate random numbers
    int haystack[size];
    generate_random_numbers(haystack, size);

    // sort the array
    sort(haystack, size);

    // print the sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", haystack[i]);
    }
}

// Fills array of size n with random numbers
void generate_random_numbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int) (drand48() * LIMIT); // random number between 0 and 999
    }
}

// Sorts array of n values
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}

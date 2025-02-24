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
const int MAX = 65536;

// Sorts array of n values
void sort(int values[], int n);

// Function to generate an array of n random numbers
void generate_random_numbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000; // Random number between 0 and 999
    }
}

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

    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers
    int haystack[size];
    generate_random_numbers(haystack, size);

    // Sort the array
    sort(haystack, size);

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", haystack[i]);
    }

    // Sorts array of n values
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}

}

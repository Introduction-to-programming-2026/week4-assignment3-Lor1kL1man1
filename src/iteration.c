/*
WEEK 1 — TASK 1 (Iteration)

Goal:
Practice loops and input validation.

Task:
1. Ask the user for a positive integer n.
2. If n < 1, ask again until valid.
3. Print a half-pyramid using # symbols.

Example:
Input: 4

Output:
#
##
###
####

Rules:
- You must use loops (for or while).
- No recursion allowed.
- Output must match exactly.
*/
// Draws a pyramid using iteration

#include <cs50.h>   // Library for get_int()
#include <stdio.h>  // Library for printf()

// Function prototype: declares a function that draws the pyramid
void draw(int n);

int main(void)
{
    // Ask the user to enter the height of the pyramid
    int height = get_int("Height: ");

    // Call the draw function and pass the height
    draw(height);
}

// Function that prints a left-aligned pyramid of height n
void draw(int n)
{
    // Outer loop controls the number of rows
    // It runs n times (from 0 to n-1)
    for (int i = 0; i < n; i++)
    {
        // Inner loop prints the correct number of # symbols per row
        // For row i, it prints (i + 1) hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // After printing hashes, move to the next line
        printf("\n");
    }
}

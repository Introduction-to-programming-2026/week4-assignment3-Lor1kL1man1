/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/


#include <cs50.h>
#include <stdio.h>


int main(void){

   int numbers[]= {20,500,10,5,100,1,50};

   int n = get_int("What number are you searching for? ");

   for(int i = 0; i < 7; i ++){

      if (numbers[i] == n){
         printf("Found\n");
      }
   }
      printf("Not Found\n");
      return 1;



}

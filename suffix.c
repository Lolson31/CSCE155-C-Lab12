/**
 * Author: Luke Olson
 *
 * This program removes the first printable character of a string until there is one left
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 void suffix(char *input);

 int main(int argc, char const *argv[])
 {
   if (argc != 2)
   {
     printf("Too few inputs, use like this: ./a.out "I enjoy walks"\n");
     exit (1);
   }


   return 0;
 }

 void suffix(char *input)
 {
   int leftIndex = 0;
   int rightIndex = strlen(input);

   if (leftIndex == rightIndex)
   {
     printf("%s\n", input[leftIndex]);
     exit (1);
   }
   else
   {
     for (int i = leftIndex; i < rightIndex; i++)
     {
       printf("ds\n", input[i]);
     }
     leftIndex++;
   }
 }

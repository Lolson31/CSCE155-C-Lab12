/**
 * Author: Luke Olson
 *
 * A recursive function that calculats the nth term of a Jacobsthal seqeunce
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 /**
  * finds the nth term of a jacobsthal series
  */
 int jacobsthal(int term);

 int main(int argc, char const *argv[])
 {
   if (argc != 2)
   {
     printf("Invalid number of arguments\n");
     exit(1);
   }

   int term = atoi(argv[1]);
   int result = jacobsthal(term);

   printf("The %d term is %d\n",term, result);

   return 0;
 }

 int jacobsthal(int term)
 {
   int currTerm = 0;
   int result = 0;
   if (currTerm == term)
   {
     return (result);
   }
   else
   {
     result = jacobsthal(currTerm) + jacobsthal((currTerm + 1) * 2);
   }
 }

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
   if (term == 0)
   {
     return (0);
   }
   else if (term == 1)
   {
     return (1);
   }
   else
   {
     return (jacobsthal(term - 1) + (2 * jacobsthal(term - 2)));
   }
 }

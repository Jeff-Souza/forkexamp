#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "sys/wait.h"

int counter=0;

int main()
{
    if (fork() == 0)
    {
	//child

        counter--;
	printf("child counter = %d\n", counter);

        exit(0);
   }
   else
   {
	//parent

        wait(NULL);

        printf("counter = %d\n", ++counter);
    }
   exit(0);
}

/*
 ============================================================================
 Name        : diff_time.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



/* difftime example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */

int main ()
{
  time_t now;

  double seconds;

  time(&now);  /* get current time; same as: now = time(NULL)  */



  time_t biggest = 0x7FFFFFFF;

  seconds = difftime(now,biggest);

  printf ("%.f seconds since biggest in the current timezone.\n", seconds);

  return 0;
}

/*
 * time_test.c
 *
 *  Created on: Aug 20, 2015
 *      Author: Bhavya
 */

#include <stdio.h>
#include <time.h>

//int main(){
//	time_t biggest = 0x7FFFFFFF;
//	struct tm local_date_time;
//	printf("biggest = %s",asctime(gmtime(&biggest)));
//	printf ("sizeof time_t is: %lu\n", sizeof(time_t));
//	printf ("Year is: %d\n", local_date_time.tm_year + 1900);
//	int tt = time_t time(time_t *t);
//	return 0;
//}



int main(void)
{
    time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));

    return 0;
}

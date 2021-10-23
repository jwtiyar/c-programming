/*
 * =====================================================================================
 *
 *       Filename:  IfPrimeOrNot.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20-Oct-21 14:56:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), jwtiyar@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
//#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{

	 int input; 
	scanf("%d", &input);
	for (int i=sqrt(input); i > 1;i--) 
	{
		if (input % 2 == 0) 
		{
			printf("%d Not prime\n",input);

		}else  
		{
			printf("%d is prime\n",input);
		}
		


	}
	return 0;
}
/* int main() */
/* { */
/* 	int input=9; */
/* 	int isPrime=true; */
/* 	for(int i = sqrt(input);i > 1; i--) */
/* 	{ */
/* 		printf("%d ",i); */
/* 		if(input % i == 0) */
/* 		{ */
/* 			isPrime=false; */
/* 		} */
/* 	} */
/* 	if (isPrime) */
/* 	{ */
/* 		printf("\nis prime\n"); */

/* 	}else */ 
/* 	{ */
/* 		printf("\nNot prime\n"); */
/* 	} */
/* } */

/*
 * =====================================================================================
 *
 *       Filename:  nestedfor.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20-Oct-21 14:29:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), jwtiyar@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int main () 
{
	for (int i =0 ; i < 11 ; i++)
	{
		for (int k = i ; k >= 0; k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}


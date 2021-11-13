/*
 * =====================================================================================
 *
 *       Filename:  MultiArray.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/11/2021 14:03:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), jwtiyar@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int derece [][3] = { //pewyste jmarey cplumn dyary bkey eger na compile nakat ( nazanm bo)
		{12,13,14},
		{15,16,17}
	};

//printf("%d ",derece[0][2]);
	for (int i=0; i < 2; i++)
	{
		for (int j=0; j <3; j++)
		{
			printf("%d ", derece[i][j]);
				
		};
		printf("\n"); // Eme bo eweye wekw table derchet listeke
	};	
	return 0;
}
  

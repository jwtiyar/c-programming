/*
 * =====================================================================================
 *
 *       Filename:  nestedloop.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19-Oct-21 10:29:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int main(){
	int nums[3][2] = {
									{1,2},
									{3,4},
									{5,6}
	};
	/* printf("%d\n", nums[1][1]); */
	int i, j; /* chnwke position */
	for (i = 0; i < 3; i++){  /*  lera boye 3 samna chwnke i=3*/
		for (j = 0; j < 2; j++){ /* lera boye 2 chnwke j=2*/
			printf("%d,",nums[i][j]);
		}
		printf("\njj");
	}

	return 0;


}


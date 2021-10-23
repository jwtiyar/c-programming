/*
 * =====================================================================================
 *
 *       Filename:  nestedif.c
 *
 *    Description: :	 
 *
 *        Version:  1.0
 *        Created:  20-Oct-21 13:08:05
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
	printf("Add a patient\n");
	printf("Viewing a aptient\n");
	printf("Searching a patient\n");
	printf("Exiting\n");
	
	int input;
	scanf("%d",&input);
	

	if(input ==1)
	{
		printf("Adding patieny\n");
	} else if (input == 2) {

		printf("View a patient\n");
	} else if (input ==3 ) {
		printf("search patient\n");
	} else if (input == 4) {
		printf("Exitimng...\n");
		printf("Do you want to save? \n");
		char q;
		getchar();
		scanf("%c",&q);
		if (q == 'Y' || q == 'y')
		{
			printf("Saving changes\n");
		} else if (q == 'N' || q == 'n') 
		{
			printf("Fine whatever!");
		} else {
			printf("Haxing detected self destructing :)\n");
		}
	} else
	{
		printf("Incorrect input\n");
	}
	return 0;

}

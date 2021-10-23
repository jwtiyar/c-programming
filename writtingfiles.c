/*
 * =====================================================================================
 *
 *       Filename:  writtingfiles.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19-Oct-21 14:19:30
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
int main() {
	char line[555];
	/* FILE * fpointer = fopen("tssxt.txt", "w"); /1*  "a " bo eweye file keye wek xoy bet w nwsynake bxeyte sery nek peshw bsretewe *1/ */
	/* fprintf(fpointer,"Hi Jwtyo"); */


	FILE * fpointer = fopen("tssxt.txt", "r");
	fgets(line,555,fpointer);
	printf("%s",line);
 	fclose(fpointer);
	return 0;
}


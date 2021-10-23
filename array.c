/*
 * =====================================================================================
 *
 *       Filename:  array.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09-Oct-21 15:24:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
/* int main(){ */
/* 	int myArray[5]={1,2,3,4,5}; // detwany awa bykey myArray[5] enca dway ewe dane be daneelementekena bnaseny. */
/* 	// herweha detwany emesh bkeyt bo katty update int myArray[]={1,2,3,4,5} */
/* 	for(int i=0;i<5;i++){ */
/* 		printf("value at the elemetn %d is:%d\n",i,myArray[i]); */
	

/* 	} */
/* } */


// Array with Loops

int main() 
{
	int size= 3 ;
	int derece[size];
	derece[0] = 1;
	derece[1] = 2;
	derece[2] = 3;
	for ( int i = 0; i < size; i++)
	{
		printf("%d ",derece[i]);
	}
	return 0;
}

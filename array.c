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
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int main(){
	int myArray[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		printf("value at the elemetn %d is:%d\n",i,myArray[i]);
	}
}

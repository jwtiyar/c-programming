/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19-Oct-21 13:52:49
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
	int main(){
	int age =30;
	int *pAge = &age;
	double gpa = 3.4;
	double *pGpa = &gpa;
	char grade = 'a';
	char *pgrade = &grade;

	printf("%p\n", &age);
	printf("%d\n", *&age);
	printf("%p\n", *&*&age); /* bem sheweye detwany byangorret dawakt*/
	printf("%d\n", *pAge); /* eme pey delen dereferrence bo ewey jmare seretayyeke bgerreneetewe*/



	return 0;
	}

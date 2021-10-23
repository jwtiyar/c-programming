/*
 * =====================================================================================
 *
 *       Filename:  memoryaddress.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19-Oct-21 11:35:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), jwtiyar@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
int main(){
	int age=30;
	double gpa=3.4;
	char grade='A';
	printf("Age: %p\nGpa: %p\nGrade: %p\n",&age, &gpa, &grade);
	/* bo dozynewey address memory aw gorrawe le memory pcbe shewey pointer debet bkret */



	return 0;


}

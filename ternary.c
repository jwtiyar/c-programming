/*
 * =====================================================================================
 *
 *       Filename:  ternary.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20-Oct-21 13:39:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), jwtiyar@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
// eme regeyeky tre bo if statement (Ternary)
#include <stdlib.h>
#include <stdio.h>
// eme be regey IF statement y asayyi

/* int main() */
/* { */
/* 	double money = 20; */
/* 	double cost = 25; */
/* 	if (money > cost) */
/* 	{ */
/* 	printf("You got it\n"); */
/* 	}else { */
/* 	printf("sorry.. you need %lf more money\n", cost - money); */
/* 	} */
/* 	return 0; */
/* } */


// eme regey Ternary e, ke bo statment eky sada dabet
int main()
{
	double money = 200;
	double cost = 25;
	money > cost ? printf("You can afford it\n"): printf("Sorry bro... you need %lf more moneyz\n", cost - money);
	// ^^ lere prsyareke dekeyt, ^^ lere eger rastbw eme det,, ^^ lere eme det eger hellebw
return 0;
}


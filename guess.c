/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16-Oct-21 12:45:50
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
	int number = 4;	
	int guess;
	int guesscount = 0;
	int guesslimit = 3;
while (guess != number){
	if (guesscount < guesslimit){
	printf("Enter a number: ");
	scanf("%d", &guess);
	guesscount++;
	}
	else {
		printf("You are out of guess");
		break;
	}
}
if (guess == number){
	printf("You Win");
}
}

/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20-Oct-21 11:25:24
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
// swicth bo integlars debet, nagnwjet bo Range herweha option ekeme bo nmwne pshtgyry logical operator nakat.
// le switch detwanyt character bekarbenyt ke degorren bo int be hoyb ASCI
// le switch debte case bkeyte newan dw colom ' y nek "
int main()
{	
	printf("%c\n\n",65); // lere int be %c nasand encameke debeta character
	int A = "A";
	switch(A)
	{
		case ('A'): //Herweha lerash case jmare 65 bw bellam be condition y switch "A" encamy da.
			printf("Yes its A = 65\n");
			break;
	}
	

	int slices;
	int caloriesperslice = 250;
	printf("Plkease Enter a number\n");
	scanf("%d",&slices);
	switch(slices)
	{
		case 1:
			printf("Great\n");
			break;
		case 2:
			printf("Good\n");
			break;
		case 3:
			printf("Not bad\n");
			break; 
		case 4:
			printf("dissappointed\n");		
			break;
		default:
			printf("You need a Pizza\n");
			break;

	}
	printf("Ewne caloriye: %d\n ", caloriesperslice * slices);
	return 0;


}


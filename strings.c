/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/11/2021 14:41:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jwtiyar Nariman (), jwtiyar@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// le struings hemw kat null character heye (\0) nabet be vhych sheweyak overwrote y bkey
// bo nmwne char a[2] = "h"
// debete h /0
// boye hemw kat drejy strung chendek bw danayky zyad dekat bo hallgrtny le jey \0
// nwwsynek 4 pyt bet debete 5 

int main()
{
	printf("What is ypur favorite food? ");
	char favFood[50]; //lere wtwmane 50 pyte bellam dabete 49 chwnke danayaek hallgyrawe bo null character
	scanf("%49s", favFood); // lere peman wt 49 charcter maximum werbgre

	printf("%s\n", favFood);
	
	//detwanyn check bkeyn null character dekewte kwewe
	int charCount = 0;
	//int charCount = strlen(favFood); // bem sheweye asantre bzany null character dekewte kwewe w pewyst be while loop nakat
	while (favFood[charCount] != '\0')
	{
		charCount++;
	}
	printf("null character iS At %d ", charCount); // lere wek debyny kota pyt ke le weshekada dernakewet deykat be Null Character
	return 0;
}

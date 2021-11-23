/*
 * Program: doWhileFunc
 * Author: Pheng Thao
 * Date: 9/28/2021
 * Purpose: Implement a do-while loop for illustration
 */

#include <stdio.h>

int dowhilefunc(int j)
{
	int i=8;
	//implement a simple do-while loop
	
	do {
		printf("Value of i: %d\n", i);
		i++;
	}while(i<j);

	return(0);
}//doWhileFunc

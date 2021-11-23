/*
 * Program: Implement a while structure
 * Author: Pheng Thao
 * Date: 9/28/2021
 * Purpose: Illustrate the implementation of a while loop
 */

#include <stdio.h>

int whilefunc(int j)
{
	int i = 0;

	//implement a simple while loop
	while (i < j)
	{
		printf("The value of j is %d\n",i);
		i++;
	}// while

	return(0);
}// whilefunc


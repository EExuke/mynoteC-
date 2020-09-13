/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : example.cpp
 *     FIRST CREATION DATE    : 2020/09/13
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2020/09/13
 *     FILE DESCRIPTION       :
** ************************************************************************** */

#include "example.h"

unsigned short thatNum = 8;
bool printMe = true;

/***************************************************************************************
 * Function Name : returnFactorial
 * Description   : 
 * @param [in ]  : 
 *               :
 * @param [out]  : NULL
 * @return       : 0
 ***************************************************************************************/
unsigned long returnFactorial(unsigned short num)
{
	unsigned long sum = 1;

	for (int i=1; i<=num; i++) {
		sum *= num;
	}
	
	if (printMe) {
		return sum;
	}else {
		return 0;
	}
	
}



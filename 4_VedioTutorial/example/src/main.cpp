/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : main.cpp
 *     FIRST CREATION DATE    : 2020/09/13
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2020/09/13
 *     FILE DESCRIPTION       :
** ************************************************************************** */

#include <iostream>
#include "example.h"

using namespace std;

extern unsigned short thatNum;
static bool printMe = false;
/****************************************************************************
 *  Function Name : main
 *  Description   : The Main Function.
 *  Input(s)      : argc - The numbers of input value.
 *                : argv - The pointer to input specific parameters.
 *  Output(s)     : NULL
 *  Returns       : 0
 ****************************************************************************/
int main(int argc, const char *argv[])
{
	unsigned short thisNum = 10;

	cout << thisNum << "! = " << returnFactorial(thisNum) << "\n\n";
	cout << thatNum << "! = " << returnFactorial(thatNum) << "\n\n";
	cout << headerNum << "! = " << returnFactorial(headerNum) << "\n\n";

	if (printMe) {
		cout << "calculate complete!" << endl;
	}
	

    return 0;
}


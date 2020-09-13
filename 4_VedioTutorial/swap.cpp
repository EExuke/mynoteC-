/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : swap.cpp
 *     FIRST CREATION DATE    : 2020/09/13
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2020/09/13
 *     FILE DESCRIPTION       : 模板函数实例
** ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

template <class T>
void myswap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

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
	int i1 = 100;
	int i2 = 200;
	cout << "before, i1 = " << i1 << ", i2 = " << i2 << endl;
	myswap(i1, i2);
	cout << "after, i1 = " << i1 << ", i2 = " << i2 << endl;

	string s1 = "EExuke";
	string s2 = "xuke";
	cout << "before, s1 = " << s1 << ", s2 = " << s2 << endl;
	myswap(s1, s2);
	cout << "after, s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}


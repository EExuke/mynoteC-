/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : stack.cpp
 *     FIRST CREATION DATE    : 2020/09/13
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2020/09/13
 *     FILE DESCRIPTION       : 模板类实例
** ************************************************************************** */

#include <iostream>
#include <string>

template <class T>
class Stack {
	public:
		Stack(unsigned int size = 100);
		~Stack();
		void push(T value);
		T pop();

	private:
		unsigned int size;
		unsigned int sp;
		T *data;
};

//构造器
template <class T>
Stack<T>::Stack(unsigned int size) {
	this -> size = size;
	data = new T[size];
	sp = 0;
}

//析构器
template <class T>
Stack<T>::~Stack() {
	delete [] data;
}

//push()
template <class T>
void Stack<T>::push(T value) {
	data[sp++] = value;
}

//pop()
template <class T>
T Stack<T>::pop() {
	return data[--sp];
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
	Stack<int> intStack(100);

	intStack.push(1);
	intStack.push(2);
	intStack.push(3);

	std::cout << intStack.pop() << std::endl;
	std::cout << intStack.pop() << std::endl;
	std::cout << intStack.pop() << std::endl;

    return 0;
}


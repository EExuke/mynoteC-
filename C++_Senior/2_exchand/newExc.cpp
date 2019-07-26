/**************************************************************************** **
 * 定义新的异常
 *
 * 您可以通过继承和重载 exception 类来定义新的异常。
 * 下面的实例演示了如何使用 std::exception 类来实现自己的异常：
 **************************************************************************** **/

#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
	const char * what () const throw ()
	{
		return "C++ Exception";
	}
};

int main()
{
	try
	{
		throw MyException();
	}
	catch(MyException& e)
	{
		std::cout << "MyException caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(std::exception& e)
	{
		//其他的错误
	}
}

//在这里，what() 是异常类提供的一个公共方法，它已被所有子异常类重载。这将返回异常产生的原因。
//

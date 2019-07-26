/**************************************************************************** **
 * C++ 中的预定义宏
 *
 * C++ 提供了下表所示的一些预定义宏：
 *
 * 	宏         	 描述
 * 	__LINE__   	 这会在程序编译时包含当前行号。
 * 	__FILE__   	 这会在程序编译时包含当前行号前文件名。
 * 	__DATE__   	 这会包含一个形式为 month/day/year 的字符串，它表示把源文件转换为目标代码的日期。
 * 	__TIME__   	 这会包含一个形式为 hour:minute:second 的字符串，它表示程序被编译的时间。
 *
 **************************************************************************** **/

#include <iostream>
using namespace std;

int main ()
{
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	cout << "Value of __TIME__ : " << __TIME__ << endl;

	return 0;
}



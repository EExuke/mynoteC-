/**************************************************************************** **
 * # 和 ## 运算符
 *
 * # 和 ## 预处理运算符在 C++ 和 ANSI/ISO C 中都是可用的。
 *  # 运算符会把 replacement-text 令牌转换为用引号引起来的字符串。
 *
 * 请看下面的宏定义：
 **************************************************************************** **/

#include <iostream>
using namespace std;

#define MKSTR( x ) #x

int main ()
{
	cout << MKSTR(HELLO C++) << endl;
	return 0;
}
/*
不难理解，C++ 预处理器把下面这行：

	cout << MKSTR(HELLO C++) << endl;

转换成了：

	cout << "HELLO C++" << endl;
*/


/*  ## 运算符用于连接两个令牌。下面是一个实例：
 *
 *   #define CONCAT( x, y )  x ## y
 *
 *  当 CONCAT 出现在程序中时，它的参数会被连接起来，并用来取代宏。
 *  例如，程序中 CONCAT(HELLO, C++) 会被替换为 "HELLO C++"，如下面实例所示。
 */
#if 0

#include <iostream>
using namespace std;

#define concat(a, b) a ## b
int main()
{
	int xy = 100;

	cout << concat(x, y);    //cout << concat(x, y); 转换成了 cout << xy;

	return 0;
}

#endif

/**************************************************************************** **
 * 条件编译
 *
 * 有几个指令可以用来有选择地对部分程序源代码进行编译。这个过程被称为条件编译。
 *
 * 	 #ifdef DEBUG
 * 	    cerr <<"Variable x = " << x << endl;
 * 	 #endif
 *
 * 如果在指令 #ifdef DEBUG 之前已经定义了符号常量 DEBUG，则会对程序中的 cerr 语句进行编译。
 *
 * 您可以使用 #if 0 语句注释掉程序的一部分，如下所示：
 * 	 #if 0
 * 	    不进行编译的代码
 * 	 #endif
 **************************************************************************** **/

#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) (((a)<(b)) ? a : b)

int main ()
{
	int i, j;
	i = 100;
	j = 30;
#ifdef DEBUG
	cerr <<"Trace: Inside main function" << endl;
#endif

#if 0
	/* 这是注释部分 */
	cout << MKSTR(HELLO C++) << endl;
#endif

	cout <<"The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
	cerr <<"Trace: Coming out of main function" << endl;
#endif
	return 0;
}



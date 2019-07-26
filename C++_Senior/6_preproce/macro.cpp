/**************************************************************************** **
 * 参数宏
 *
 * 您可以使用 #define 来定义一个带有参数的宏，如下所示：
 **************************************************************************** **/

#include <iostream>
using namespace std;

#define MIN(a,b) (a<b ? a : b)

int main ()
{
	int i, j;
	i = 100;
	j = 30;
	cout <<"较小的值为：" << MIN(i, j) << endl;

	return 0;
}


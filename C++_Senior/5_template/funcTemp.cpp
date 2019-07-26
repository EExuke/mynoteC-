/**************************************************************************** **
 * 函数模板
 *
 * 模板函数定义的一般形式如下所示：
 *
 * template <class type> ret-type func-name(parameter list)
 * {
 *    // 函数的主体
 * }
 *
 * 在这里，type 是函数所使用的数据类型的占位符名称。这个名称可以在函数定义中使用。
 *
 * 下面是函数模板的实例，返回两个数中的最大值：
 **************************************************************************** **/

#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b) 
{ 
	return a < b ? b:a; 
} 

int main ()
{
	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl; 

	double f1 = 13.5; 
	double f2 = 20.7; 
	cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

	string s1 = "Hello"; 
	string s2 = "World"; 
	cout << "Max(s1, s2): " << Max(s1, s2) << endl; 

	return 0;
}



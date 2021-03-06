/**************************************************************************** **
 * 数据封装的实例
 *
 * C++ 程序中，任何带有公有和私有成员的类都可以作为数据封装和数据抽象的实例。
 **************************************************************************** **/

#include <iostream>
using namespace std;

class Adder{
	public:
		// 构造函数
		Adder(int i = 0)
		{
			total = i;
		}
		// 对外的接口
		void addNum(int number)
		{
			total += number;
		}
		// 对外的接口
		int getTotal()
		{
			return total;
		};
	private:
		// 对外隐藏的数据
		int total;
};
int main( )
{
	Adder a;

	a.addNum(10);
	a.addNum(20);
	a.addNum(30);

	cout << "Total " << a.getTotal() <<endl;
	return 0;
}

/**************************************************************************** **
 * 上面的类把数字相加，并返回总和。公有成员 addNum 和 getTotal 是对外的接口，
 * 用户需要知道它们以便使用类。私有成员 total 是对外隐藏的，用户不需要了解它，
 * 但它又是类能正常工作所必需的。
 *
 * 设计策略:
 *
 * 通常情况下，我们都会设置类成员状态为私有（private），除非我们真的需要将其暴
 * 露，这样才能保证良好的封装性。
 * 这通常应用于数据成员，但它同样适用于所有成员，包括虚函数。
 **************************************************************************** **/

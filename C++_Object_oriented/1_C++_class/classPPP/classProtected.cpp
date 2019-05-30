/* 保护成员变量或函数与私有成员十分相似，
 * 但有一点不同，保护成员在派生类（即子类）中是可访问的
 * 下面的实例中，我们从父类 Box 派生了一个子类 smallBox。
 * 在这里 width 成员可被派生类 smallBox 的任何成员函数访问。
 */

#include <iostream>
using namespace std;

class Box
{
	protected:
		double width;
};

class SmallBox:Box // SmallBox 是派生类
{
	public:
		void setSmallWidth( double wid );
		double getSmallWidth( void );
};

// 子类的成员函数
double SmallBox::getSmallWidth(void)
{
	return width ;
}

void SmallBox::setSmallWidth( double wid )
{
	width = wid;
}

// 程序的主函数
int main( )
{
	SmallBox box;

	// 使用成员函数设置宽度
	box.setSmallWidth(5.0);
	cout << "Width of box : "<< box.getSmallWidth() << endl;

	return 0;
}


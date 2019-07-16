/* 私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。
 * 只有类和友元函数可以访问私有成员。
 * 默认情况下，类的所有成员都是私有的。
 */

#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		void setWidth( double wid );
		double getWidth( void );

	private:
		double width;
};

// 成员函数定义
double Box::getWidth(void)
{
	return width ;
}

void Box::setWidth( double wid )
{
	width = wid;
}

// 程序的主函数
int main( )
{
	Box box;

	// 不使用成员函数设置长度
	box.length = 10.0; // OK: 因为 length 是公有的
	cout << "Length of box : " << box.length <<endl;

	// 不使用成员函数设置宽度
	// box.width = 10.0; // Error: 因为 width 是私有的
	box.setWidth(10.0);  // 使用成员函数设置宽度
	cout << "Width of box : " << box.getWidth() <<endl;
	
	//不使用成员函数获得宽度
	// cout << "Width of box : " << box.width << endl ;

	return 0;
}


/* 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行
 * 构造函数的名称与类的名称是 完全相同的! 并且不会返回任何类型，也不会返回 void。
 * 默认的构造函数没有任何参数，但如果需要，构造函数也可以带有参数。这样在创建对象时就会给对象赋初始值:
 */

#include <iostream>

using namespace std;

class Line
{
	public:
		void setLength( double len );
		double getLength( void );
		Line(double len);  // 这是构造函数

	private:
		double length;
};

// 成员函数定义，包括构造函数
Line::Line( double len)
{
	cout << "Object is being created, length = " << len << endl;
	length = len;
}

void Line::setLength( double len )
{
	length = len;
}

double Line::getLength( void )
{
	return length;
}
// 程序的主函数
int main( )
{
	Line line(10.0);  //用构造函数，构造对象，并代参数

	// 获取默认设置的长度
	cout << "Length of line : " << line.getLength() <<endl;
	// 再次设置长度
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() <<endl;

	return 0;
}


/* 数据封装是面向对象编程的一个重要特点，它防止函数直接访问类类型的内部成员。
 * 类成员的访问限制是通过在类主体内部对各个区域标记 public、private、protected 来指定的。
 * 关键字 public、private、protected 称为访问修饰符。
 *
 * 一个类可以有多个 public、protected 或 private 标记区域。
 * 每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。
 * 成员和类的默认访问修饰符是 private。
 */


#include <iostream>

using namespace std;

class Line
{
	public:
		double length;
		void setLength( double len );
		double getLength( void );
};

// 成员函数定义
double Line::getLength(void)
{
	return length ;
}

void Line::setLength( double len )
{
	length = len;
}

// 程序的主函数
int main( )
{
	Line line;

	//设置长度
		line.setLength(6.0); 
	cout << "Length of line : " << line.getLength() <<endl;

	// 不使用成员函数设置长度
	line.length = 10.0; 	// OK: 因为 length 是公有的
	cout << "Length of line : " << line.length <<endl;
	return 0;
}

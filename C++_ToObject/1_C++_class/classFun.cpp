/* 类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样。
 * 类成员函数是类的一个成员，它可以操作类的任意对象，可以访问对象中的所有成员。
 *-----------------------------------------------------------------------------------
 * 成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义。
 * //内部定义：
 * class Box
 * {
 *    public:
 *       double length;      // 长度
 *       double breadth;     // 宽度
 *       double height;      // 高度
 *      	                   
 *       double getVolume(void)
 *       {
 *      	 return length * breadth * height;
 *       }
 * };
 * //内部声明，外部用 ‘::’ 定义：
 * 
 * double Box::getVolume(void)
 * {
 *     return length * breadth * height;
 * }
 *
 */

#include <iostream>

using namespace std;

class Box
{
	public:
		double length;         // 长度
		double breadth;        // 宽度
		double height;         // 高度

		// 成员函数声明
		double getVolume(void);
		void setLength( double len );
		void setBreadth( double bre );
		void setHeight( double hei );
};

// 成员函数定义
double Box::getVolume(void)
{
	return length * breadth * height;
}

void Box::setLength( double len )
{
	length = len;
}

void Box::setBreadth( double bre )
{
	breadth = bre;
}

void Box::setHeight( double hei )
{
	height = hei;
}

// 程序的主函数
int main( )
{
	Box Box1;                // 声明 Box1，类型为 Box
	Box Box2;                // 声明 Box2，类型为 Box
	double volume = 0.0;     // 用于存储体积

	// box 1 详述
	Box1.setLength(6.0); 
	Box1.setBreadth(7.0); 
	Box1.setHeight(5.0);

	// box 2 详述
	Box2.setLength(12.0); 
	Box2.setBreadth(13.0); 
	Box2.setHeight(10.0);

	// box 1 的体积
	volume = Box1.getVolume();
	cout << "Box1 的体积：" << volume <<endl;

	// box 2 的体积
	volume = Box2.getVolume();
	cout << "Box2 的体积：" << volume <<endl;
	return 0;
}


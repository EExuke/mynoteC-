/**************************************************************************** **
 * 访问控制和继承
 * 派生类可以访问基类中所有的非私有成员。因此基类成员如果不想被派生类的成员函数访问，则应在基类中声明为 private。
 * 我们可以根据访问权限总结出不同的访问类型，如下所示：
 * 		访问     	public 	   protected 	private	
 * 		同一个类 	yes    	   yes       	 yes   	
 * 		派生类   	yes    	   yes       	 no    	
 * 		外部的类 	yes    	   no        	 no    	
 *
 * 一个派生类继承了所有的基类方法，但下列情况除外：
 *     基类的构造函数、析构函数和拷贝构造函数。
 *     基类的重载运算符。
 *     基类的友元函数。
 *
 *
 *     公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
 *     保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
 *     私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。
 *
 *
 * 多继承:Shapes
 * 多继承即一个子类可以有多个父类，它继承了多个父类的特性。
 * C++ 类可以从多个类继承成员，语法如下：
 *
 *  	class <派生类名>:<继承方式1><基类名1>,<继承方式2><基类名2>,...
 *  	{
 *  	<派生类类体>
 *  	};
 * 其中，访问修饰符继承方式是 public、protected 或 private 其中的一个
 **************************************************************************** **/

#include <iostream>

using namespace std;

// 基类 Shape
class Shape
{
	public:
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
	protected:
		int width;
		int height;
};

// 基类 PaintCost
class PaintCost
{
	public:
		int getCost(int area)
		{
			return area * 70;
		}
};

// 派生类
class Rectangle: public Shape, public PaintCost
{
	public:
		int getArea()
		{
			return (width * height);
		}
};

int main(void)
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;

	// 输出总花费
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}




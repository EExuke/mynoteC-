#include <iostream>

using namespace std;

int main ()
{
	// 声明简单的变量
	int    i;
	double d;

	// 声明引用变量;(先引用；)
	int&    r = i;
	double& s = d;

	i = 5;       //（后赋值）
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r  << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s  << endl;

	i = 6; //change the Value;
	cout << "after change i the r = " << r << endl;

	return 0;
}


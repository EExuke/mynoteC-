/**************************************************************************** **
 * 数组的动态内存分配
 *
 * 假设我们要为一个字符数组（一个有 20 个字符的字符串）分配内存
 * 		char* pvalue  = NULL;   // 初始化为 null 的指针
 * 		pvalue  = new char[20]; // 为变量请求内存
 * 
 * 要删除创建的数组，语句如下：
 * 		delete [] pvalue;        // 删除 pvalue 所指向的数组
 *
 **************************************************************************** **/

/* ************************************************************************** **
 * 下面是 new 操作符的通用语法，可以为多维数组分配内存，如下所示：
 * 一维数组:
 * 		// 动态分配,数组长度为 m
 * 		int *array=new int [m]；
 *
 * 		//释放内存
 * 		delete [] array;
 *
 *
 * 二维数组:
 * 		int **array
 * 		// 假定数组第一维长度为 m， 第二维长度为 n
 * 		// 动态分配空间
 * 		array = new int *[m];
 * 		for( int i=0; i<m; i++ )
 * 		{
 * 		   array[i] = new int [n]  ;
 * 		}
 * 		//释放
 * 		for( int i=0; i<m; i++ )
 * 		{
 * 		   delete [] arrary[i];
 * 		}
 * 		delete [] array;
 *
 *
 * 三维数组
 * 		int ***array;
 * 		// 假定数组第一维为 m， 第二维为 n， 第三维为h
 * 		// 动态分配空间
 * 		array = new int **[m];
 * 		for( int i=0; i<m; i++ )
 * 		{
 * 			array[i] = new int *[n];
 * 			for( int j=0; j<n; j++ )
 * 			{
 * 				array[i][j] = new int [h];
 * 			}
 * 		}
 * 		//释放
 * 		for( int i=0; i<m; i++ )
 * 		{
 * 			for( int j=0; j<n; j++ )
 * 			{
 * 				delete array[i][j];
 * 			}
 * 			delete array[i];
 * 		}
 * 		delete [] array;

 * ************************************************************************** **/

#if 1    //二维数组实例

#include <iostream>
using namespace std;

int main()
{
	int **p;
	int i,j;   //p[4][8]
	//开始分配4行8列的二维数据
	p = new int *[4];
	for(i=0; i<4; i++)
	{
		p[i]=new int [8];
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<8; j++)
		{
			p[i][j] = j*i;
		}
	}
	//打印数据
	for(i=0; i<4; i++)
	{
		for(j=0; j<8; j++)
		{
			cout<<p[i][j]<<"\t";
			if(j==7)
				cout<<endl;
		}
	}
	//开始释放申请的堆
	for(i=0; i<4; i++)
	{
		delete [] p[i];
	}
	delete [] p;
	return 0;
}

#endif


#if 0    //三维数组实例

#include <iostream>
using namespace std;

int main()
{
	int i,j,k;   // p[2][3][4]

	int ***p;
	p = new int **[2];
	for(i=0; i<2; i++)
	{
		p[i]=new int *[3];
		for(j=0; j<3; j++)
			p[i][j]=new int[4];
	}

	//输出 p[i][j][k] 三维数据
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0;k<4;k++)
			{
				p[i][j][k]=i+j+k;
				cout<<p[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	// 释放内存
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			delete [] p[i][j];
		}
	}
	for(i=0; i<2; i++)
	{
		delete [] p[i];
	}
	delete [] p;
	return 0;
}

#endif

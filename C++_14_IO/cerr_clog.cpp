/*cerr 
 *预定义的对象 cerr 是 iostream 类的一个实例。cerr 对象附属到标准错误设备，通常也是显示屏，
 *但是 cerr 对象是非缓冲的，且每个流插入到 cerr 都会立即输出。
 */

#include <iostream>

using namespace std;

int main( )
{
	char str[] = "Unable to read....";

	cerr << "Error message : " << str << endl;
	clog << "Error message : " << str << endl;
}


/*clog
 *预定义的对象 clog 是 iostream 类的一个实例。clog 对象附属到标准错误设备，通常也是显示屏，
 *但是 clog 对象是缓冲的。这意味着每个流插入到 clog 都会先存储在缓冲在，直到缓冲填满或者缓冲区刷新时才会输出。
 */


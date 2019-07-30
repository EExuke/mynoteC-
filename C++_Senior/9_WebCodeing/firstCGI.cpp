/**************************************************************************** **
 * 第一个 CGI 程序.
 **************************************************************************** **/

#include <iostream>
using namespace std;

int main ()
{

	cout << "Content-type:text/html\r\n\r\n";
	cout << "<html>\n";
	cout << "<head>\n";
	cout << "<title>Hello World - 第一个 CGI 程序</title>\n";
	cout << "</head>\n";
	cout << "<body>\n";
	cout << "<h2>Hello World! 这是我的第一个 CGI 程序</h2>\n";
	cout << "</body>\n";
	cout << "</html>\n";

	return 0;
}

/*
 * 编译上面的代码，把可执行文件命名为 cplusplus.cgi，并把这个文件保存在 /var/www/cgi-bin 目录中。
 * 在运行 CGI 程序之前，请使用 chmod 755 cplusplus.cgi UNIX 命令来修改文件模式，确保文件可执行。
 * 访问可执行文件，您会看到下面的输出：
 *  	Hello World! 这是我的第一个 CGI 程序
 *
 * 上面的 C++ 程序是一个简单的程序，把它的输出写在 STDOUT 文件上，即显示在屏幕上。
 * 在这里，值得注意一点，第一行输出 Content-type:text/html\r\n\r\n。这一行发送回浏览器，并指定要显示在浏览器窗口上的内容类型。
 * 您必须理解 CGI 的基本概念，这样才能进一步使用 Python 编写更多复杂的 CGI 程序。
 * C++ CGI 程序可以与任何其他外部的系统（如 RDBMS）进行交互。
 */

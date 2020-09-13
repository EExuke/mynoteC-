# 文件位置指针

istream 和 ostream 都提供了用于重新定位文件位置指针的成员函数。
这些成员函数包括关于 istream 的 seekg（"seek get"）和关于 ostream 的 seekp（"seek put"）。

seekg 和 seekp 的参数通常是一个长整型。
第二个参数可以用于指定查找方向。
查找方向可以是 ios::beg（默认的，从流的开头开始定位），
      也可以是 ios::cur（从流的当前位置开始定位），
      也可以是 ios::end（从流的末尾开始定位）。

文件位置指针是一个整数值，指定了从文件的起始位置到指针所在位置的字节数。
下面是关于定位 "get" 文件位置指针的实例：

// 定位到 fileObject 的第 n 个字节（假设是 ios::beg）
	fileObject.seekg( n );
 
// 把文件的读指针从 fileObject 当前位置向后移 n 个字节
	fileObject.seekg( n, ios::cur );
 
// 把文件的读指针从 fileObject 末尾往回移 n 个字节
	fileObject.seekg( n, ios::end );
 
// 定位到 fileObject 的末尾
	fileObject.seekg( 0, ios::end );



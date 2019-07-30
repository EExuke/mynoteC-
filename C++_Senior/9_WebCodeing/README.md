# C++ Web 编程

什么是 CGI？

公共网关接口（CGI），是一套标准，定义了信息是如何在 Web 服务器和客户端脚本之间进行交换的。
CGI 规范目前是由 NCSA 维护的，NCSA 定义 CGI 如下：
公共网关接口（CGI），是一种用于外部网关程序与信息服务器（如 HTTP 服务器）对接的接口标准。
目前的版本是 CGI/1.1，CGI/1.2 版本正在推进中。

Web 浏览

您的浏览器联系上 HTTP Web 服务器，并请求 URL，即文件名。
Web 服务器将解析 URL，并查找文件名。如果找到请求的文件，Web 服务器会把文件发送回浏览器，否
则发送一条错误消息，表明您请求了一个错误的文件。
Web 浏览器从 Web 服务器获取响应，并根据接收到的响应来显示文件或错误消息。

然而，以这种方式搭建起来的 HTTP 服务器，不管何时请求目录中的某个文件，HTTP 服务器发送回来的
不是该文件，而是以程序形式执行，并把执行产生的输出发送回浏览器显示出来。

公共网关接口（CGI），是使得应用程序（称为 CGI 程序或 CGI 脚本）能够与 Web 服务器以及客户端
进行交互的标准协议。这些 CGI 程序可以用 Python、PERL、Shell、C 或 C++ 等进行编写。



# Web 服务器配置

在您进行 CGI 编程之前，请确保您的 Web 服务器支持 CGI，并已配置成可以处理 CGI 程序。
所有由 HTTP 服务器执行的 CGI 程序，都必须在预配置的目录中。
该目录称为 CGI 目录，按照惯例命名为 /var/www/cgi-bin。虽然 CGI 文件是 C++ 可执行文件，但是按照惯例它的扩展名是 .cgi。

默认情况下，Apache Web 服务器会配置在 /var/www/cgi-bin 中运行 CGI 程序。
如果您想指定其他目录来运行 CGI 脚本，您可以在 httpd.conf 文件中修改以下部分：
<Directory "/var/www/cgi-bin">
AllowOverride None
Options ExecCGI
Order allow,deny
Allow from all
</Directory>

<Directory "/var/www/cgi-bin">
Options All
</Directory>


# 教程：
# https://www.runoob.com/cplusplus/cpp-web-programming.html
--- HTTP 头信息
---
--- CGI 环境变量
---
--- C++ CGI 库
---
--- GET 和 POST 方法
---
--- 向 CGI 程序传递复选框数据
---
--- 向 CGI 程序传递单选按钮数据
---
--- 向 CGI 程序传递文本区域数据
---
--- 向 CGI 程序传递下拉框数据
---
--- 在 CGI 中使用 Cookies
---
--- 文件上传实例
---

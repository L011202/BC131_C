#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告

/*BC131  KiKi学程序设计基础
	@author:liang
	time:2024年3月30日15点27分
	题目描述:{BoBo老师教了KiKi学习程序设计基础，他知道C++是带类的C语言
			  这个“++”主要包含三部分内容：对C语言进行语法上的扩展、面向对象（封装、继承和多态）,STL(即模板)。
			  这学期KiKi学习了C和C++，学好他们，其他编程语言都可以很轻松掌握。
			  C和C++的输入有区别，请帮KiKi输出C和C++输出Hello world的代码。
*/

#include <stdio.h>

int main()
{
	printf("printf");
	printf("(\"Hello world!\\n\"); \n");
	printf("cout << \"Hello world!\" << endl;");
	return 0;
}
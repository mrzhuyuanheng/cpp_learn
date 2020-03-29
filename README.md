
2. 访问控制
	2.1 类的private和public
		2.1.1 类的属性，可以用private和public
			1. 属性有private关键字：属性只能由类内部的函数访问
			2. 属性有public关键字：属性可以由类外部的函数访问
			
		2.1.2 类的属性，大部分建议用private关键字
			这样可以防止类的属性被外部非法修改，引起异常

		2.1.3 类的函数，可以用private和public
			1. 有private关键字：不能被外部函数访问
			2. 有public关键字：可以被类外部的函数调用
				
	2.2 this指针
		this指针是指向这个类的指针

3. 代码结构
	3.1 类的方法在类外面实现
		1)可以在类内部声明方法，在类外部实现类的方法
	
	3.2 类在一个单独的文件下声明和实现（这样可以去耦合）
		3.2.1 在头文件声明类：			person.h
		3.2.2 在cpp文件实现类的方法：	person.cpp
	
	3.3 命名空间的引入
		3.3.1 命名空间的声明：在头文件和源文件（person.cpp 和 person.h）
		3.3.2 命名空间的使用（或引用）: 在其他源文件（例如在main.c里面使用）
	
	3.4 命名空间引用
		3.4.1 引用语句的位置：
			1. 全局：例如在main函数前面
			2. 局部：例如在main函数里面，在使用命名空间中的元素的前面
		
		3.4.2 引用的空间范围
			1. 直接包含头文件，直接声明和使用命名空间中的元素
				#include "person.h"			//包含头文件
				
				int main(){
					A::Person per 			//声明
					per.setName("yhzhu");	//使用			
				}
				
			2. 用到什么，引用什么：可在全局位置或具体位置
				using A::Person;			//在main函数前面
				using A::printVersion;		//在main函数前面
				
				int main(){
					Person per 				//声明
					per.setName("yhzhu");	//使用		
					
					printVersion();			//使用
				}		
				

			3. 全部的空间元素：
				using namespace A			//在main函数前面
				
				//然后直接使用其中的类和函数
				int main(){
					Person per 				//声明
					per.setName("yhzhu");	//使用		
					
					printVersion();			//使用
				}				

			4. 两个命名空间冲突的元素，在使用时一定要加上命名空间
				using namespace A			//在main函数前面
				using namespace C			//在main函数前面
				
				//然后直接使用其中的类和函数
				int main(){		
					A::printVersion();			//使用
					C::printVersion();			//使用
				}				
			
	3.5
	
	3.6 cout的引入
		3.6.1 cout的引入
		
		3.6.2 cout的命名空间的引入
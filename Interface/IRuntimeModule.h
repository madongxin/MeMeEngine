
//这是是声明这个头文件在编译的时候只需要处理一次。
//项目大了，同一个头文件可能会被多次包含（比如在包含的其它头文件里面又包含了同样的头文件）。
//由于编译器处理包含文件的方式是将其展开在源文件当中，所以如果不加这个条件编译指令，
//头文件的内容会在同一个源文件里面多次展开，
//那么编译器就会报错，说同一个东西被多次定义。这个条件编译指令对于很老的c / c++编译器来说是不认识的。
//如果遇到这种情况，就需要将其改成下面这种形式：

#ifndef __INTERFACE_H__
#define __INTERFACE_H__

#include "Interface.h"

namespace My {
	Interface IRuntimeModule{
public:
	virtual ~IRuntimeModule() {};

	virtual int Initialize() = 0;
	virtual void Finalize() = 0;

	virtual void Tick() = 0;
	};

}

#endif // __INTERFACE_H__

//�������������ͷ�ļ��ڱ����ʱ��ֻ��Ҫ����һ�Ρ�
//��Ŀ���ˣ�ͬһ��ͷ�ļ����ܻᱻ��ΰ����������ڰ���������ͷ�ļ������ְ�����ͬ����ͷ�ļ�����
//���ڱ�������������ļ��ķ�ʽ�ǽ���չ����Դ�ļ����У�����������������������ָ�
//ͷ�ļ������ݻ���ͬһ��Դ�ļ�������չ����
//��ô�������ͻᱨ��˵ͬһ����������ζ��塣�����������ָ����ں��ϵ�c / c++��������˵�ǲ���ʶ�ġ�
//��������������������Ҫ����ĳ�����������ʽ��

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
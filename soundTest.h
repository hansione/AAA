#pragma once
#include "gameNode.h"
#include "button.h"

class soundTest : public gameNode
{
private:
	button* _btnSceneChange;

public:
	soundTest();
	~soundTest();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	static void cbSceneChange();
};


#pragma once
#include "gameNode.h"
#include "soundTest.h"
#include "starScene.h"

class playGround : public gameNode
{
private:
	

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	
};

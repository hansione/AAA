#include "pch.h"
#include "starScene.h"
#include "battle.h"

starScene::starScene()
{
}


starScene::~starScene()
{
}

HRESULT starScene::init()
{
	IMAGEMANAGER->addImage("�о�", "bullet.bmp", 30, 30, true, RGB(255, 0, 255));

	_battle = new battle;
	_battle->init("battle", WINSIZEX / 2, WINSIZEY / 2);

	_action = new action;
	_action->init();

	_actionImage = IMAGEMANAGER->findImage("�о�");
	_actionImage->setX(WINSIZEX / 2);
	_actionImage->setY(WINSIZEY / 2);

	//50, 50���� 5�ʰ��� ���ļ� �������ڽ��ϴ�
	_action->moveTo(_actionImage, 50, 50, 10.0f);

	

	return S_OK;
}

void starScene::release()
{
}

void starScene::update()
{
	_battle->update();
	_action->update();
}

void starScene::render()
{
	IMAGEMANAGER->findImage("���")->render(getMemDC());

	_battle->render();

	_actionImage->render(getMemDC(), _actionImage->getX(), _actionImage->getY());
}

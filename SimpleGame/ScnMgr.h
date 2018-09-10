#pragma once

#include "Renderer.h"
#include "object.h"


class ScnMgr
{
public:
	ScnMgr();
	~ScnMgr();
	void RenderScene();
private:
	Renderer *m_Renderer;
	object *m_TestObj;
};


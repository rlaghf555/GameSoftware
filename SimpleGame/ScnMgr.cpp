#include "stdafx.h"
#include "ScnMgr.h"


ScnMgr::ScnMgr()
{
	if (glewIsSupported("GL_VERSION_3_0"))
	{
		std::cout << " GLEW Version is 3.0\n ";
	}
	else
	{
		std::cout << "GLEW 3.0 not supported\n ";
	}

	// Initialize Renderer
	m_Renderer = new Renderer(500, 500);
	if (!m_Renderer->IsInitialized())
	{
		std::cout << "Renderer could not be initialized.. \n";
	}

	m_TestObj = new object();
	m_TestObj->setLocation(0, 0);
	m_TestObj->setSize(-10, 10, 10, 10);
}


ScnMgr::~ScnMgr()
{
}
void ScnMgr::RenderScene()	//1초에 최소 60번 이상 출력되어야 하는 함수
{
	float px=0, py=0;
	float minX, minY, maxX, maxY;
	m_TestObj->setLocation(px, py);
	m_TestObj->setSize(100, 100, 100, 100);
	//지우고, 렌더링하고, 띄우고!
//	m_TestObj->getLocation(&px, &py);
//	m_TestObj->getSize(&width, &height);
		// Renderer Test
	m_Renderer->DrawSolidRect(px, py, 0, 20, 1, 0, 1, 1);
	
}
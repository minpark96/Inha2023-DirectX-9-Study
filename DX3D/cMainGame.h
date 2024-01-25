#pragma once

class cCubePC;
class cCamera;
class cGrid;

class cMainGame
{
public:
	cMainGame();
	~cMainGame();

private:
	std::vector<ST_PC_VERTEX>	m_vecLineVertex;
	std::vector<ST_PC_VERTEX>	m_vecTriangleVertex;

	cCubePC*	m_pCubePC;
	cCamera*	m_pCamera;
	cGrid*		m_pGrid;

public:
	void Setup();
	void Update();
	void Render();


	void Setup_Line();
	void Draw_Line();

	void Setup_Triangle();
	void Draw_Triangle();

	void WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
};


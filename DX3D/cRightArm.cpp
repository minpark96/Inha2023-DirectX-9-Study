#include "framework.h"
#include "cRightArm.h"

cRightArm::cRightArm()
{
}

cRightArm::~cRightArm()
{
}

void cRightArm::Setup()
{
	cCubeNode::Setup();

	D3DXMATRIXA16	matS, matT, mat;
	D3DXMatrixScaling(&matS, 0.15f, 0.6f, 0.2f);
	D3DXMatrixTranslation(&matT, 0.25f, 0.0f, 0.0f);
	mat = matS * matT;
	for (size_t i = 0; i < m_vecVertex.size(); ++i)
	{
		D3DXVec3TransformCoord(&m_vecVertex[i].p, &m_vecVertex[i].p, &mat);
	}
}

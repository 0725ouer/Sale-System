
// T201400800679.h : T201400800679 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CT201400800679App:
// �йش����ʵ�֣������ T201400800679.cpp
//

class CT201400800679App : public CWinApp
{
public:
	CT201400800679App();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CT201400800679App theApp;

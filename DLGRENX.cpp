// DLGRENX.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "T201400800679.h"
#include "DLGRENX.h"
#include "afxdialogex.h"


// DLGRENX �Ի���

IMPLEMENT_DYNAMIC(DLGRENX, CDialogEx)

DLGRENX::DLGRENX(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG7, pParent)
	, X_NAME_E(_T(""))
{

}

DLGRENX::~DLGRENX()
{
}

void DLGRENX::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, X_NAME_E);
}


BEGIN_MESSAGE_MAP(DLGRENX, CDialogEx)
END_MESSAGE_MAP()


// DLGRENX ��Ϣ�������

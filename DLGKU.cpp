// DLGKU.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "T201400800679.h"
#include "DLGKU.h"
#include "afxdialogex.h"


// DLGKU �Ի���

IMPLEMENT_DYNAMIC(DLGKU, CDialogEx)

DLGKU::DLGKU(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	, C_NAME(_T(""))
{

}

DLGKU::~DLGKU()
{
}

void DLGKU::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, C_NAME);
	DDV_MaxChars(pDX, C_NAME, 20);
}


BEGIN_MESSAGE_MAP(DLGKU, CDialogEx)
END_MESSAGE_MAP()


// DLGKU ��Ϣ�������

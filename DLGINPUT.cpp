// DLGINPUT.cpp : 实现文件
//

#include "stdafx.h"
#include "T201400800679.h"
#include "DLGINPUT.h"
#include "afxdialogex.h"


// DLGINPUT 对话框

IMPLEMENT_DYNAMIC(DLGINPUT, CDialogEx)

DLGINPUT::DLGINPUT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, D_NAME(_T(""))
	, D_SHU(0)
	, D_REN(_T(""))
{

}

DLGINPUT::~DLGINPUT()
{
}

void DLGINPUT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, D_NAME);
	DDV_MaxChars(pDX, D_NAME, 128);
	DDX_Text(pDX, IDC_EDIT3, D_SHU);
	DDV_MinMaxInt(pDX, D_SHU, 0, 100);
	DDX_Text(pDX, IDC_EDIT6, D_REN);
	DDV_MaxChars(pDX, D_REN, 128);
}


BEGIN_MESSAGE_MAP(DLGINPUT, CDialogEx)
END_MESSAGE_MAP()


// DLGINPUT 消息处理程序


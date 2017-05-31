// DLGHUO.cpp : 实现文件
//

#include "stdafx.h"
#include "T201400800679.h"
#include "DLGHUO.h"
#include "afxdialogex.h"


// DLGHUO 对话框

IMPLEMENT_DYNAMIC(DLGHUO, CDialogEx)

DLGHUO::DLGHUO(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, h_name(_T(""))
	, h_price(0)
	, h_num(0)
{

}

DLGHUO::~DLGHUO()
{
}

void DLGHUO::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, h_name);
	DDV_MaxChars(pDX, h_name, 30);
	DDX_Text(pDX, IDC_EDIT2, h_price);
	DDV_MinMaxFloat(pDX, h_price, 0, 100000);
	DDX_Text(pDX, IDC_EDIT3, h_num);
	DDV_MinMaxInt(pDX, h_num, 0, 10000);
}


BEGIN_MESSAGE_MAP(DLGHUO, CDialogEx)
END_MESSAGE_MAP()


// DLGHUO 消息处理程序

// DLGREN.cpp : 实现文件
//

#include "stdafx.h"
#include "T201400800679.h"
#include "DLGREN.h"
#include "afxdialogex.h"


// DLGREN 对话框

IMPLEMENT_DYNAMIC(DLGREN, CDialogEx)

DLGREN::DLGREN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, x_name(_T(""))
	, x_sex(_T(""))
	, x_hao(_T(""))
	, x_nian(0)
{

}

DLGREN::~DLGREN()
{
}

void DLGREN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x_name);
	DDV_MaxChars(pDX, x_name, 20);
	DDX_Text(pDX, IDC_EDIT4, x_sex);
	DDV_MaxChars(pDX, x_sex, 4);
	DDX_Text(pDX, IDC_EDIT3, x_hao);
	DDV_MaxChars(pDX, x_hao, 20);
	DDX_Text(pDX, IDC_EDIT2, x_nian);
	DDV_MinMaxInt(pDX, x_nian, 0, 150);
	//DDX_Control(pDX, IDC_LIST, ren);
}


BEGIN_MESSAGE_MAP(DLGREN, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &DLGREN::OnEnChangeEdit3)
	//ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST, &DLGREN::OnLvnItemchangedList1)
END_MESSAGE_MAP()


// DLGREN 消息处理程序


void DLGREN::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


/*void DLGREN::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
}*/

// DLGREN.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "T201400800679.h"
#include "DLGREN.h"
#include "afxdialogex.h"


// DLGREN �Ի���

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


// DLGREN ��Ϣ�������


void DLGREN::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


/*void DLGREN::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}*/

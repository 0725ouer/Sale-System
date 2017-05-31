// RENDIS.cpp : 实现文件
//

#include "stdafx.h"
#include "T201400800679Doc.h"
#include "T201400800679View.h"
#include "T201400800679.h"
#include "RENDIS.h"
#include "afxdialogex.h"
#include "DLGREN.h"
#include "DLGHUO.h"
#include "DLGINPUT.h"
#include "DLGKU.h"
#include "DLGRENX.h"
#include <fstream>
#include <iostream>
using namespace std;


IMPLEMENT_DYNAMIC(RENDIS, CDialogEx)

RENDIS::RENDIS(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{
	cc = 0;
}

RENDIS::~RENDIS()
{
	
}

void RENDIS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, RENdis);
	DDX_Control(pDX, IDC_LIST3, KUdis);
	DDX_Control(pDX, IDC_LIST1, XIAOdis);
}


BEGIN_MESSAGE_MAP(RENDIS, CDialogEx)
ON_BN_CLICKED(ID_LURU, &RENDIS::OnBnClickedLuru)
ON_BN_CLICKED(IDC_DELETE, &RENDIS::OnBnClickedDelete)
ON_BN_CLICKED(IDC_BUTTON2, &RENDIS::OnBnClickedButton2)
ON_BN_CLICKED(IDC_BUTTON1, &RENDIS::OnBnClickedButton1)
ON_BN_CLICKED(IDC_BUTTON3, &RENDIS::OnBnClickedButton3)
ON_BN_CLICKED(IDC_BUTTON4, &RENDIS::OnBnClickedButton4)
ON_BN_CLICKED(IDC_BUTTON5, &RENDIS::OnBnClickedButton5)
ON_BN_CLICKED(IDC_BUTTON6, &RENDIS::OnBnClickedButton6)
ON_BN_CLICKED(IDC_DELETE3, &RENDIS::OnBnClickedDelete3)
ON_BN_CLICKED(IDC_DELETE2, &RENDIS::OnBnClickedDelete2)
ON_BN_CLICKED(IDC_BUTTON9, &RENDIS::OnBnClickedButton9)
ON_BN_CLICKED(ID_LURU2, &RENDIS::OnBnClickedLuru2)
ON_BN_CLICKED(IDC_BUTTON8, &RENDIS::OnBnClickedButton8)
ON_BN_CLICKED(IDC_BUTTON7, &RENDIS::OnBnClickedButton7)
ON_BN_CLICKED(IDC_BUTTON10, &RENDIS::OnBnClickedButton10)
ON_BN_CLICKED(IDC_BUTTON12, &RENDIS::OnBnClickedButton12)
ON_BN_CLICKED(ID_LURU3, &RENDIS::OnBnClickedLuru3)
ON_BN_CLICKED(IDC_BUTTON11, &RENDIS::OnBnClickedButton11)
ON_BN_CLICKED(IDC_BUTTON13, &RENDIS::OnBnClickedButton13)
ON_BN_CLICKED(IDC_BUTTON14, &RENDIS::OnBnClickedButton14)
ON_BN_CLICKED(IDC_BUTTON15, &RENDIS::OnBnClickedButton15)
ON_BN_CLICKED(IDC_BUTTON16, &RENDIS::OnBnClickedButton16)
END_MESSAGE_MAP()

void RENDIS::OnBnClickedLuru()
{
	DLGREN r;
	if (r.DoModal() == IDOK) {
		m_xname = r.x_name;
		m_xsex = r.x_sex;
		m_xhao = r.x_hao;
		m_xnian = r.x_nian;
		RENdis.InsertItem(0, m_xname);
		RENdis.SetItemText(0, 1, m_xsex);
		RENdis.SetItemText(0, 2, m_xhao);
		CString bufa;
		bufa.Format("%d", m_xnian);
		RENdis.SetItemText(0, 3, bufa);
	}
}

void RENDIS::OnBnClickedDelete()
{
	for (int i = 0; i<RENdis.GetItemCount(); i++)
	{
		if (RENdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			//str.Format(_T(" 选中了第%d 行"), i);
			//AfxMessageBox(str);
			RENdis.DeleteItem(i);
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedButton2()
{
	for (int i = 0; i < KUdis.GetItemCount(); i++)
	{
		if (KUdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			DLGHUO r;
			if (r.DoModal() == IDOK) {
				KUdis.DeleteItem(i);
				m_h_name = r.h_name;
				m_h_price = r.h_price;
				m_h_num = r.h_num;
				KUdis.InsertItem(i, m_h_name);
				CString bufa;
				bufa.Format("%0.2f", m_h_price);
				KUdis.SetItemText(i, 1, bufa);
				bufa.Format("%d", m_h_num);
				KUdis.SetItemText(i, 2, bufa);
				break;
			}
		}
		// TODO: 在此添加控件通知处理程序代码
	}
}

BOOL RENDIS::OnInitDialog()
{
	CDialogEx::OnInitDialog();
		CRect rect;
	
		// 获取编程语言列表视图控件的位置和大小   
		RENdis.GetClientRect(&rect);
	
		// 为列表视图控件添加全行选中和栅格风格   
		RENdis.SetExtendedStyle(RENdis.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	
		// 为列表视图控件添加三列   
		RENdis.InsertColumn(0, _T("姓名"), LVCFMT_CENTER, rect.Width() / 4, 80);
		RENdis.InsertColumn(1, _T("性别"), LVCFMT_CENTER, rect.Width() / 4, 80);
		RENdis.InsertColumn(2, _T("工号"), LVCFMT_CENTER, rect.Width() / 4, 80);
		RENdis.InsertColumn(3, _T("年龄"), LVCFMT_CENTER, rect.Width() / 4, 80);
		OnBnClickedButton5();
		KUdis.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格   
		KUdis.SetExtendedStyle(KUdis.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

		// 为列表视图控件添加三列   
		KUdis.InsertColumn(0, _T("名称"), LVCFMT_CENTER, rect.Width() / 3, 80);
		KUdis.InsertColumn(1, _T("单价"), LVCFMT_CENTER, rect.Width() / 3, 80);
		KUdis.InsertColumn(2, _T("库存量"), LVCFMT_CENTER, rect.Width() / 3, 80);
		OnBnClickedButton7();
		XIAOdis.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格   
		XIAOdis.SetExtendedStyle(XIAOdis.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

		// 为列表视图控件添加三列   
		XIAOdis.InsertColumn(0, _T("商品名称"), LVCFMT_CENTER, rect.Width() / 6, 80);
		XIAOdis.InsertColumn(1, _T("单价"), LVCFMT_CENTER, rect.Width() / 6, 80);
		XIAOdis.InsertColumn(2, _T("数量"), LVCFMT_CENTER, rect.Width() / 6, 80);
		XIAOdis.InsertColumn(3, _T("总价"), LVCFMT_CENTER, rect.Width() / 6, 80);
		XIAOdis.InsertColumn(4, _T("交易时间"), LVCFMT_CENTER, rect.Width() / 6, 80);
		XIAOdis.InsertColumn(5, _T("销售员"), LVCFMT_CENTER, rect.Width() / 6, 80);
		OnBnClickedButton4();
	
		// 在列表视图控件中插入列表项，并设置列表子项文本   
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void RENDIS::OnBnClickedButton1()
{
	for (int i = 0; i < RENdis.GetItemCount(); i++)
	{
		if (RENdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			DLGREN r;
			if (r.DoModal() == IDOK) {
				m_xname = r.x_name;
				m_xsex = r.x_sex;
				m_xhao = r.x_hao;
				m_xnian = r.x_nian;
				RENdis.InsertItem(i, m_xname);
				RENdis.SetItemText(i, 1, m_xsex);
				RENdis.SetItemText(i, 2, m_xhao);
				CString bufa;
				bufa.Format("%d", m_xnian);
				RENdis.SetItemText(i, 3, bufa);
				break;
			}
		}
		// TODO: 在此添加控件通知处理程序代码
	}
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedButton3()
{
	fstream outfile;
	char s[100]="";
	outfile.open("D:\\data.txt", ios::trunc);
	outfile.open("D:\\data.txt", ios::out);
	int nItem = RENdis.GetItemCount();
	CString strSave = "";
	int i = 0, j = 0;
	for (i = 0;i < nItem;i++)
	{
		for (j = 0;j <= 3; j++)
		{
			strSave = RENdis.GetItemText(i, j);
			strSave += " ";
			strncpy(s, strSave, strSave.GetLength());;
			outfile << s;
			ZeroMemory(s, sizeof(s));
		}
	}
	outfile.close();
	if (cc == 0)
	{
		MessageBox("保存成功", MB_OK);
	}
}

void RENDIS::OnBnClickedButton4()
{
	char txt[100];
	int  now=0;
	fstream infile;
	infile.open("D:\\data2.txt", ios::in);
	while (1)
	{
		now = XIAOdis.GetItemCount();
		if (!(infile >> txt)) break;
		XIAOdis.InsertItem(now, txt);
		if (!(infile >> txt)) break;
		XIAOdis.SetItemText(now, 1, txt);
		if (!(infile >> txt)) break;
		XIAOdis.SetItemText(now, 2, txt);
		if (!(infile >> txt)) break;
		XIAOdis.SetItemText(now, 3, txt);
		if (!(infile >> txt)) break;
		XIAOdis.SetItemText(now, 4, txt);
		if (!(infile >> txt)) break;
		XIAOdis.SetItemText(now, 5, txt);
	}
	infile.close();
}

void RENDIS::OnBnClickedButton5()
{
	char txt[100];
	int  now = 0;
	fstream infile;
	infile.open("D:\\data.txt", ios::in);
	while (1)
	{
		now = RENdis.GetItemCount();
		if (!(infile >> txt)) break;
		RENdis.InsertItem(now, txt);
		if (!(infile >> txt)) break;
		RENdis.SetItemText(now, 1, txt);
		if (!(infile >> txt)) break;
		RENdis.SetItemText(now, 2, txt);
		if (!(infile >> txt)) break;
		RENdis.SetItemText(now, 3, txt);
	}
	infile.close();
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedButton6()
{
	for (int i = 0; i < RENdis.GetItemCount(); i++)
	{
		if (RENdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			DLGREN r;
			if (r.DoModal() == IDOK) {
				RENdis.DeleteItem(i);
				m_xname = r.x_name;
				m_xsex = r.x_sex;
				m_xhao = r.x_hao;
				m_xnian = r.x_nian;
				RENdis.InsertItem(i, m_xname);
				RENdis.SetItemText(i, 1, m_xsex);
				RENdis.SetItemText(i, 2, m_xhao);
				CString bufa;
				bufa.Format("%d", m_xnian);
				RENdis.SetItemText(i, 3, bufa);
				break;
			}
		}
		// TODO: 在此添加控件通知处理程序代码
	}
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedDelete3()
{
	CString strSave = "",bufa;
	int ee = 0, a = 0;
	for (int i = 0; i<XIAOdis.GetItemCount(); i++)
	{
		if (XIAOdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			//str.Format(_T(" 选中了第%d 行"), i);
			//AfxMessageBox(str);
			int nItem = KUdis.GetItemCount();
			for (a = 0;a < nItem;a++)
			{
				strSave = KUdis.GetItemText(a, 0);
				if (strSave ==	XIAOdis.GetItemText(i,0))
				{
					ee = atoi(KUdis.GetItemText(a, 2));
					ee = ee + atoi(XIAOdis.GetItemText(i, 2));
					bufa.Format("%d", ee);
					KUdis.SetItemText(a, 2, bufa);
				}
			}
			XIAOdis.DeleteItem(i);
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedDelete2()
{
	for (int i = 0; i<KUdis.GetItemCount(); i++)
	{
		if (KUdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			//str.Format(_T(" 选中了第%d 行"), i);
			//AfxMessageBox(str);
			KUdis.DeleteItem(i);
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedButton9()
{
	for (int i = 0; i < KUdis.GetItemCount(); i++)
	{
		if (KUdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			DLGHUO r;
			if (r.DoModal() == IDOK) {
				m_h_name = r.h_name;
				m_h_price = r.h_price;
				m_h_num = r.h_num;
				KUdis.InsertItem(i, m_h_name);
				CString bufa;
				bufa.Format("%0.2f", m_h_price);
				KUdis.SetItemText(i, 1, bufa);
				bufa.Format("%d", m_h_num);
				KUdis.SetItemText(i, 2, bufa);
				break;
			}
		}
		// TODO: 在此添加控件通知处理程序代码
	}
	// TODO: 在此添加控件通知处理程序代码
}

void RENDIS::OnBnClickedLuru2()
{
			DLGHUO r;
			if (r.DoModal() == IDOK)
			{
				m_h_name = r.h_name;
				m_h_price = r.h_price;
				m_h_num = r.h_num;
				KUdis.InsertItem(0, m_h_name);
				CString bufa;
				bufa.Format("%0.2f", m_h_price);
				KUdis.SetItemText(0, 1, bufa);
				bufa.Format("%d", m_h_num);
				KUdis.SetItemText(0, 2, bufa);
			}
}

void RENDIS::OnBnClickedButton8()
{
	fstream outfile;
	char s[100] = "";
	outfile.open("D:\\data1.txt", ios::trunc);
	outfile.open("D:\\data1.txt", ios::out);
	int nItem = KUdis.GetItemCount();
	CString strSave = "";
	int i = 0, j = 0;
	for (i = 0;i < nItem;i++)
	{
		for (j = 0;j <= 2; j++)
		{
			strSave = KUdis.GetItemText(i, j);
			strSave += " ";
			strncpy(s, strSave, strSave.GetLength());;
			outfile << s;
			ZeroMemory(s, sizeof(s));
		}
	}
	outfile.close();
	if (cc == 0)
	{
		MessageBox("保存成功", MB_OK);
	}
}

void RENDIS::OnBnClickedButton7()
{
	char txt[100];
	int  now = 0;
	fstream infile;
	infile.open("D:\\data1.txt", ios::in);
	while (1)
	{
		now = KUdis.GetItemCount();
		if (!(infile >> txt)) break;
		KUdis.InsertItem(now, txt);
		if (!(infile >> txt)) break;
		KUdis.SetItemText(now, 1, txt);
		if (!(infile >> txt)) break;
		KUdis.SetItemText(now, 2, txt);
	}
	infile.close();
}

void RENDIS::OnBnClickedButton10()
{
	CString bufa,st;
	int ee = 0, ff = 0;
	for (int i = 0; i < XIAOdis.GetItemCount(); i++)
	{
		if (XIAOdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			DLGINPUT r;
			if (r.DoModal() == IDOK) {
				ff = atoi(XIAOdis.GetItemText(i, 2));
				st = XIAOdis.GetItemText(i, 4);
				m_D_NAME=r.D_NAME;
				XIAOdis.InsertItem(i, m_D_NAME);
				int nItem = KUdis.GetItemCount();
				CString strSave = "";
				float dd = 0;
				int a = 0;
				for (a = 0;a < nItem;a++)
				{
					strSave = KUdis.GetItemText(a, 0);
					if (strSave == m_D_NAME)
					{
						dd = atof(KUdis.GetItemText(a, 1));
					}
				}
				m_D_PRICE = dd;
				m_D_SHU=r.D_SHU;
				for (a = 0;a < nItem;a++)
				{
					strSave = KUdis.GetItemText(a, 0);
					if (strSave == m_D_NAME)
					{
						ee = atoi(KUdis.GetItemText(a, 2));
						ee = ee + ff - m_D_SHU;
						bufa.Format("%d", ee);
						KUdis.SetItemText(a, 2, bufa);
						XIAOdis.DeleteItem(i+1);
						m_D_QIAN = m_D_PRICE*m_D_SHU;
						m_D_TIME = st;
						m_D_REN = r.D_REN;
						bufa.Format("%0.2f", m_D_PRICE);
						XIAOdis.SetItemText(i, 1, bufa);
						bufa.Format("%d", m_D_SHU);
						XIAOdis.SetItemText(i, 2, bufa);
						bufa.Format("%0.2f", m_D_QIAN);
						XIAOdis.SetItemText(i, 3, bufa);
						XIAOdis.SetItemText(i, 4, m_D_TIME);
						XIAOdis.SetItemText(i, 5, m_D_REN);
						break;
					}
					if (a == (nItem - 1) && strSave != m_D_NAME)
					{
						MessageBox("该商品不存在", MB_OK);
						break;
					}
				}
				break;
			}
		}
	}
	cc = 1;
	OnBnClickedButton8();
	cc = 0;
}

void RENDIS::OnBnClickedButton12()
{
	int ee;
	CString bufa;
	for (int i = 0; i < XIAOdis.GetItemCount(); i++)
	{
		if (XIAOdis.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			DLGINPUT r;
			if (r.DoModal() == IDOK) {
				m_D_NAME = r.D_NAME;
				int nItem = KUdis.GetItemCount();
				CString strSave = "";
				float dd = 0;
				int a = 0;
				for (a = 0;a < nItem;a++)
				{
					strSave = KUdis.GetItemText(a, 0);
					if (strSave == m_D_NAME)
					{
						dd = atof(KUdis.GetItemText(a, 1));
					}
				}
				m_D_PRICE = dd;
				m_D_SHU = r.D_SHU;
				for (a = 0;a < nItem;a++)
				{
					strSave = KUdis.GetItemText(a, 0);
					if (strSave == m_D_NAME)
					{
						ee = atoi(KUdis.GetItemText(a, 2));
						ee = ee - m_D_SHU;
						bufa.Format("%d", ee);
						KUdis.SetItemText(a, 2, bufa);
						m_D_QIAN = m_D_PRICE*m_D_SHU;
						tm = CTime::GetCurrentTime();
						st = tm.Format("%Y-%m-%d-%X");
						m_D_TIME = st;
						m_D_REN = r.D_REN;
						XIAOdis.InsertItem(i, m_D_NAME);
						bufa.Format("%0.2f", m_D_PRICE);
						XIAOdis.SetItemText(i, 1, bufa);
						bufa.Format("%d", m_D_SHU);
						XIAOdis.SetItemText(i, 2, bufa);
						bufa.Format("%0.2f", m_D_QIAN);
						XIAOdis.SetItemText(i, 3, bufa);
						XIAOdis.SetItemText(i, 4, m_D_TIME);
						XIAOdis.SetItemText(i, 5, m_D_REN);
						break;
					}
					if (a == (nItem - 1) && strSave != m_D_NAME)
					{
						MessageBox("该商品不存在", MB_OK);
						break;
					}
				}
				break;
			}
		}
	}
	cc = 1;
	OnBnClickedButton8();
	cc = 0;
}

void RENDIS::OnBnClickedLuru3()
{
			DLGINPUT r;
			CString bufa;
			if (r.DoModal() == IDOK) 
			{
				m_D_NAME = r.D_NAME;
				int nItem = KUdis.GetItemCount();
				CString strSave = "";
				float dd=0;
				int ee;
				int i = 0, j = 0;
				for (i = 0;i < nItem;i++)
				{
					strSave = KUdis.GetItemText(i, 0);
					if (strSave == m_D_NAME)
					{
						dd = atof(KUdis.GetItemText(i, 1));
					}
				}
				m_D_PRICE = dd;
				m_D_SHU = r.D_SHU;
				for (i = 0;i < nItem;i++)
				{
					strSave = KUdis.GetItemText(i, 0);
					if (strSave == m_D_NAME)
					{
						ee = atoi(KUdis.GetItemText(i, 2));
						ee = ee - m_D_SHU;
						bufa.Format("%d", ee);
						KUdis.SetItemText(i, 2, bufa);
						m_D_QIAN = m_D_PRICE*m_D_SHU;
						tm = CTime::GetCurrentTime();
						st = tm.Format("%Y-%m-%d-%X");
						m_D_TIME = st;
						m_D_REN = r.D_REN;
						XIAOdis.InsertItem(0, m_D_NAME);
						bufa.Format("%0.2f", m_D_PRICE);
						XIAOdis.SetItemText(0, 1, bufa);
						bufa.Format("%d", m_D_SHU);
						XIAOdis.SetItemText(0, 2, bufa);
						bufa.Format("%0.2f", m_D_QIAN);
						XIAOdis.SetItemText(0, 3, bufa);
						XIAOdis.SetItemText(0, 4, m_D_TIME);
						XIAOdis.SetItemText(0, 5, m_D_REN);
						break;
					}
					if ((i == (nItem - 1)) && (strSave != m_D_NAME))
					{
						MessageBox("该商品不存在",MB_OK);
						break;
					}
				}
	}
			cc = 1;
			OnBnClickedButton8();
			cc = 0;
}

void RENDIS::OnBnClickedButton11()
{
	fstream outfile;
	char s[100] = "";
	outfile.open("D:\\data2.txt", ios::trunc);
	outfile.open("D:\\data2.txt", ios::out);
	int nItem = XIAOdis.GetItemCount();
	CString strSave = "";
	int i = 0, j = 0;
	for (i = 0;i < nItem;i++)
	{
		for (j = 0;j <= 5; j++)
		{
			strSave = XIAOdis.GetItemText(i, j);
			strSave += " ";
			strncpy(s, strSave, strSave.GetLength());;
			outfile << s;
			ZeroMemory(s, sizeof(s));
		}
	}
	outfile.close();
	if (cc == 0)
	{
		MessageBox("保存成功", MB_OK);
	}
}

void RENDIS::OnBnClickedButton13()
{
	cc = 1;
	OnBnClickedButton11();
	OnBnClickedButton3();
	cc = 0;
	OnBnClickedButton8();
}

void RENDIS::OnBnClickedButton14()
{
	DLGKU AAA;
	if (AAA.DoModal() == IDOK)
	{
		int nItem = KUdis.GetItemCount();
		CString strSave = "",ku;
		int i = 0, j = 0;
		for (i = 0;i < nItem;i++)
		{
				strSave = KUdis.GetItemText(i, 0);
				if (strSave == AAA.C_NAME)
				{
					ku.Format("该商品的库存为：%s", KUdis.GetItemText(i, 2));
					MessageBox(ku, MB_OK);
				}
			}
	}
}

void RENDIS::OnBnClickedButton15()
{
	CString qq, z = 0;
	float x = 0, y = 0, t = 0;
	int a = 0;
	for (a = 0; a < RENdis.GetItemCount(); a++)
	{
		if (RENdis.GetItemState(a, LVIS_SELECTED) == LVIS_SELECTED)
		{
			
			qq = RENdis.GetItemText(a, 0);
			int nItem = XIAOdis.GetItemCount();
			CString strSave = "";
			int i = 0, j = 0;
			for (i = 0;i < nItem;i++)
			{
				strSave = XIAOdis.GetItemText(i, 5);
				if (strSave == qq)
				{
					x = atof(XIAOdis.GetItemText(i, 3));
					y = y + x;
				}
			}
			z.Format("%s的总销售额为：%0.2f", qq, y);
			MessageBox(z, MB_OK);
			RENdis.SetItemState(a, 0, LVIS_SELECTED);
		}
	}
	
}

void RENDIS::OnBnClickedButton16()
{
	CString z = 0;
	float x = 0, y = 0;
	int b = 0, c = 0;
	int nItem = XIAOdis.GetItemCount();
	int i = 0;
	for (i = 0;i < nItem;i++)
	{
		b = atoi(XIAOdis.GetItemText(i, 2));
		x = atof(XIAOdis.GetItemText(i, 3));
		y = y + x;
		c = c + b;
	}
	z.Format("总销售额为：%0.2f  总销量为：%d", y, c);
	MessageBox(z, MB_OK);
}

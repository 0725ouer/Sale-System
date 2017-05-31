#pragma once
#include "afxcmn.h"


// RENDIS 对话框

class RENDIS : public CDialogEx
{
	DECLARE_DYNAMIC(RENDIS)

public:
	RENDIS(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~RENDIS();
	CString m_xname;
	CString m_xsex;
	CString m_xhao;
	int m_xnian;
	CString m_D_NAME;
	float m_D_PRICE;
	int m_D_SHU;
	float m_D_QIAN;
	CString m_D_TIME;
	CString m_D_REN;

	CString m_h_name;
	float m_h_price;
	int m_h_num;

	int cc;

	CString st; //获取系统时间
	CTime tm;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl RENdis;
	afx_msg void OnBnClickedLuru();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedButton2();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
//	CListCtrl KUdis;
	afx_msg void OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	CListCtrl KUdis;
	CListCtrl XIAOdis;
	afx_msg void OnBnClickedDelete3();
	afx_msg void OnBnClickedDelete2();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedLuru2();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedLuru3();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton13();
//	afx_msg void OnChaku();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
};

#pragma once
#include "afxcmn.h"


// DLGREN �Ի���

class DLGREN : public CDialogEx
{
	DECLARE_DYNAMIC(DLGREN)

public:
	DLGREN(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLGREN();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString x_name;
	CString x_sex;
	afx_msg void OnEnChangeEdit3();
	CString x_hao;
	int x_nian;
};

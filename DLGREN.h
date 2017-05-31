#pragma once
#include "afxcmn.h"


// DLGREN 对话框

class DLGREN : public CDialogEx
{
	DECLARE_DYNAMIC(DLGREN)

public:
	DLGREN(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLGREN();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString x_name;
	CString x_sex;
	afx_msg void OnEnChangeEdit3();
	CString x_hao;
	int x_nian;
};

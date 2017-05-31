#pragma once


// DLGKU 对话框

class DLGKU : public CDialogEx
{
	DECLARE_DYNAMIC(DLGKU)

public:
	DLGKU(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLGKU();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString C_NAME;
};

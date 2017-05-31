#pragma once


// DLGRENX 对话框

class DLGRENX : public CDialogEx
{
	DECLARE_DYNAMIC(DLGRENX)

public:
	DLGRENX(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLGRENX();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString X_NAME_E;
};

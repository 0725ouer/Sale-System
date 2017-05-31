#pragma once


// DLGINPUT 对话框

class DLGINPUT : public CDialogEx
{
	DECLARE_DYNAMIC(DLGINPUT)

public:
	DLGINPUT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLGINPUT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString D_NAME;
//	float D_PRICE;
	int D_SHU;
//	float D_QIAN;
//	CString D_TIME;
	CString D_REN;
//	int D_COUNT;
};

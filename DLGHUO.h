#pragma once


// DLGHUO 对话框

class DLGHUO : public CDialogEx
{
	DECLARE_DYNAMIC(DLGHUO)

public:
	DLGHUO(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLGHUO();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString h_name;
	float h_price;
	int h_num;
};

#pragma once


// DLGHUO �Ի���

class DLGHUO : public CDialogEx
{
	DECLARE_DYNAMIC(DLGHUO)

public:
	DLGHUO(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLGHUO();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString h_name;
	float h_price;
	int h_num;
};

#pragma once


// DLGKU �Ի���

class DLGKU : public CDialogEx
{
	DECLARE_DYNAMIC(DLGKU)

public:
	DLGKU(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLGKU();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString C_NAME;
};

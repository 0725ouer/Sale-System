#pragma once


// DLGRENX �Ի���

class DLGRENX : public CDialogEx
{
	DECLARE_DYNAMIC(DLGRENX)

public:
	DLGRENX(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLGRENX();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString X_NAME_E;
};

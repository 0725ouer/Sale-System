
// T201400800679View.h : CT201400800679View ��Ľӿ�
//

#pragma once


class CT201400800679View : public CView
{
protected: // �������л�����
	CT201400800679View();
	DECLARE_DYNCREATE(CT201400800679View)

// ����
public:
	CT201400800679Doc* GetDocument() const;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CT201400800679View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnInput();
//	afx_msg void OnChangecolor();
//	afx_msg void OnRen();
//	afx_msg void OnHuo();
	afx_msg void OnRendis();
//	afx_msg void OnLuru();
	afx_msg void OnVersion();
//	afx_msg void OnChaku();
};

#ifndef _DEBUG  // T201400800679View.cpp �еĵ��԰汾
inline CT201400800679Doc* CT201400800679View::GetDocument() const
   { return reinterpret_cast<CT201400800679Doc*>(m_pDocument); }
#endif


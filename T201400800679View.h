
// T201400800679View.h : CT201400800679View 类的接口
//

#pragma once


class CT201400800679View : public CView
{
protected: // 仅从序列化创建
	CT201400800679View();
	DECLARE_DYNCREATE(CT201400800679View)

// 特性
public:
	CT201400800679Doc* GetDocument() const;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CT201400800679View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // T201400800679View.cpp 中的调试版本
inline CT201400800679Doc* CT201400800679View::GetDocument() const
   { return reinterpret_cast<CT201400800679Doc*>(m_pDocument); }
#endif



// T201400800679View.cpp : CT201400800679View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "T201400800679.h"
#endif

#include "T201400800679Doc.h"
#include "T201400800679View.h"
#include "DLGINPUT.h"
#include "DLGREN.h"
#include "DLGHUO.h"
#include "RENDIS.h"
#include "DLGKU.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CT201400800679View

IMPLEMENT_DYNCREATE(CT201400800679View, CView)

BEGIN_MESSAGE_MAP(CT201400800679View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_RENDIS, &CT201400800679View::OnRendis)
	ON_COMMAND(ID_VERSION, &CT201400800679View::OnVersion)
END_MESSAGE_MAP()


CT201400800679View::CT201400800679View()
{

}

CT201400800679View::~CT201400800679View()
{
}

BOOL CT201400800679View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CT201400800679View 绘制

void CT201400800679View::OnDraw(CDC* pDC)
{
	CT201400800679Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString st; //获取系统时间
	CTime tm;
	tm = CTime::GetCurrentTime();
	st = tm.Format("%Y-%m-%d %X");
	pDC->TextOut(1250, 600, st);
	/*RECT WE = { 1250,600,1400,620 };
	LPCRECT QW = &WE;
	InvalidateRect(QW);*/
	CRect   rc;
	GetClientRect(rc);
	CString   str("销售信息一体化管理系统");   
	pDC->SetBkMode(TRANSPARENT);
	pDC->SetTextColor(RGB(0, 0, 255));
	pDC->Ellipse(20, 20, 200, 100);
	CFont   font;
	LOGFONT   lf;
	memset(&lf, 0, sizeof(LOGFONT));
	lf.lfHeight = -62;
	lf.lfWeight = FW_NORMAL;
	lf.lfClipPrecision = CLIP_LH_ANGLES;
	strcpy(lf.lfFaceName, "楷体");   //看好这个字体！！
	font.CreateFontIndirect(&lf);
	CFont   *pOldFont = pDC->SelectObject(&font);
	pDC->TextOut(rc.right / 4, rc.bottom / 2, str);
	pDC->TextOut(20, 30, "坤出品");
	pDC->SelectObject(pOldFont);
	font.DeleteObject();
	
}


// CT201400800679View 打印

BOOL CT201400800679View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CT201400800679View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CT201400800679View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CT201400800679View 诊断

#ifdef _DEBUG
void CT201400800679View::AssertValid() const
{
	CView::AssertValid();
}

void CT201400800679View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CT201400800679Doc* CT201400800679View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT201400800679Doc)));
	return (CT201400800679Doc*)m_pDocument;
}
#endif //_DEBUG


// CT201400800679View 消息处理程序




void CT201400800679View::OnRendis()
{
	RENDIS aaa;
	aaa.DoModal();
	// TODO: 在此添加命令处理程序代码
}




void CT201400800679View::OnVersion()
{
	MessageBox("版本：V1.0",MB_OK);
	// TODO: 在此添加命令处理程序代码
}

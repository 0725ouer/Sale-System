
// T201400800679View.cpp : CT201400800679View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
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
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CT201400800679View ����

void CT201400800679View::OnDraw(CDC* pDC)
{
	CT201400800679Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString st; //��ȡϵͳʱ��
	CTime tm;
	tm = CTime::GetCurrentTime();
	st = tm.Format("%Y-%m-%d %X");
	pDC->TextOut(1250, 600, st);
	/*RECT WE = { 1250,600,1400,620 };
	LPCRECT QW = &WE;
	InvalidateRect(QW);*/
	CRect   rc;
	GetClientRect(rc);
	CString   str("������Ϣһ�廯����ϵͳ");   
	pDC->SetBkMode(TRANSPARENT);
	pDC->SetTextColor(RGB(0, 0, 255));
	pDC->Ellipse(20, 20, 200, 100);
	CFont   font;
	LOGFONT   lf;
	memset(&lf, 0, sizeof(LOGFONT));
	lf.lfHeight = -62;
	lf.lfWeight = FW_NORMAL;
	lf.lfClipPrecision = CLIP_LH_ANGLES;
	strcpy(lf.lfFaceName, "����");   //����������壡��
	font.CreateFontIndirect(&lf);
	CFont   *pOldFont = pDC->SelectObject(&font);
	pDC->TextOut(rc.right / 4, rc.bottom / 2, str);
	pDC->TextOut(20, 30, "����Ʒ");
	pDC->SelectObject(pOldFont);
	font.DeleteObject();
	
}


// CT201400800679View ��ӡ

BOOL CT201400800679View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CT201400800679View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CT201400800679View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CT201400800679View ���

#ifdef _DEBUG
void CT201400800679View::AssertValid() const
{
	CView::AssertValid();
}

void CT201400800679View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CT201400800679Doc* CT201400800679View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT201400800679Doc)));
	return (CT201400800679Doc*)m_pDocument;
}
#endif //_DEBUG


// CT201400800679View ��Ϣ�������




void CT201400800679View::OnRendis()
{
	RENDIS aaa;
	aaa.DoModal();
	// TODO: �ڴ���������������
}




void CT201400800679View::OnVersion()
{
	MessageBox("�汾��V1.0",MB_OK);
	// TODO: �ڴ���������������
}

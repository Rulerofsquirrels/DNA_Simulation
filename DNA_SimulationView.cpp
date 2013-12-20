
// DNA_SimulationView.cpp : implementation of the CDNA_SimulationView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "DNA_Simulation.h"
#endif

#include "DNA_SimulationDoc.h"
#include "DNA_SimulationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDNA_SimulationView

IMPLEMENT_DYNCREATE(CDNA_SimulationView, CView)

BEGIN_MESSAGE_MAP(CDNA_SimulationView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDNA_SimulationView construction/destruction

CDNA_SimulationView::CDNA_SimulationView()
{
	// TODO: add construction code here

}

CDNA_SimulationView::~CDNA_SimulationView()
{
}

BOOL CDNA_SimulationView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDNA_SimulationView drawing

void CDNA_SimulationView::OnDraw(CDC* /*pDC*/)
{
	CDNA_SimulationDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CDNA_SimulationView printing

BOOL CDNA_SimulationView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDNA_SimulationView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDNA_SimulationView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CDNA_SimulationView diagnostics

#ifdef _DEBUG
void CDNA_SimulationView::AssertValid() const
{
	CView::AssertValid();
}

void CDNA_SimulationView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDNA_SimulationDoc* CDNA_SimulationView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDNA_SimulationDoc)));
	return (CDNA_SimulationDoc*)m_pDocument;
}
#endif //_DEBUG


// CDNA_SimulationView message handlers

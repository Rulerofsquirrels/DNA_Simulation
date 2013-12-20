
// DNA_SimulationView.h : interface of the CDNA_SimulationView class
//

#pragma once


class CDNA_SimulationView : public CView
{
protected: // create from serialization only
	CDNA_SimulationView();
	DECLARE_DYNCREATE(CDNA_SimulationView)

// Attributes
public:
	CDNA_SimulationDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDNA_SimulationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DNA_SimulationView.cpp
inline CDNA_SimulationDoc* CDNA_SimulationView::GetDocument() const
   { return reinterpret_cast<CDNA_SimulationDoc*>(m_pDocument); }
#endif


#include "stdafx.h"
#include "CMFCVisualManagerVS2008Nova.h"

IMPLEMENT_DYNCREATE(CMFCVisualManagerVS2008Nova, CMFCVisualManagerVS2008)

CMFCVisualManagerVS2008Nova::CMFCVisualManagerVS2008Nova()
{
	OutputDebugString(_T("CMFCVisualManagerVS2008Nova::CMFCVisualManagerVS2008Nova()\n"));
}

CMFCVisualManagerVS2008Nova::~CMFCVisualManagerVS2008Nova()
{
	OutputDebugString(_T("CMFCVisualManagerVS2008Nova::~CMFCVisualManagerVS2008Nova()\n"));
}

// Tab-Bereich (wo "Home", "File" steht)
COLORREF CMFCVisualManagerVS2008Nova::OnDrawRibbonCategoryTab(CDC* pDC, CMFCRibbonTab* pTab, BOOL bIsActive)
{
	CRect rect = ((CMFCRibbonBaseElement*)pTab)->GetRect();
	////pDC->FillSolidRect(rect, RGB(255, 255, 255));
	pDC->FillSolidRect(rect, RGB(255, 150, 150));
	return RGB(0, 0, 0); // Textfarbe schwarz
}

// Category-Bereich (Panel-Bereich unter den Tabs)
void CMFCVisualManagerVS2008Nova::OnDrawRibbonCategory(CDC* pDC, CMFCRibbonCategory* pCategory, CRect rectCategory)
{
	//pDC->FillSolidRect(rectCategory, RGB(255, 255, 255));
	pDC->FillSolidRect(rectCategory, RGB(150, 255, 150));
}

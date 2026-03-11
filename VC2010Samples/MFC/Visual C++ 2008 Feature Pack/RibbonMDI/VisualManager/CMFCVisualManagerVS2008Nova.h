#pragma once
#include <afxvisualmanagervs2008.h>
class CMFCVisualManagerVS2008Nova :
    public CMFCVisualManagerVS2008
{
	DECLARE_DYNCREATE(CMFCVisualManagerVS2008Nova)

public:
	CMFCVisualManagerVS2008Nova();
	virtual ~CMFCVisualManagerVS2008Nova();

	// Tab-Bereich (wo "Home", "File" steht)
	COLORREF OnDrawRibbonCategoryTab(CDC* pDC, CMFCRibbonTab* pTab, BOOL bIsActive) override;

	// Category-Bereich (Panel-Bereich unter den Tabs)
	void OnDrawRibbonCategory(CDC* pDC, CMFCRibbonCategory* pCategory, CRect rectCategory) override;
};


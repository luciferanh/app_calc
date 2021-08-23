
// templateDlg.h : header file
//

#pragma once


// CtemplateDlg dialog
class CtemplateDlg : public CDialogEx
{
// Construction
public:
	CtemplateDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEMPLATE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedRadio2();
protected:
	CEdit edit_val_1_;
	CEdit edit_val_2_;
	CEdit edit_result_;
	CButton btn_cal_;
	int rad_sum_;
	int rad_sub_;
public:
	afx_msg void OnBnClickedRadMul();
protected:
	int rad_mul;
	int rad_div;
public:
	afx_msg void OnBnClickedRadDiv();
	afx_msg void OnBnClickedBtnCal();
	afx_msg void OnEnChangeEdtVal2();
	afx_msg void OnEnChangeEdtResult();
};

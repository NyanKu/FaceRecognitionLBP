
// lbpDlg.h : ͷ�ļ�
//

#pragma once
#include "afxeditbrowsectrl.h"


// ClbpDlg �Ի���
class ClbpDlg : public CDialogEx
{
// ����
public:
	ClbpDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LBP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedExit();
	afx_msg void OnBnClickedTrain();
	CMFCEditBrowseCtrl my_filepath;
	afx_msg void OnBnClickedRecognition();
	CMFCEditBrowseCtrl my_picpath;
	afx_msg void OnEnChangeMfceditbrowse2();
	CMFCEditBrowseCtrl my_videopath;
	afx_msg void OnBnClickedCamera();
	afx_msg void OnBnClickedStop();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedVideo();
	afx_msg void OnBnClickedReadRes();
	afx_msg void OnEnChangeMfceditbrowse1();
	afx_msg void OnBnClickedButton2();
};

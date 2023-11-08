
#include "EXEINFO.h"
#include "EXERES.h"
#include <Buttons.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <StdCtrls.hpp>//----------------------------------------------------------------------------
#ifndef __About_frm_HDR__
#define __About_frm_HDR__
//----------------------------------------------------------------------------
#if __BORLANDC__ > 0x551
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Windows.hpp>
#include <System.hpp>
#include "FRAMEPAN.h"
#include "EXEINFO.h"
#include "EXERES.h"
#else
#include <Windows.hpp>
#include <Buttons.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <StdCtrls.hpp>
#include "FRAMEPAN.h"
#include "EXEINFO.h"
#include "EXERES.h"
#endif
#pragma hdrstop

//----------------------------------------------------------------------------
class TAbout_form : public TForm
{
__published:
		TImage *Image1;
		TExeInformation *ExeInformation1;
		TLabel *Label2;
		TLabel *Label3;
		TLabel *Label4;
        TLabel *Label5;
        TLabel *Label1;
	TStatusBar *StatusBar1;
    TExeResource *ExeResource1;
    TMemo *Memo1;
    TBevel *Bevel1;
    TPanel *Panel1;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TSpeedButton *SpeedButton3;
    TPanel *Panel2;
    TButton *Button1;
    TButton *Button2;
    TPanel *Panel3;
    TImage *Image2;
		void __fastcall FormCreate(TObject *Sender);
		void __fastcall FormHide(TObject *Sender);
		void __fastcall FormKeyDown(TObject *Sender, WORD &Key,TShiftState Shift);
		void __fastcall Label5Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
private:
    HINSTANCE hInst;
public:
    virtual __fastcall TAbout_form(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TAbout_form *About_form;
//----------------------------------------------------------------------------
#endif

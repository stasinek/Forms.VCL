//----------------------------------------------------------------------------
#ifndef About_frm_H
#define About_frm_H
//----------------------------------------------------------------------------
#include <System.hpp>
#include <Windows.hpp>
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <Graphics.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include "..\Packages\exeinfo.h"
#include "..\Packages\framepan.h"
#include <ComCtrls.hpp>
#include "..\Packages\EXEINFO.h"
#include "..\Packages\EXERES.h"
//----------------------------------------------------------------------------
class TAboutForm : public TForm
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
    virtual __fastcall TAboutForm(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TAboutForm *AboutForm;
//----------------------------------------------------------------------------
#endif

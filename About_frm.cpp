//--------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------
#include "About_frm.h"
//---------------------------------------------------------------------
#pragma link "framepan"
#pragma link "EXEINFO"
#pragma link "EXERES"
#pragma resource "*.dfm"
//---------------------------------------------------------------------
TAbout_form *About_form;
//---------------------------------------------------------------------

__fastcall TAbout_form::TAbout_form(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall TAbout_form::FormCreate(TObject *Sender)
{
AnsiString temp;
temp = ExeInformation1->ProductName;
if (temp.Length()>0)
	 Label2->Caption = temp;
temp = ExeInformation1->FileVersion;
if (temp.Length()>0)
	 Label4->Caption = temp;
temp = ExeInformation1->CompanyName;
if (temp.Length()>0)
	 Label1->Caption = temp;
temp = ExeInformation1->LegalCopyright;
if (temp.Length()>0)
	 Label3->Caption = temp;
temp = ExeInformation1->Comments;
if (temp.Length()>0)
	 Label5->Caption = temp;
}
//---------------------------------------------------------------------------


void __fastcall TAbout_form::FormKeyDown(TObject *Sender, WORD &Key,
		TShiftState Shift)
{
if (Key==VK_ESCAPE || Key==VK_SPACE || Key==VK_RETURN) this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAbout_form::FormHide(TObject *Sender)
{
ShowWindow(Application->Handle, SW_SHOWNA);
ShowWindow(Application->Handle, SW_HIDE);
}
//---------------------------------------------------------------------------

#include <shellapi.h>
void __fastcall TAbout_form::Label5Click(TObject *Sender)
{
ShellExecute(this->Handle,"open",String("SMTP:// " + Label5->Caption).c_str(),
				 NULL,"",SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------

void __fastcall TAbout_form::FormShow(TObject *Sender)
{
AnsiString temp;
temp = ExeInformation1->ProductName;
if (temp.Length()>0)
	 Label2->Caption = temp;
temp = ExeInformation1->FileVersion;
if (temp.Length()>0)
	 Label4->Caption = temp;
temp = ExeInformation1->CompanyName;
if (temp.Length()>0)
	 Label1->Caption = temp;
temp = ExeInformation1->LegalCopyright;
if (temp.Length()>0)
	 Label3->Caption = temp;
temp = ExeInformation1->Comments;
if (temp.Length()>0)
	 Label5->Caption = temp;
}
//---------------------------------------------------------------------------

void __fastcall TAbout_form::Button1Click(TObject *Sender)
{
Button1->ModalResult = mrOk;
}
//---------------------------------------------------------------------------


void __fastcall TAbout_form::SpeedButton1Click(TObject *Sender)
{
SpeedButton1->Down = true;
}
//---------------------------------------------------------------------------

void __fastcall TAbout_form::SpeedButton2Click(TObject *Sender)
{
SpeedButton2->Down = true;

}
//---------------------------------------------------------------------------

void __fastcall TAbout_form::SpeedButton3Click(TObject *Sender)
{
SpeedButton3->Down = true;

}
//---------------------------------------------------------------------------

void __fastcall TAbout_form::Button2Click(TObject *Sender)
{
Button2->ModalResult = mrCancel;
}
//---------------------------------------------------------------------------




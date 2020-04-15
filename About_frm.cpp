//--------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------
#include "About_frm.h"
//---------------------------------------------------------------------
#pragma link "exeinfo"
#pragma link "framepan"
#pragma link "EXEINFO"
#pragma link "EXERES"
#pragma resource "*.dfm"
//---------------------------------------------------------------------
TAboutForm *AboutForm;
//---------------------------------------------------------------------

__fastcall TAboutForm::TAboutForm(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall TAboutForm::FormCreate(TObject *Sender)
{
AnsiString temp;
temp = ExeInformation1->LegalCopyright;
if (temp.Length()>0)
	 Label3->Caption = temp;
temp = ExeInformation1->ProductName;
if (temp.Length()>0)
	 Label2->Caption = temp;
temp = ExeInformation1->FileVersion;
if (temp.Length()>0)
	 Label4->Caption = temp;
temp = ExeInformation1->CompanyName;
if (temp.Length()>0)
	 Label1->Caption = temp;
temp = ExeInformation1->Comments;
if (temp.Length()>0)
	 Label5->Caption = temp;
}
//---------------------------------------------------------------------------


void __fastcall TAboutForm::FormKeyDown(TObject *Sender, WORD &Key,
		TShiftState Shift)
{
if (Key==VK_ESCAPE || Key==VK_SPACE || Key==VK_RETURN) this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAboutForm::FormHide(TObject *Sender)
{
ShowWindow(Application->Handle, SW_SHOWNA);
ShowWindow(Application->Handle, SW_HIDE);
}
//---------------------------------------------------------------------------

#include <shellapi.h>
void __fastcall TAboutForm::Label5Click(TObject *Sender)
{
ShellExecute(this->Handle,"open",String("SMTP:// " + Label5->Caption).c_str(),
				 NULL,"",SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------

void __fastcall TAboutForm::FormShow(TObject *Sender)
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

/*RECT windowrect, temprect, screenrect; ::GetClientRect(this->Handle,&windowrect);
screenrect.left = 0;
screenrect.right  = GetSystemMetrics (SM_CXSCREEN);
screenrect.top = 0;
screenrect.bottom = GetSystemMetrics (SM_CYSCREEN);
*/

/*POINT mousepoint;
//GetCursorPos(&mousepoint);

	 temprect.left    = mousepoint.x - temprect.right/2;
if (temprect.left	   < screenrect.left)
	{temprect.left    = screenrect.left;
	}
	 temprect.right  += temprect.left;
if (temprect.right  >= screenrect.right)
	{temprect.left    = screenrect.right  - (temprect.right-temprect.left);
	}
	 temprect.top     = mousepoint.y - temprect.bottom/2;
if (temprect.top	   < screenrect.top)
	{temprect.top     = screenrect.top;
	}
	 temprect.bottom += temprect.top;
if (temprect.bottom >= screenrect.bottom)
	{temprect.top     = screenrect.bottom - (temprect.bottom-temprect.top);
	}
  */
/*	 temprect.left    = (screenrect.right - screenrect.left)/2 - (windowrect.right-windowrect.left)/2;
if (temprect.left < screenrect.left)
	{temprect.left    = screenrect.left;
	}
	 temprect.top     = (screenrect.bottom - screenrect.top)/2 - (windowrect.bottom-windowrect.top)/2;
if (temprect.top  < screenrect.top)
	{temprect.top     = screenrect.top;
	}

SetWindowPos(this->Handle,NULL,
		temprect.left,temprect.top,0,0,
		SWP_NOCOPYBITS|SWP_NOSIZE|SWP_NOACTIVATE|SWP_NOZORDER);

*/
}
//---------------------------------------------------------------------------

void __fastcall TAboutForm::Button1Click(TObject *Sender)
{
Button1->ModalResult = mrOk;
//this->Close();
}
//---------------------------------------------------------------------------


void __fastcall TAboutForm::SpeedButton1Click(TObject *Sender)
{
SpeedButton1->Down = true;
}
//---------------------------------------------------------------------------

void __fastcall TAboutForm::SpeedButton2Click(TObject *Sender)
{
SpeedButton2->Down = true;

}
//---------------------------------------------------------------------------

void __fastcall TAboutForm::SpeedButton3Click(TObject *Sender)
{
SpeedButton3->Down = true;

}
//---------------------------------------------------------------------------

void __fastcall TAboutForm::Button2Click(TObject *Sender)
{
Button2->ModalResult = mrCancel;
//Close();
}
//---------------------------------------------------------------------------



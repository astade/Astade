//******************************************************
//** Code generated by the Astade CppGenerator
//** Date:     2006-03-03 12:29:25 UTC
//** Filename: SeqApplication.h
//******************************************************

#ifndef __SEQAPPLICATION_H
  #define __SEQAPPLICATION_H

//****** specification prolog ******
//[/Users/stefan/Developer/Astade-UML/trace2uml/Model/Package_LEOIFVGO/classes/class_LVBRXWZT/prolog.h]
#include <wx/wx.h>
#include <wx/config.h>
#include <wx/confbase.h>
#include <wx/fileconf.h>
#include <wx/image.h>
//[EOF]
//**********************************

// Relation includes:
#include "SeqFrame.h"

class SeqApplication : public wxApp
{
public:
	bool OnInit();

protected:
	SeqFrame*	myFrame;

private:
};

#endif

#include "UseFrame.h"

BEGIN_EVENT_TABLE(UseFrame,wxFrame)
	EVT_CLOSE(UseFrame::Exit)
	EVT_MENU(ID_SAVEGRAPH, UseFrame::SaveGraphic)
	EVT_MENU(ID_SAVE, UseFrame::Save)
	EVT_MENU(ID_SAVEAS, UseFrame::SaveFileAs)
	EVT_MENU(ID_ABOUT, UseFrame::About)
	EVT_MENU(ID_OPEN, UseFrame::Open)
	EVT_MENU(ID_COPYGRAPH, UseFrame::CopyBitmap)
END_EVENT_TABLE()

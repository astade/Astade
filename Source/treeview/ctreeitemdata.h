// Class automatically generated by Dev-C++ New Class wizard

#ifndef CTREEITEMDATA_H
#define CTREEITEMDATA_H

#include <wx/filename.h>
#include <wx/treectrl.h> // inheriting class's header file
#include "AstadeDef.h"

#define IS_ITEM(x,y) if ((x&0xFFF00000)==y)

class CTreeItemData : public wxTreeItemData
{
	public:
		CTreeItemData();
		~CTreeItemData();
		wxFileName path;
		int type;
		wxString tmp;
};

#endif // CTREEITEMDATA_H


SetMinSize(wxSize(430,350));
wxBoxSizer *topsizer = new wxBoxSizer( wxVERTICAL );
SetSizer( topsizer );

int elementType;

if (wxConfigBase::Get()->Read("Astade/Type",&elementType));
{
	switch(elementType&0x7ff00000)
	{
		case ITEM_IS_COMPONENTS:
		case ITEM_IS_COMPONENT:
		case ITEM_IS_CONFIGURATION:
		case ITEM_IS_PACKAGE:
			AddIconSizer(topsizer,true,false,false);
			AddDescriptionSizer(topsizer);
		break;

		case ITEM_IS_STATECHART:
			AddIconSizer(topsizer,true,false,false);
			AddInitialStateSizer(topsizer);
			AddDescriptionSizer(topsizer);
		break;

		case ITEM_IS_CLASS:
			AddIconSizer(topsizer,true,false,false);
			AddBaseClassesSizer(topsizer);
			AddDescriptionSizer(topsizer);
		break;

		case ITEM_IS_OPERATION:
			if (elementType&ITEM_IS_NORMALOP)
			{
				AddIconSizer(topsizer,true,true,false);
				AddCheckboxSizer(topsizer,true,true,true,true,true);
				AddDescriptionSizer(topsizer);
			}
			else
			if (elementType&ITEM_IS_DEST)
			{
				AddIconSizer(topsizer,false,false,false);
				AddCheckboxSizer(topsizer,false,true,false,false,true);
				AddDescriptionSizer(topsizer);
			}
			else
			{
				AddIconSizer(topsizer,false,false,false);
				AddCheckboxSizer(topsizer,false,false,false,false,true);
				AddInitializerSizer(topsizer);
				AddDescriptionSizer(topsizer);
			}
		break;

		case ITEM_IS_ATTRIBUTE:
			AddIconSizer(topsizer,true,true,true);
			AddCheckboxSizer(topsizer,true,false,true,false,true);
			AddDescriptionSizer(topsizer);
		break;

		case ITEM_IS_RELATION:
			AddIconSizer(topsizer,true,false,false);
			AddRelationSizer(topsizer);
			AddDescriptionSizer(topsizer);
		break;

		case ITEM_IS_PARAMETER:
			AddIconSizer(topsizer,true,true,false);
			AddDescriptionSizer(topsizer);
		break;

		default:
			AddIconSizer(topsizer,false,false,false);
			topsizer->AddStretchSpacer();
		break;
	}
	SetIcon();
}


AddButtonSizer(topsizer);

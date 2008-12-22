// -*- C++ -*- generated by wxGlade 0.5 on Sun Dec 21 16:12:44 2008 from C:\Dokumente und Einstellungen\Thomas\Eigene Dateien\Astade\Model\components_WGNBOFKH\component_KSEQOEET\manual\dialogs.wxg

#include "generatedSearchDialog.h"


generatedSearchDialog::generatedSearchDialog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: generatedSearchDialog::generatedSearchDialog
    sizer_7_staticbox = new wxStaticBox(this, -1, wxT("Scope"));
    sizer_12_staticbox = new wxStaticBox(this, -1, wxT("Looking for"));
    sizer_13_staticbox = new wxStaticBox(this, -1, wxT("Fields to search in"));
    sizer_6_staticbox = new wxStaticBox(this, -1, wxT("Options"));
    searchTextLabel = new wxStaticText(this, wxID_ANY, wxT("Text to find:"));
    const wxString TextToFind_choices[] = {
        
    };
    TextToFind = new wxComboBox(this, ID_TextToFind, wxT(""), wxDefaultPosition, wxDefaultSize, 0, TextToFind_choices, wxCB_DROPDOWN);
    OptionCaseSensitive = new wxCheckBox(this, ID_OptionCaseSensitive, wxT("Case sensitive"));
    OptionWholeWordsOnly = new wxCheckBox(this, ID_OptionWholeWordsOnly, wxT("Whole words only"));
    OptionRegularExpression = new wxCheckBox(this, ID_OptionRegularExpression, wxT("Regular expression"));
    OptionMatchesNOT = new wxCheckBox(this, ID_OptionMatchesNOT, wxT("Matches NOT"));
    ScopeEntireModel = new wxRadioButton(this, ID_ScopeEntireModel, wxT("Entire model"));
    ScopeActiveComponent = new wxRadioButton(this, ID_ScopeActiveComponent, wxT("Active component"));
    LookingForClass = new wxCheckBox(this, ID_LookingForClass, wxT("Class"));
    LookingForAttribute = new wxCheckBox(this, ID_LookingForAttribute, wxT("Attribute or Relation"));
    LookingForOperation = new wxCheckBox(this, ID_LookingForOperation, wxT("Operation"));
    LookingForParameter = new wxCheckBox(this, ID_LookingForParameter, wxT("Parameter"));
    LookingForType = new wxCheckBox(this, ID_LookingForType, wxT("Type"));
    LookingForState = new wxCheckBox(this, ID_LookingForState, wxT("State"));
    LookingForUserCode = new wxCheckBox(this, ID_LookingForUserCode, wxT("User code"));
    LookingForAll = new wxCheckBox(this, ID_LookingForAll, wxT("all of them"));
    FieldsToSearchName = new wxCheckBox(this, ID_FieldsToSearchName, wxT("Name"));
    FieldsToSearchType = new wxCheckBox(this, ID_FieldsToSearchType, wxT("Type"));
    FieldsToSearchDefault = new wxCheckBox(this, ID_FieldsToSearchDefault, wxT("Default"));
    FieldsToSearchUserCode = new wxCheckBox(this, ID_FieldsToSearchUserCode, wxT("User code"));
    FieldsToSearchDescription = new wxCheckBox(this, ID_FieldsToSearchDescription, wxT("Description"));
    FieldsToSearchAll = new wxCheckBox(this, ID_FieldsToSearchAll, wxT("all of them"));

    set_properties();
    do_layout();
    // end wxGlade
}


void generatedSearchDialog::set_properties()
{
    // begin wxGlade: generatedSearchDialog::set_properties
    SetTitle(wxT("search"));
    LookingForAll->SetValue(1);
    FieldsToSearchAll->SetValue(1);
    // end wxGlade
}


void generatedSearchDialog::do_layout()
{
    // begin wxGlade: generatedSearchDialog::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_2 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_4 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_11 = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* sizer_13 = new wxStaticBoxSizer(sizer_13_staticbox, wxHORIZONTAL);
    wxBoxSizer* sizer_14 = new wxBoxSizer(wxHORIZONTAL);
    wxGridSizer* grid_sizer_2 = new wxGridSizer(4, 2, 5, 20);
    wxStaticBoxSizer* sizer_12 = new wxStaticBoxSizer(sizer_12_staticbox, wxHORIZONTAL);
    wxGridSizer* grid_sizer_1 = new wxGridSizer(4, 2, 5, 5);
    wxBoxSizer* sizer_5 = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* sizer_7 = new wxStaticBoxSizer(sizer_7_staticbox, wxHORIZONTAL);
    wxBoxSizer* sizer_10 = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* sizer_6 = new wxStaticBoxSizer(sizer_6_staticbox, wxHORIZONTAL);
    wxBoxSizer* sizer_9 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_3 = new wxBoxSizer(wxHORIZONTAL);
    sizer_3->Add(searchTextLabel, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 5);
    sizer_3->Add(TextToFind, 1, wxALIGN_CENTER_VERTICAL, 0);
    sizer_1->Add(sizer_3, 0, wxALL|wxEXPAND, 5);
    sizer_9->Add(OptionCaseSensitive, 0, wxALL, 5);
    sizer_9->Add(OptionWholeWordsOnly, 0, wxALL, 5);
    sizer_9->Add(OptionRegularExpression, 0, wxALL, 5);
    sizer_9->Add(OptionMatchesNOT, 0, wxALL, 5);
    sizer_6->Add(sizer_9, 0, wxEXPAND, 0);
    sizer_5->Add(sizer_6, 0, wxEXPAND, 0);
    sizer_10->Add(ScopeEntireModel, 0, wxALL, 5);
    sizer_10->Add(ScopeActiveComponent, 0, wxLEFT|wxRIGHT, 5);
    sizer_7->Add(sizer_10, 0, wxEXPAND, 0);
    sizer_5->Add(sizer_7, 0, wxTOP|wxBOTTOM|wxEXPAND, 5);
    sizer_4->Add(sizer_5, 0, wxEXPAND, 0);
    grid_sizer_1->Add(LookingForClass, 0, 0, 0);
    grid_sizer_1->Add(LookingForAttribute, 0, 0, 0);
    grid_sizer_1->Add(LookingForOperation, 0, 0, 0);
    grid_sizer_1->Add(LookingForParameter, 0, 0, 0);
    grid_sizer_1->Add(LookingForType, 0, 0, 0);
    grid_sizer_1->Add(LookingForState, 0, 0, 0);
    grid_sizer_1->Add(LookingForUserCode, 0, 0, 0);
    grid_sizer_1->Add(LookingForAll, 0, 0, 0);
    sizer_12->Add(grid_sizer_1, 0, wxEXPAND, 0);
    sizer_11->Add(sizer_12, 0, wxEXPAND, 0);
    grid_sizer_2->Add(FieldsToSearchName, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchType, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchDefault, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchUserCode, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchDescription, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchAll, 0, 0, 0);
    sizer_14->Add(grid_sizer_2, 0, wxEXPAND, 0);
    sizer_13->Add(sizer_14, 0, wxEXPAND, 0);
    sizer_11->Add(sizer_13, 0, wxTOP|wxEXPAND, 5);
    sizer_4->Add(sizer_11, 0, wxLEFT|wxRIGHT|wxEXPAND, 5);
    sizer_2->Add(sizer_4, 0, wxEXPAND, 0);
    sizer_1->Add(sizer_2, 0, wxLEFT|wxEXPAND, 5);
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    Layout();
    // end wxGlade
}


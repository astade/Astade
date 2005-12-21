wxConfigBase* theConfig = wxConfigBase::Get();
const wxString& dir = wxDirSelector("Set Modelpath",theConfig->Read("TreeView/ModelPath"));
wxFileName filename(dir);

if ( !dir.empty() )
{
	modelPathTextControl->SetValue(filename.GetFullPath());
	wxConfigBase* theConfig = wxConfigBase::Get();
	theConfig->Write("TreeView/ActiveComponent","none");
	theConfig->Flush();
}


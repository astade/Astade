myLabel = wxGetTextFromUser("","Label",myLabel,myParent);
myLabel.Trim(false);
myLabel.Trim(true);
myParent->Refresh();

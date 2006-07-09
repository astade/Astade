wxMenu* aFileMenu = new wxMenu(0);
aFileMenu->Append(ID_SELECTMODEL, "&open model...", "", wxITEM_NORMAL);
aFileMenu->AppendSeparator();  //Choi
aFileMenu->Append(ID_EXIT, "E&xit", "", wxITEM_NORMAL);  //Choi; Wonder why hotkey is not working.

wxMenu* aCustomizeMenu = new wxMenu(0);
aCustomizeMenu->Append(ID_SETEDITORS, "&set directories...", "", wxITEM_NORMAL);
aCustomizeMenu->Append(ID_SETREGEX, "set &regular expressions...", "", wxITEM_NORMAL);

wxMenu* aHelpMenu = new wxMenu(0);
aHelpMenu->Append(ID_MNU_HELP, "&help");
aHelpMenu->Append(ID_MNU_INFO, "&info");
aHelpMenu->Append(ID_MNU_ABOUT, "&about");

myMenuBar = new wxMenuBar;
myMenuBar->Append(aFileMenu, "&File");
myMenuBar->Append(aCustomizeMenu, "&Preferences");
myMenuBar->Append(aHelpMenu, "&Help");

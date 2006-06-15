CreateStatusBar(2); // Create a statusbar with 2 fields

wxMenuBar* aMenuBar = new wxMenuBar;
wxMenu* aFileMenu = new wxMenu();
wxMenu* aHelpMenu = new wxMenu();

SetSize(-1,-1,800,600);

aFileMenu->Append(-1,"Open","", wxITEM_NORMAL);
aFileMenu->Append(ID_SAVE,"Save","", wxITEM_NORMAL);
aFileMenu->AppendSeparator();
aFileMenu->Append(ID_SAVEAS,"Save as ...","", wxITEM_NORMAL);
aFileMenu->Append(-1,"Save graphic as ...","", wxITEM_NORMAL);
aFileMenu->Append(-1,"Copy graphic to clipboard","", wxITEM_NORMAL);

aHelpMenu->Append(ID_ABOUT,"about","", wxITEM_NORMAL);

aMenuBar->Append(aFileMenu,"File");
aMenuBar->Append(aHelpMenu,"Help");
SetMenuBar(aMenuBar);

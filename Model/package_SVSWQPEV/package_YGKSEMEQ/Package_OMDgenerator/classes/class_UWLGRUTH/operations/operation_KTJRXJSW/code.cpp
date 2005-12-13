// vi: set tabstop=4:
wxFileName path = pe->GetFileName();
AdeDirectoryElement de(path);

if ((pe->GetType() & 0x0ff00000) == ITEM_IS_CLASS)
{
	tList attributes, operations;
	wxString prename(parent);
	if (!parent.IsEmpty())
		prename = prename + ":" + pe->GetName();
	else
		prename = pe->GetName();
	wxString nodename(path.GetDirs()[path.GetDirCount()-1]);
	nodelist.insert(nodename);
	if (showattr != NONE || showoper != NONE)
		AnalyseClass(pe, attributes, operations);
	std::cout << std::endl;
	IndentOutput(depth);
	std::cout << path.GetDirs()[path.GetDirCount()-1]
		<< " [shape=record, label=\"{"
		<< prename
		<< '|';
	for (int i = 0; i < showattr && i < attributes.size(); ++i)
		for (std::set<wxString, AdeStringCompare>::iterator it = attributes[i].begin();
			it != attributes[i].end(); ++it)
		{
			switch (i)
			{
				case 0:
					std::cout << "+ ";
					break;

				case 1:
					std::cout << "# ";
					break;

				case 2:
					std::cout << "- ";
					break;
			}
			std::cout << *it << "\\l";
		}
	std::cout << '|';
	for (int i = 0; i < showoper && i < operations.size(); ++i)
		for (std::set<wxString, AdeStringCompare>::iterator it = operations[i].begin();
			it != operations[i].end(); ++it)
		{
			switch (i)
			{
				case 0:
					std::cout << "+ ";
					break;

				case 1:
					std::cout << "# ";
					break;

				case 2:
					std::cout << "- ";
					break;
			}
			std::cout << it->Mid(1) << "()\\l";
		}
	std::cout << "}\", style=filled, fillcolor=grey95, color=black];"
		<< std::endl;

	for (AdeElementIterator eit = de.begin(); eit != de.end(); ++eit)
	{
		AdeModelElement* pme = eit.CreateNewElement();
		ListNodes(depth, prename, pme);
		delete pme;
	}
}
else if ((pe->GetType() & 0x0ff00000) == ITEM_IS_CLASSES)
{
	for (AdeElementIterator eit = de.begin(); eit != de.end(); ++eit)
	{
		AdeModelElement* pme = eit.CreateNewElement();
		ListNodes(depth, parent, pme);
		delete pme;
	}
}
else if ((pe->GetType() & 0x0ff00000) == ITEM_IS_PACKAGE)
{
	wxString filename;
	wxDir dir(path.GetPath());

	IndentOutput(depth);
	std::cout << "subgraph cluster"
		<< path.GetDirs()[path.GetDirCount()-1]
		<< " {"
		<< std::endl;
	IndentOutput(depth);
	std::cout << "\tlabel = \"Package: "
		<< pe->GetName()
		<< "\"; labeljust=left; fontname=Helvetica; fontsize=10; color=red;"
		<< std::endl;
	for (AdeElementIterator eit = de.begin(); eit != de.end(); ++eit)
	{
		AdeModelElement* pme = eit.CreateNewElement();
		ListNodes(depth + 1, parent, pme);
		delete pme;
	}
	IndentOutput(depth);
	std::cout << '}'
		<< std::endl;
}

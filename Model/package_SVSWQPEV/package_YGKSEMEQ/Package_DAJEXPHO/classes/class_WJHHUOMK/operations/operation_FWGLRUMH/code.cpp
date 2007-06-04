wxString event = theTransition.GetTrigger();

if (!event.empty())
{
	wxString guard = theTransition.GetGuard();

	fprintf(implementationFile,"\t// %s\n",theTransition.GetLabel().c_str());

	if (guard.empty())
		fprintf(implementationFile,"\tif (message.Primitive() == %s)\n\t{\n",event.c_str());
	else
		fprintf(implementationFile,"\tif ((message.Primitive() == %s) && (%s(message)))\n\t{\n",event.c_str(),theTransition.GetGuard().c_str());

	std::list<wxString> aList = theTransition.GetActions();

	wxString nextState = theTransition.GetDestination();

	if (!theTransition.IsInternalTransition())
	{
		if (!theState.GetExitAction().empty())
		{
			fprintf(implementationFile,"\t\t// exit action\n");
			fprintf(implementationFile,"\t\t%s(message);\n",theState.GetExitAction().c_str());
		}

		if (!theState.GetTimeout().empty())
		{
			fprintf(implementationFile,"\t\t// Stop Timer\n");
			fprintf(implementationFile,"\t\tif ((message.Primitive() != dIID_VFSM_MSG_AbbruchTimer) && (m_RunningTimer))\n\t\t\tCMessage::Delete(m_RunningTimer);\n");
			fprintf(implementationFile,"\t\tm_RunningTimer = 0;\n\n");
		}

		fprintf(implementationFile,"\t\t// next state\n");

		if (theTransition.IsSelfTransition())
			fprintf(implementationFile,"\t\tnextState = &%s::Enter_%s;\n",theStatechart.GetName().c_str(),theState.GetName().c_str());
		else
			fprintf(implementationFile,"\t\tnextState = &%s::Enter_%s;\n",theStatechart.GetName().c_str(),nextState.c_str());
	}
	else
		fprintf(implementationFile,"\t\t// internal Transition\n");

	if (!aList.empty())
		fprintf(implementationFile,"\t\t// Actions\n");

	for (std::list<wxString>::iterator iter = aList.begin(); iter!=aList.end(); iter++)
		fprintf(implementationFile,"\t\t%s(message);\n",(*iter).c_str());

	fprintf(implementationFile,"\t}\n\telse\n");
}

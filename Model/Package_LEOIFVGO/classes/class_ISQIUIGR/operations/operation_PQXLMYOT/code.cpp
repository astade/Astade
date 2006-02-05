itsEvents.clear();

itsEvents.push_back(SeqEvent(wxNOT_FOUND,wxNOT_FOUND,ID_NOP,wxEmptyString,wxEmptyString));
itsEvents.push_back(SeqEvent(wxNOT_FOUND,wxNOT_FOUND,ID_NOP,wxEmptyString,wxEmptyString));
itsEvents.back().time = GetUpperBorder();

classes.Clear();
eventQueue.clear();
eventQueue.reserve(MAXCLASSCOUNT);
for (int i=0; i < MAXCLASSCOUNT; i++)
{
	std::list<int> e;
	eventQueue.push_back(e);
}

longestTimeStamp = 0;
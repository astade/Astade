wxBoxSizer *checkbox = new wxBoxSizer( wxHORIZONTAL );
topSizer->Add(checkbox,0,wxEXPAND|wxALL,10);

if (hasConst)
{
	ConstField =  new wxCheckBox(this, ID_CONST, "const");
	checkbox->Add(ConstField,0);
}
checkbox->AddStretchSpacer();

if (hasVirtual)
{
	VirtualField =  new wxCheckBox(this, ID_VIRTUAL, "virtual");
	checkbox->Add(VirtualField,0);
}

checkbox->AddStretchSpacer();

if (hasStatic)
{
	StaticField =  new wxCheckBox(this, ID_STATIC, "static");
	checkbox->Add(StaticField,0);
}

checkbox->AddStretchSpacer();

if (hasAbstract)
{
	AbstractField =  new wxCheckBox(this, ID_ABSTRACT, "abstract");
	checkbox->Add(AbstractField,0);
}

if (hasVisibility)
{
	m_private =  new wxRadioButton(this, ID_M_PRIVATE ,"private");
	m_protected =  new wxRadioButton(this, ID_M_PROTECTED ,"protected");
	m_public =  new wxRadioButton(this, ID_M_PUBLIC ,"public");

	checkbox->AddStretchSpacer();

	checkbox->Add(m_private,0);
	checkbox->AddStretchSpacer();
	checkbox->Add(m_protected,0);
	checkbox->AddStretchSpacer();
	checkbox->Add(m_public,0);
}
else
{
	checkbox->AddStretchSpacer();
	checkbox->AddStretchSpacer();
}
BEGIN_EVENT_TABLE(CodeEditControl,wxTextCtrl)
	EVT_TEXT(-1, CodeEditControl::OnTextChange)
	EVT_CHAR(CodeEditControl::OnKey)
	EVT_IDLE(CodeEditControl::OnIdle)
END_EVENT_TABLE()
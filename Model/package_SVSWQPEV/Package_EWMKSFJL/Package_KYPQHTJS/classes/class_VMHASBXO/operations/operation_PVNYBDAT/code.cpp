if (isClicked)
{
	Stop();
	return;
}

int w,h;
myParent->GetVirtualSize(&w,&h);

AddSpeed(myGravityArea.GetBorderForce(w,h));
AddSpeed(myGravityArea.GetRelationForce());

glNode::Move();
int first = 0;
wxCoord x,y;

do
{
    dc.GetTextExtent(string.Mid(0,++first),&x,&y);
} while (x < pixelCount);

wxString firstPart = string.Mid(0,--first);

if (firstPart.Find(' ',true) > (int)(firstPart.size()/2))
    first = firstPart.Find(' ',true);
else if (firstPart.Find('-',true) > (int)(firstPart.size()/2))
    first = firstPart.Find('-',true)+1;

firstPart = string.Mid(0,first);
firstPart.Trim(true);
firstPart.Trim(false);

string = string.Mid(first);

string.Trim(true);
string.Trim(false);

return firstPart;

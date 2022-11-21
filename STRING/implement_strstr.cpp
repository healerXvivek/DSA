int strstr(string s, string x)
{
    int found=s.find(x);
    if(found != string::npos)
    return found;
    else
    return -1;
}

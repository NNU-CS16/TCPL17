int Substr(const char* str, const char* substr)
{
    int len1 = strlen(str);
    int len2 = strlen(substr);
    int i, j;
    for (i = 0; i < len1; i++)
    {
        if (str[i] == substr[0]) break;
    }
    if (i < len1 - len2)
    {
        for (j = i; j < i + len2; j++)
        {
            if (str[j] != substr[j - len2 - 1]) 
            return -1;
        }
        return i;
    }
    else
        return -1;
}

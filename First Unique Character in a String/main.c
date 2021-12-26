int firstUniqChar(char * s)
{    
    int alphabet[26] = {0};
    int i = -1;

    while(s[++i] != '\0')
        alphabet[s[i] - 'a']++;
    
    i = -1;
    while(s[++i] != '\0')
    {
        if(alphabet[s[i] - 'a'] == 1)
            return i;
    }   
    return -1;
}
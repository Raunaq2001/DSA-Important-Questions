char* reverse(char *str, int len)
{
    stack<char> stk;
    for(int i=0;str[i]!='\0';i++){
        stk.push(str[i]);
    }
    for(int i=0;i<len;i++){
        str[i]=stk.top();
        stk.pop();
    }
    return str;
}

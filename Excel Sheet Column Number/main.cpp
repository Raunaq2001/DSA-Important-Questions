    //https://www.youtube.com/watch?v=g-l4UpF62x0&ab_channel=KnowledgeCenter
    //Leetcode question # 171
    /*
        The idea is to use conversions like we do in case of hexadecimal to decimal but in this case instead of base being 16 base will be 26 simply because the domain
        is from 1-26

        Example: AB //First we will reverse the string
                 BA //Now we will implement a logic  like B*26^0+A*26^1

                 We will keep adding it to a variable ans and finally return it.
    */
    int titleToNumber(string columnTitle) {
        int ans=0;
        reverse(columnTitle.begin(),columnTitle.end());
        for(int i=0;i<columnTitle.length();i++){
            int temp=columnTitle[i]-'A'+1; // Since it will give one value less thats why we are explicitly adding a 1 to it
            temp=temp*pow(26,i);
            ans=ans+temp;
        }
        return ans;
    }

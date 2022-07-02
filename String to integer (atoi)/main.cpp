//Lettcode question # 8
    int myAtoi(string s) {
        //Remove white spaces
        int start=0,flag=1,ans=0,result=0,end=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                start++;
            }
            else{
                break;
            }
        }
        //To get the first white space after removing the white spaces ahead
        for(int i=start;i<s.size();i++){
            if(s[i]==' '){
                end=i+1;
                break;
            }
        }
        //To check for negative sign
        if(s[start]=='-'){
            flag=0;
            start++;
        }
        //Acutal conversion
        for(int i=start;i<end;i++){
            ans=s[i]-'0';
            if(ans>=0 && ans<=9) result=(result*10)+ans;
        }
        if(flag==0) result=result*-1;
        return result;
    }

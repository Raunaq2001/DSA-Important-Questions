    //https://www.youtube.com/watch?v=_xIBOUWEq1c&ab_channel=AlgorithmsMadeEasy
    https://walkccc.me/LeetCode/problems/0858
    int mirrorReflection(int p, int q) {
        int ext=q, ref=p;
        while(ext%2==0 && ref%2==0){
            ext=ext/2;
            ref=ref/2;
        }
        if(ext%2==0 && ref%2!=0) return 0;
        if(ext%2!=0 && ref%2!=0) return 1;
        if(ext%2!=0 && ref%2==0) return 2;
        return -1;
    }

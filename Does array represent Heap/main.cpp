    //@Author: RAUNAQ SINGH
    //https://practice.geeksforgeeks.org/problems/does-array-represent-heap4345/1?page=2&company[]=Cisco&sortBy=submissions
    //Concept used: left child value = (2*i)+1 and right child value (2*i)+2, using this we get the left and
    //right child respectively and compare it with the parent we also keep an index=0 which we increment as
    //+2 after every iterations because the max children possible is 2 and we keep the loop condition as
    //index<n-1 because we dont overflow
    bool isMaxHeap(int a[], int n)
    {
        int lchild=0,rchild=0,i=0,index=0;
        while(index<n-1){
            int parent=a[i];
            lchild=a[(2*i)+1];
            rchild=a[(2*i)+2];
            if(lchild>parent || rchild>parent) return false;
            i++;
            index=index+2;
        }
        return true;
    }

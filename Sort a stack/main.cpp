//@Author: RAUNAQ SINGH
/*
INTUITION: Insert the elements of the stack in a vector, sort the vector and then push the elements back in the
           stack.
*/
void sortStack(stack<int> &stack)
{
    vector<int> ans;
    while(!stack.empty()){
        ans.push_back(stack.top());
        stack.pop();
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.begin();i++){
        stack.push(ans[i]);
    }
}

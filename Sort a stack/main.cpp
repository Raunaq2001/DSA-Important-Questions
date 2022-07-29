/* The below method sorts the stack s
you are required to complete the below method */
// https://practice.geeksforgeeks.org/problems/sort-a-stack/1
// https://www.youtube.com/watch?v=W_lzMUGgeYg&ab_channel=Insidecode
// tempStack.top()<currElement :: Decreasing Order
// tempStack.top()>currElement :: Increasing Order
void SortedStack :: sort()
{
   	stack<int> tempStack;
    while(!s.empty()){
        int currElement=s.top();
        s.pop();
        while(!tempStack.empty() && tempStack.top()<currElement){
            int temp=tempStack.top();
            tempStack.pop();
            s.push(temp);
        }
        tempStack.push(currElement);
    }
    while(!tempStack.empty()){
        int temp=tempStack.top();
        tempStack.pop();
        s.push(temp);
    }
}

class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<char>st;
        for(auto& x:s){
            if(x=='(')
            st.push(x);
           else{
                if(!st.empty()&&st.top()=='(')
                st.pop();
                else
                count++;
            
        }
        }
        return count + st.size();
        
    }
};
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int count=0;
        vector<int>ans;
        for(auto x:seq){
          
            if(x=='('){
            count++;
            ans.push_back(count%2);
            }
            else {
                ans.push_back(count%2);
            count--;
            }
           
            
        }return ans;
    
    }
};
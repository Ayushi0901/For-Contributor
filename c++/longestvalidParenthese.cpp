// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.\
// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".



class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> st;
        int res=0;
        st.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                st.push(i);
            else{
                st.pop();
                if(st.empty())
                     st.push(i);
                else
                    res=max(res,(i-st.top()));
                    
            }
        }
        return res;
    }
};

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;

        for(auto ch : ops){

            if(ch == "+"){
                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);
                st.push(first + second);
            }
            else if (ch == "D"){
                st.push(2*st.top());
            }
            else if(ch == "C"){
                st.pop();
            }
            else{
                st.push(stoi(ch));
            }
        }
        int ans = 0;

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
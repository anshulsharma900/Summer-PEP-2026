https://leetcode.com/problems/asteroid-collision/description/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i : asteroids) {
            bool dest = false;

            while (!st.empty() && st.top() > 0 && i < 0) {
                if (st.top() < -i) {
                    st.pop();              // continue checking
                }
                else if (st.top() == -i) {
                    st.pop();
                    dest = true;
                    break;
                }
                else {
                    dest = true;
                    break;
                }
            }

            if (!dest)
                st.push(i);
        }

        int n = st.size();
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
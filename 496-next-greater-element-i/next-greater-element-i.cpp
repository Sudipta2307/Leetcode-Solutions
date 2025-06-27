class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> n;

        for (int i = 0; i < nums2.size(); i++) {
            while (!st.empty() && st.top() < nums2[i]) {
                n[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for (int i = 0; i < nums1.size(); i++) {
            if (n.find(nums1[i])!=n.end())
                nums1[i]=n[nums1[i]];
            else
                nums1[i]=-1;
        }
        return nums1;
    }
};
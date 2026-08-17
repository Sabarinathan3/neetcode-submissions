class Solution {
public:
    int maxArea(vector<int>& n) {
     int left = 0;
     int right = n.size()-1;
     int ans = 0;

     while (left < right){
        int height = min(n[left], n[right]);
        int widht = abs(left-right);
        int area = height * widht;

        ans = max(area, ans);

        if(n[left]<n[right]){
            left++;
        }
        else{
            right--;
        }
     }
     return ans;
    }
};

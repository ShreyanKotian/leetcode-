class Solution {
public:
    int maxArea(vector<int>& height) {  //0(n)
        int water = 0;
        int r= height.size()-1, l =0;

        while(l<r){
            int w = r - l;
            int ht = min(height[l], height[r]);
            int curwater = w*ht;
            water = max(water,curwater);

            height[l]< height[r]? l++ : r--;

        }

        return water;
        
    }
};
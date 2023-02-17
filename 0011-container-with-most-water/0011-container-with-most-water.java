class Solution {
    public int min(int a, int b){
        if(a > b){
            return b;
        }
        else{
            return a;
        }
    }
    public int max(int a, int b){
        if(a > b){
            return a;
        }
        else{
            return b;
        }
    }
    public int maxArea(int[] height) {
        int n = height.length;
        int max_area = 0;
        int left = 0;
        int right = n - 1;
        int area;
        while(right > left){
            area = (right - left)*min(height[left], height[right]);
            max_area = max(area, max_area);
            if(height[right] < height[left]){
                right--;
            }
            else if(height[right] > height[left]){
                left++;
            }
            else{
                right--;
                left++;
            }
        }
        
        return max_area;
        
        
        
    }
}
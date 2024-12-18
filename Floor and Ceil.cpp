class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int f = -1,c = -1;
        int l = 0, h = arr.size()-1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(arr[m] == x){
                f = arr[m];
                c = arr[m];
                break;
            }
            else if(arr[m] > x){
                c = arr[m];
                h = m-1;
            }
            else{
                f = arr[m];
                l = m + 1;
            }
        }
        return {f,c};
    }
};

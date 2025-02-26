class Solution {
public:
    bool possible(vector<int>& bd, int days, int m, int k){
        int count = 0, nob = 0;
        for(int i=0; i < bd.size(); i++){
            if(bd[i] <= days){
                count++;
            }
            else {
                nob += (count/k);
                count = 0;
            }
        }
        nob += (count/k);
        return nob >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < m*k){
            return -1;
        }
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        while(mini <= maxi){
            int mid = mini + (maxi - mini)/2;
            if(possible(bloomDay,mid,m,k)){
                maxi = mid - 1;
            }
            else{
                mini = mid + 1; 
            }
        }
        return mini;
    }
};

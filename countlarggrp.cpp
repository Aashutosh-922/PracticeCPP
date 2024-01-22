class Solution {
public:
    
     map<int, int> mp;
     int sum(int num){
         int s= 0;
         while(num){
             s+= num %10;
             num/=10;
         }
         return s;
     }


    
    int countLargestGroup(int n) {
        for(int i =1; i<=n; ++i) 
        ++mp[sum(i)];

        int mx = 0;
        for(auto &x : mp)
        mx = max(mx, (int)x.second);

        int ans =0;
        for(auto &x : mp) ans+= ((int)x.second == mx);
        return ans;
    }
};

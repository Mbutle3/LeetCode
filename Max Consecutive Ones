##Solution One
class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int curr_max = 0;
    int cnt = 0;
      
    for (auto i:nums) {
        
        if(i==1)
            cnt++;
        else{
            curr_max = max(curr_max,cnt);
            cnt=0;
        }
    }
    curr_max = max(curr_max,cnt);
    return curr_max;
}
};

##Solution Two
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int pos = 0;
				int curr_max = 0; 
				int len = nums.size();
        
				for (auto i = 0; i < len; i++) {
            if(nums[i] == 0) {
            curr_max = max(curr_max, i-pos);
            pos = i+1;
            }
        }
        curr_max = max(curr_max, len-pos);
        return curr_max;
    }
};

##Solution Three
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int len = nums.size();
        int curr_max = 0;
        
        for (int i = 0; i < len; i ++)
        {
            if (nums[i] == 1)
            {
                cnt ++;
            }
            else
            {
                curr_max = max (curr_max, cnt);
                cnt = 0;
            }
        }
        curr_max = max (curr_max, cnt);
        return curr_max;
    }
};

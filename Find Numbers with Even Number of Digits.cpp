##Solution One
class Solution{
public: 
    int findNumbers(vector<int> nums){
        int res = 0;
        int last = nums.size() - 1;
        
        for (int i = 0; i <= last; i++ ){
            if ((nums[i] > 999 && nums[i] < 10000) 
								|| (nums[i] > 9 && nums[i] < 99) 
								|| (nums[i] == 100000))
                res ++;
        }
        return res;
    }
};

##Solution Two
class Solution {

public:
    int count_digits_in_num(int num) {
        int current_count = 0;
        int remainder = 0;
        while (num != 0) {
            remainder = num % 10;
            num = num / 10;
            current_count ++;   
        }
        return current_count;
    }
    
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i ++) {
            if (count_digits_in_num(nums[i]) % 2 == 0) {
                res ++;
            }
        }
        return res;
    }
};

##Solution Three
class Solution {

public: 
    int count_digits(int num) { 
        int count = 0;
        int remainder = 0;
        while(num != 0) {
            remainder = num % 10;
            num = num / 10;
            count ++;
        }
        return count;
    }

public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        int len = nums.size();
        
        for (int i = 0; i < len; i ++) {
            if (count_digits(nums[i]) % 2 == 0) {
                res ++;
            }
        }
        return res;
    }
};

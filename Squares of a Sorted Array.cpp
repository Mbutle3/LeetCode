##Solution One
class Solution {
    
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        //1. Create a new return vector
        int len = nums.size();
        vector <int> return_vec(len);
        
        //2. Add the absolute value of the element at i in original vector to the return vector
        for (int i = 0; i < len; i ++) {
            int curr_num = abs(nums[i]);
            return_vec[i] = curr_num;
        }
        
        //Sqaure each element in the array
        for (int j = 0; j < len; j ++) {
            return_vec[j] = return_vec[j] * return_vec[j];
        }
        
        //4. Sort the vector for smallest to largest
        sort(return_vec.begin(), return_vec.end());
        
    return return_vec;
    }
};

##Solution Two
class Solution {
    
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        //1. Create a new return vector
        int len = nums.size();
        vector <int> return_vec(len);
        
        //2. left-most element
        int left = 0;
        //3. right-most element
        int right = len - 1;
        
        //4. loop through the array from right to left
        for (int i = len - 1; i >= 0; i --) {
            
            //5. if the absolute value of the right most element is greater 
            //   than the absolute value of the left most element
            //   result[i] will equal right most element sqrd
            //   right most element position i is decreased by one 
            if (abs(nums[right]) > abs(nums[left])) {
                return_vec[i] = nums[right] * nums[right];
                right--;
            }
            else {
                
            //6. Otherwise,
            //   result[i] will equal left most element sqrd
            //   left most element position i is incremented by one
                return_vec[i] = nums[left] * nums[left];
                left ++;
            }
        }
        return return_vec;
    }
};

##Solution Three
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        int l = 0;
        int r = len - 1;
        vector <int> res_vec (len);
        
        for (int i = 0; i < len; i ++) {
            if ( abs(nums[r]) > abs(nums[l])) {
                res_vec[i] = abs(nums[l]) * abs(nums[l]);
                l++;
            }
            else {
                res_vec[i] = abs(nums[r]) * abs(nums[r])  ;
                r --;
            }
        }
        sort(res_vec.begin(), res_vec.end());
        return res_vec;
    }
};

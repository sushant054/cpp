#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       // int insertPosition = 0;
        int j=0;
        for (int i = 0; i < nums.size(); i++) {
            // Fill all non-zero numbers
            if (nums[i] != 0) {
                swap(nums[i],nums[j]);
                j++;
//  nums[insertPosition] = nums[i];
           //     insertPosition++;
            }
        }
      //  while (insertPosition < nums.size()) {
           // nums[insertPosition++] = 0;
        }
    
};
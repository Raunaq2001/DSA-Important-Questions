  //Leetcode Question # 659
  //@Author: RAUNAQ SINGH
  /* Concept Used: Suppose x is an item of array, if there exist x + 1 and x + 2 in the array, then                  it is a consecutive subsequence, or is not. If consecutive number x + 3, x + 4,                    …, x + n exist, then the x, x + 1, …, x + n is a consecutive subsequence too. So                  we iterate the ascend array, check item can merge into previous consecutive                        subsequence or it need to form a new subsequence.
  */
  bool isPossible(vector<int>& nums) {
      unordered_map<int, int> count;
      unordered_map<int, int> tails;
      for (int i=0;i<nums.size();i++) count[nums[i]]++;
      for (auto item: nums) {
          if (0 == count[item]) continue;
          --count[item];
          if (tails[item - 1] > 0) {
              --tails[item - 1];
              ++tails[item];
          } else if (count[item + 1] > 0 && count[item + 2] > 0) {
              --count[item + 1];
              --count[item + 2];
              ++tails[item + 2];
          } else {
              return false;
          }
      }
      return true;
  }

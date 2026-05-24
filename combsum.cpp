#include <bits/stdc++.h>
using namespace std;
// failed attemp, this could only dectect a single number gap but not combination made out of single num
void backtrack(int start, vector<int>& nums, int target, vector<int>& current, vector<vector<int>>& result){
    int sum = accumulate(current.begin(),current.end(),0);
    if(sum == target){
        result.push_back(current);
    }else if(sum < target){
        int gap = target - sum;
    // std::find(vec.begin(), vec.end(), target) != vec.end() , a way to find a int inside a vector
       if(std::find(current.begin(), current.end(), target) != current.end()){
          current.push_back(gap);
          result.push_back(current);
       }
       
    }

    for (size_t i = 0; i < nums.size(); i++)
    {
        current.push_back(nums[i]);
        backtrack(i+0,nums,target,current,result);
        current.pop_back();
    }
    
}
void print1DVector(const std::vector<std::vector<int>>& grid) {
    std::cout << "[" << std::endl;
    for (const auto& row : grid) {
        std::cout << "  [";
        for (size_t i = 0; i < row.size(); ++i) {
            std::cout << row[i];
            if (i < row.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;
}
vector<vector<int>> combinationsum(vector<int>& candidates, int target){
    vector<vector<int>> result_container;
    vector<int> current;
    backtrack(1,candidates,target,current,result_container);
    return result_container;

}
int main(){
    vector<int> test = {2,3,6,7};
    print1DVector(combinationsum(test,7));

}
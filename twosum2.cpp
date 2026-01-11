#include <bits/stdc++.h>
using namespace std;
//rewrite
class solulu
{
private:
    
public:
    vector<int> twosum(vector<int> &sample, int target){
        int n = sample.size();
        for (int i = 0; i < n; i++)
        {
            int complement = target - sample[i];
            int left = i + 1;
            int right = n -1;
            int midcheck = -1;
            while (left <= right)
            {
                int mid = left +(right-left) / 2;
                if(sample[mid] >= complement){
                    midcheck = mid;
                    right = mid -1;
                }else{
                    left = mid +1;
                }
                if(midcheck != -1 && sample[midcheck] == complement){
                    return {i+1, midcheck + 1}; //return using 1 based indexing , if 0 based then just remove +1
                }
            }
            
        }
        return{};
        
    }    
};

int main(){
    solulu s;
    vector<int>arr = {2,7,10,11};
    int target = 9;
    vector<int> result = s.twosum(arr,target);

    for (int i = 0; i < result.size(); i++)
    {
        cout<< result[i]<<" ";
    }
    
}
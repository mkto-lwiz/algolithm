#include <bits/stdc++.h>
using namespace std;

class solulu
{
public:
    int maxarea(vector<int>& height){
        int fmax = 0;
        for (int i = 0; i < height.size(); i++)
        {
            int refer = height[i];
            for (int j = i + 1; j < height.size(); j++)
            {
                int mul_h = std::min(refer, height[j]);
                int temp_max = mul_h * j;
                if(temp_max > fmax){
                    fmax = temp_max; 
                }   
            }
            
        }
        return fmax; 
    };

};

int main() {
    solulu obj;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << obj.maxarea(height);
}
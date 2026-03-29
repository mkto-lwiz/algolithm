#include <bits/stdc++.h>
using namespace std;

class solulu
{
public:
    int maxarea(vector<int>& height){
        int l = 0;
        int r = height.size() -1;
        int fmax = 0;
        while (l < r)
        {
            int area = min(height[l], height[r]) * (r-l);
            fmax = max(fmax,area);
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
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
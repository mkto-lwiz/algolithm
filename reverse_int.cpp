#include <bits/stdc++.h>
using namespace std;

class solulu
{
private:
    
public:
    int rv(int n){
        int copied;
        int reversed = 0;
        while (n != 0)
        {
            if(reversed > INT32_MAX/10 || reversed < INT32_MIN/10 ){
                return 0;
            }else{
                copied = n%10;
                reversed = reversed*10 + copied;
                n /= 10;
                }
  
            }
        
        return reversed;
    }
};

int main() {
    // Test cases
    solulu s;
    int test_cases[] = {123, -123, 120, 0, 2147483647, -2147483648, 1534236469}; // Including edge cases like INT_MAX, INT_MIN, and overflow.
    
    for (int n : test_cases) {
        cout << "Input: " << n << " -> Reversed: " << s.rv(n) <<endl;
    }

    return 0;
}
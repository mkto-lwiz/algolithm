#include <bits/stdc++.h>
using namespace std;

    string countandsay(int n){
        
        if(n == 0) return "";
        string current_sequence = "1";
        cout<< current_sequence[0];
        while (--n)
        {
            string next_seq;
            for (int i = 0; i < current_sequence.size();)
            {
                int j = i;
                while (j < current_sequence.size() && current_sequence[j] == current_sequence[i])
                {
                    j++;
                    /* code */
                }
                next_seq += to_string(j-1) + current_sequence[i] ;

                /* code */
            }
            current_sequence = next_seq;
            n = n -1;
            
            /* code */
        }
        return current_sequence;
        
    }

int main(){

    int a = 4;
    cout <<"tst";
    cout << countandsay(a);
    return 0;
}
// 1. Base Case (Minimum Input)Input: n = 1Expected Output: "1"
// 2. Early SequenceInput: n = 4Expected Output: "1211"
// 3. Digit Transition (Handling multiple identical groups)Input: n = 5Expected Output: "111221"
// 4. Group Splitting (Where single and multiple digits alternate)Input: n = 6Expected Output: "312211"Explanation: Reading $n=5$ ("111221"), you get "three 1s", "two 2s", "one 1".
// 5. Larger Step (Checking scale/growth)Input: n = 8Expected Output: "1113213211"
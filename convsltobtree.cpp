#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 void printree(TreeNode* root) {
     if (!root) {
         cout << "[]";
         return;
     }

     queue<TreeNode*> q;
     q.push(root);
     vector<string> values;

     while (!q.empty()) {
         TreeNode* node = q.front();
         q.pop();

         if (node) {
             values.push_back(to_string(node->val));
             q.push(node->left);
             q.push(node->right);
         } else {
             values.push_back("null");
         }
     }

     while (!values.empty() && values.back() == "null") {
         values.pop_back();
     }

     cout << "[";
     for (size_t i = 0; i < values.size(); ++i) {
         if (i) cout << ",";
         cout << values[i];
     }
     cout << "]";
 }
class solulu
{
private:

public:
    
};



int main(){

}
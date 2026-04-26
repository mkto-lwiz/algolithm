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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> turnintoarr;
        ListNode* current = head;
        while (current != nullptr)
        {
            int temp = current->val;
            turnintoarr.push_back(temp);
            current = current->next;
        }
        return builtree(turnintoarr,0,turnintoarr.size()-1);
    }
    TreeNode * builtree(vector<int>& turnintoarr, int left, int right){
        if(left > right){
            return nullptr;
        }
        //complete search
        int mid = left + (right-left)/2;

        TreeNode* leftree = builtree(turnintoarr, left, mid-1);
        TreeNode* rightree = builtree(turnintoarr, mid+1,right);

        TreeNode* root = new TreeNode(turnintoarr[mid], leftree, rightree);
        return root;
    }
};



int main(){
    solulu s;
    // Create a sorted linked list: 1->2->3->4->5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    TreeNode* root = s.sortedListToBST(head);
    printree(root);
    cout << endl;

    return 0;
}
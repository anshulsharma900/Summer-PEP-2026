

/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> kdistance(int k, Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        int level =0;
        
        while(!q.empty()){
            int n = q.size();
            if (level == k) {
                while (!q.empty()) {
                    ans.push_back(q.front()->data);
                    q.pop();
                }
                return ans;
            }
            for(int i=0; i<n; i++){
                Node* temp = q.front();
                q.pop();
                
                if(temp->left) q.push(temp->left); 
                if(temp->right) q.push(temp->right);
            }
            level++;
        }
        return ans;
    }
};
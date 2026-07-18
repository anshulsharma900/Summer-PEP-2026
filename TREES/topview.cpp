https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1 

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(!root) return ans;
        // int Hd = 0;
        
        // we will create a map to store first node at each hd 
        // key -> horizontal distance hd
        // value -> node value
        map<int, int> topNode;
        
        // create a queue to store pair of nodes and hd 
        queue<pair<Node*, int>> q;
        
        // start with root at horizontal distance = 0
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> frontNode = q.front();
            q.pop();
            
            Node* node = frontNode.first;
            int hd = frontNode.second;
            
            if(topNode.find(hd)==topNode.end()){
                topNode[hd] = node->data;
            }
            if(node->left) q.push(make_pair(node->left, hd-1));
            if(node->right) q.push(make_pair(node->right, hd+1));
        }
        for(auto &i : topNode){
            ans.push_back(i.second);
        }
        return ans;
    }
}; 
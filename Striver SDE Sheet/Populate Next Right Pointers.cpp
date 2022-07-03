// Link : https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return root;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int m = q.size();
            vector<Node*> nodes;
            while (m--) {
                Node* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                nodes.push_back(node);
            }
            for (int i = 0; i < nodes.size() - 1; i++) {
                nodes[i]->next = nodes[i + 1];
            }
        }
        return root;
    }
};
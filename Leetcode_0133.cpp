class Solution {
public:
    unordered_map<Node* , Node*> m;
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return NULL;
        Node* copy = new Node(node->val,{});
        m[node] = copy;
        queue<Node*> q;
        q.push(node);
        while(q.empty() == false)
        {
            Node* curr = q.front();
            q.pop();
            for(auto adj: curr -> neighbors)
            {
                if(m.find(adj) == m.end())
                {
                    m[adj] = new Node(adj -> val, {});
                    q.push(adj);
                }
                m[curr] -> neighbors.push_back(m[adj]);
            }
        }
        return m[node];
    }
};
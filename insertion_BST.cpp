void solve(Node *& root,int data){
        if(root==NULL){
            Node *temp = new Node(data);
            root = temp;
            return;
        }
        if(root->data>data){
            solve(root->left,data);
        }
        if(root->data<data){
            solve(root->right,data);
        }
    }

    Node * insert(Node * root, int data) {
       solve(root,data);
       return root;
    }

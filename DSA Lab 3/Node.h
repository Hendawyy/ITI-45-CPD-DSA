class Node
{
    public:
        int data;
        Node* left,* right;
        Node(int data=0) {
            this->data=data;
            left=right=NULL;
        }
};

#include <iostream>
#include <stack>
using namespace std;

class Node{
    public:
        Node* left;
        Node* right;
        int value;

        //Constructor to make a new node 
        Node(int value){
            this->value = value;
            this->left = nullptr;
            this->right = nullptr;
        }
};

class BST{
    public:
        Node* root;

        //Constructor
        BST(){
            this->root = nullptr;
        }

        void insert(int value){
            if(root==nullptr){
                Node* newNode = new Node(value);
                root = newNode;
                cout << value << endl;
            }
            else{
                Node* curr = root;

            while(1==1){
                if(value >= curr->value){
                    if(curr->right == nullptr){
                        Node* newNode = new Node(value);
                        curr->right = newNode;
                        cout << value << " right"<< endl;
                        break;
                    }
                    curr = curr->right;
                    cout<< "Going right"<<endl;
                }
                if(value < curr->value){
                    if(curr->left == nullptr){
                        Node* newNode = new Node(value);
                        curr->left = newNode;
                        cout << value << " left" << endl;
                        break;
                    }
                    curr = curr->left;
                    cout<< "Going left"<<endl;
                }
            }
            }
            
        }

        void pre(){
            stack<Node*> mystack;
            Node* currpre = root;

            while(currpre->left!=nullptr){
                cout << currpre->value << endl;
                mystack.push(currpre);
                currpre = currpre->left;
            }
            mystack.push(currpre);
            cout << currpre->value << endl;

            
        }
};


int main(){
    BST binarysearchtree;
    int value;

    cin >> value;
    binarysearchtree.insert(value);
    while (value != -1){
        cin >> value;
        binarysearchtree.insert(value);
    };

    // cout << "start test"<< endl;
    // binarysearchtree.insert(13);
    // binarysearchtree.insert(10);
    // binarysearchtree.insert(10);
    // cout << "end test"<< endl;
}
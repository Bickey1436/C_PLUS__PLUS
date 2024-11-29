//preorder, postorder, inorder, leverorder




#include<bits/stdc++.h>
using namespace std;



class node{
public:

	int data;
	node* left;
	node* right;


	node(int d){


		data=d;
		left=NULL;
		right=NULL;

	}
	
	
};



	node* buildtree(){

		int d;
		cin>>d;

		if(d==-1){

			return NULL;
		}


		node* root= new node(d);
		root->left=buildtree();
		root->right=buildtree();
		
		return root;

	}


	void printpreorder(node* root){


		if(root==NULL){

			return;
		}

		cout<<root->data<<" ";
		printpreorder(root->left);
		printpreorder(root->right);
		
		

	}


	void printlnorder(node * root){

		if(root==NULL){

			return ;
		}

		printlnorder(root->left);
		cout<<root->data<<" ";
		printlnorder(root->right);


	}

	void printpostorder(node * root){
        	if(root==NULL){

	        	return;
	}
	
	printpostorder(root->left);
	printpostorder(root->right);
	cout<<root->data<<" ";
	
	}



int main(){

	node* root=buildtree();
	printpreorder(root);
	cout<<endl;
	printlnorder(root);
		cout<<endl;
	printpostorder(root);




}
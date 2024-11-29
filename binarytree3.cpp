#include<bits/stdc++.h>
using namespace std;


class node{


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


void printlevelorder(node * root){

	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	cout<<root->left;
	cout<<root->right;
}


int height (node * root){

	if(root==NULL){
		return 0;
	}

	int leftside=height(root->left);
	int rightside=height(root->right);

	return max(leftside,rightside)+1;
}

int main(){


	node* root= buildtree();
	printlevelorder(root);

}
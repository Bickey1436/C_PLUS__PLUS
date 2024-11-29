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

	root->left=buildtree();
	root->right=buildtree();


	return root;



}




int height(node* root){

	if(root==NULL){

		return 0;
	}

	int LS=height(left->data);
	int RS=height(right->data);

	return max(LS,RS)+1;
}



void PrintKthelement(node* root, int k){

	if(root==NULL){
		return;
	}


	if(k==1){

		cout<<root->data<<" ";
	}

	PrintKthelement(root_>left, k-1);
	PrintKthelement(root_>right, k-1);



}

Void Printallelements(node*root){


	int H=height(root);

}


void Printpreorder(node* root){


	if(root==-1){

		return NULL;
	}

	cout<<root->data<<endl;
	Printpreorder(root->left);
	Printpreorder(root->right);
}




int main(){


	node* root=buildtree();
	Printpreorder(root);




}
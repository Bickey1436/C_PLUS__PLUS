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


node * buildtree(){

	int d;
	cin>>d;


	if(root==-1){
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

  int LS = height(root->left);
  int RS= height(root->right);


  return max(LS,RS)+1;

}


void printKthElement(node* root, int k){


	if(root==NULL){
		return;
	}

	if(k==1){

		cout<<root->data<<" ";
	}

	printKthElement(root->left,k-1);
	printKthElement(root->right,k-1);



}


void PrintALLElement(node* root){

	int H=height(root);


	for(int i=1;i<=H;i++){

		printKthElement(root,i);
		cout<<endl;
	}
}

void printpreorder(node* root){

	if(root==-1){

		return NULL;
	}


	cout<< root->data<<" ";
	printpreorder(root->left);
	printpreorder(root->right);


}

int main(){

	node* root=buildtree();
	printpreorder(root);



}
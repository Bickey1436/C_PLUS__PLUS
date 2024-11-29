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


node * buildtree(){

	int d;

	cin>>d;

	if(d==-1){

		return NULL;
	}

	node* root=new node(d);

	root->left=buildtree();
	root->right=buildtree();


	return root;

}


int height(node* root){

	if(root==NULL){
		return 0;
	}

	int ls=height(root->left);
	int Rs=height(root->right);

	return max(ls,Rs)+1;
}


void PrintKthLevel(node* root, int k){

	if(root==NULL){
		return;
	}

	if(k==1){
		cout<<root->data<< " ";
		return;
	}



	PrintKthLevel(root->left,k-1);
	PrintKthLevel(root->right,k-1);

}


void bfs(node*root){


	queue<node* > q;
	q.push(root);

	while(!q.empty()){

		node* f=q.front();
		cout<<f->data<<" ";
		q.pop();

		if(f->left){

			q.push(f->left);

		}

		if(f->right){

			q.push(f->right);
		}




	}

}


void PrintAllLevel(node* root){

	int H=height(root);


	for(int i=1;i<=H;i++){

		PrintKthLevel(root,i);
		
		cout<<endl;


	}


}



int main(){


	node* root=buildtree();
	bfs(root);
	//PrintAllLevel(root);


}
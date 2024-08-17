#include<iostram>
using namespace std;

int main(){



	int arr[5]={1,2,3,4,5};

	int aee[10]={10,20,30,40,50};


	for(int i=0;i<5;i++){

		cout<<arr[i]<<" ";
	}

	cout<<endl;

	for(int i=0;i<5;i++){

		cout<<aee[i]<<" ";
	}


	return 0;
}

//size can only be skipped during the initalization part.

//int a[]={1,2,3,4,5,6,7}; //correct
//int a[]; //incorrect;

/*int main(){

int n;
cin>>n;


for (int i=0;i<n;i++){

	cin>>a[i];
}


for (int i=0;i<n;i++){

	cin>>a[i];
}

}*\
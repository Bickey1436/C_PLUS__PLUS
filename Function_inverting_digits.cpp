#include<iostream>
#include<string>
using namespace std;

int main(){


string n;
cin>>n;


for(int i=0;i<n.length();i++){


    int digit=n[i]-'0';
    int inverted_digit=9-digit;


    if(inverted_digit<digit){

        if(i==0 && inverted_digit==0){
            continue;
        }

        n[i]= inverted_digit +'0';
    }


}





 cout<<n<<endl;





}

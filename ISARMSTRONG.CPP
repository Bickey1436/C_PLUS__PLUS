#include<iostream>
#include<cmath>
#include<string>
using namespace std;



void isarmstrong(const string  &str){


    long long int k=str.length();
    long long int sum=0;
    long long int j= stoll(str);




    for(int i=0;i<str.length();i++){



        int digit=str[i]-'0';

        sum=sum+pow(digit,k);


    }

    if(sum==j){

        cout<<"true"<<endl;
    }
    else cout<<"false"<<endl;







}

int main(){


string str;

cin>>str;

isarmstrong(str);



}

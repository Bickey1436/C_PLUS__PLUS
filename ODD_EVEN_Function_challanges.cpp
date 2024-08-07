/*#include<iostream>
#include<string>
using namespace std;

int main(){

 long long int n;
    cin>>n;

    string str[n];


    for(int i=0;i<n;i++){

        cin>>str[i];
    }

 /*   for(int i=0;i<n;i++){

        cout<<str;
    }


}*/


/*
   long long int summ=0;

    for(int i=0;i<n;i++){

        for(char ch :str[i] ){

                int digit=ch-'0';

            summ=summ+digit;
        }



        if(summ%4==0){

        cout<<"Yes"<<endl;
    }
    else if(summ%2!=0 && summ%3==0){

        cout<<"Yes"<<endl;
    }

    else cout<<"No"<<endl;
    }


    return 0;


}*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string car_numbers[n];

    // Input car numbers
    for (int i = 0; i < n; ++i) {
        cin >> car_numbers[i];
    }

    // Process each car number
    for (int i = 0; i < n; ++i) {
        string car_number = car_numbers[i];
        int sum_even = 0, sum_odd = 0;

        for (char ch : car_number) {
            int digit = ch - '0'; // Convert character to integer
            if (digit % 2 == 0) {
                sum_even += digit;
            } else {
                sum_odd += digit;
            }
        }

        if (sum_even % 4 == 0) {
            cout << "Yes" << endl;
        } else if (sum_odd % 3 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

*/









#include<iostream>
#include<string>

using namespace std;

int main(){

int n;
cin>>n;

string str[n];


for(int i=0;i<n;i++){

    cin>>str[i];
}



for(int i=0;i<n;i++){

        int sum_even=0;
        int sum_odd=0;

    for(char ch : str[i]){

        int digit=ch-'0';

        if(digit %2==0){

            sum_even+=digit;
        }else sum_odd+=digit;
    }

    if (sum_even % 4 == 0) {
            cout << "Yes" << endl;
        } else if (sum_odd % 3 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
}

return 0;

}





































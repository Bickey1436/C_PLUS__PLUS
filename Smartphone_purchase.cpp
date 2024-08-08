/*#include<iostream>
using namespace std;


while(t--){


    int n,m;
    cin>>n>>m;

    int c1=1;
    int c2=2;

    int k=1;
    int a=0;


    while(m--){

        a+=2
    }





    while(n--){

        k+=2;
    }





   /* for(int i=m;i>0;i--){
         c2++;



    }

    if(n>m){

        cout<<"Aayush"<<endl;
    }else if (m>n){

      cout<<"Harshit"<<endl;
    }*/




/*}

int main(){


int t;
cin>>t;



}*/





































/*#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int turn = 1;  // Start with Aayush's turn (odd turns are Aayush's, even turns are Harshit's)

        while (true) {
            if (turn % 2 != 0) {  // Aayush's turn
                if (M >= turn) {
                    M -= turn;
                } else {
                    cout << "Harshit" << endl;
                    break;
                }
            } else {  // Harshit's turn
                if (N >= turn) {
                    N -= turn;
                } else {
                    cout << "Aayush" << endl;
                    break;
                }
            }
            turn++;
        }
    }

    return 0;
}*/








#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;



while(t--){

int m,n;
cin>>m>>n;

int turn=1;


while(true){



    if(turn%2!=0){


        if(m>=turn){
            m=m-turn;
        }else {

            cout<<"Harshit"<<endl;
            break;

            }




    }else

   {

    if(n>=turn){
        n=n-turn;
    }else cout<<"Aayush"<<endl;
    break;
}

}
turn ++;

}




return 0;


}





























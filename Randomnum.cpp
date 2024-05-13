#include<cstdlib>//random number generation
#include<ctime>//time
#include<iostream>
using namespace std;
int fun(int sno,int ch){
    for(int i=1;i<=ch;i++){
        int plc;
        cout<<"Enter the number\n";
        cin>>plc;
        if (plc==sno){
            cout<<"YOU WON 😊\n";
            break;
            }
        else if (plc>sno){
            cout<<"Your number is higher than the secret number\n";
            }
        else{
            cout<<"Your number is smaller than the secret number\n";
            }
        cout<<"You have "<<ch-i<<"choices left\n";
        }
        return 1;
}
int main(){
    cout<<"😎 Guess the Number Game 😎\n";
    cout<<"The rules of the game are:\n";
    cout<<"->Guess the number only between 1 and 100\n";
    cout<<"->1.Easy level:10 choices\n";
    cout<<"->2.Medium level:7 choices\n";
    cout<<"->3.Hard level:5 choices\n";
    cout<<"->0.To quit the game 😢\n";
    while (true){
           cout<<"Enter your difficulty level\n";
           int dc;
           cin>>dc;
           srand(time(0));//generates secret number
           int sno=1+(rand()%100);
           int plc;
           if (dc==1){
                fun(sno,10);
                 }
           else if (dc==2){
            fun(sno,7);
           }
           else if (dc==3){
            fun(sno,5);
           }
           else{
            cout<<"You have quit the game 😒\n";
            break;
           }
        }
        return 0;
    }


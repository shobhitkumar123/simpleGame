#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));

    //string choices={"Rock","Paper","Scissors"};
    while (true){
        cout<<"Lets Rock play Rock,Pepar,Scissors"<<endl;
        cout<<"Enter 0 for Rock,1 for Paper,or 2 for Scissors"<<endl;
        int playerChoice;
        cout<<" Enter your choice";
        cin>>playerChoice;
        int computerChoice=rand()%3;
        cout<<"You choice";
        switch(playerChoice){
            case 0:
            cout<<"Rock"<<endl;
            break;
            case 1:
            cout<<"Pepar"<<endl;
            break;
            case 2:
            cout<<"Scissors"<<endl;
            break;
            default:
            cout<<"Invalid choice"<<endl;
            return 1;

        }
        if(playerChoice==computerChoice){
            cout<<"its a tie!"<<endl;
        }
        else if ((playerChoice==0 &&computerChoice==2)||(playerChoice==1&&computerChoice==0)||(playerChoice==0&&computerChoice==1)){
            cout<<"You win!"<<endl;
        }
        else{
            cout<<"Coputer wins!"<<endl;
        }
        return 0;
        }
        }
        
#include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"::::::::::::::::::::::ROCK PAPER SCISSOR::::::::::::::::::::::::::::::"<<endl;
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;

    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;cout<<":::::::::::::::::::::PLAY WITH COMPUTER:::::::::::::::::::::::::::::::"<<endl;cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;

    int points;
    cout<<"Enter points :: ";
    cin>>points;

    cout<<endl<<endl;

    int pt1 = 0 , pt2 = 0;

    vector<string> choice={"rock" , "paper" , "scissor"};

    while(pt1 != points && pt2 != points){
        string ip1 , ip2;

        cout<<"ENTER YOUR CHOICE :: ";
        cin>>ip1;

        int index = rand() % 3;
        ip2 = choice[index];
        cout<< "COMPUTER'S CHOICE ::"<< ip2 <<endl<<endl;

        if((ip1=="rock" || ip2=="rock") && (ip1=="scissor" || ip2=="scissor")){
            if(ip1=="rock")
            pt1++;

            else if(ip2=="rock")
            pt2++;
        }
        else if((ip1=="paper" || ip2=="paper") && (ip1=="rock" || ip2=="rock")){
            if(ip1=="paper")
            pt1++;

            else if(ip2=="paper")
            pt2++;
        }

        else if((ip1=="paper" || ip2=="paper") && (ip1=="scissor" || ip2=="scissor")){
            if(ip1=="scissor")
            pt1++;

            else if(ip2=="scissor")
            pt2++;

        }                
        cout<<"YOUR POINTS <<<<<<<<< " << pt1 << " POINT <<<<<<<<<<<<<<<<<<"<<endl;

        
        cout<<"COMPUTER POINTS <<<<<<<< " << pt2 << " POINT <<<<<<<<<<<<<<<<"<<endl<<endl;
    }

    if(pt1==points)
    cout<<"::::::::::::::::::::  YOU WON !!!! ::::::::::::::::::::::::: "<<endl<<endl;

    else
    cout<<":::::::::::::::::::  COMPUTER WON  :::::::::::::::::::::::: "<<endl<<endl;

    return 0; 

}
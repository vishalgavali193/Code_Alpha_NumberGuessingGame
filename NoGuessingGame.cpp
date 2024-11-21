#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void numberguessing(){
    srand(time(0));

int random_no = rand() % 100 + 1;
int playerguess;
int attempts=0;

cout<<"******Welcome to Number guessing game******" << endl;
cout<<"All the Best!!!" << endl;
cout << "I have selected a number between 1 and 100." << endl;
cout << "Try to guess it! I'll give you hints along the way." << endl;

while (true)
{
    cout << "enter ur guess"<<endl;
    cin>> playerguess;
    attempts++;

    if(playerguess > random_no){
        cout<<"Too high!!Try again"<<endl;
    }
    else if(playerguess < random_no){
        cout<< "too Low!! Try Again"<<endl;
    }
    else
    {
        cout<<"Congratulation!!! its correct"<<endl;
        cout<<" It took you " << attempts << " attempts " <<endl;
        break;
    }
}
}

int main(){
numberguessing();
return 0;
}
#include <iostream>

using namespace std;
void Charge();

int main()
{
    Charge();
    return 0;
}
void Charge()
{
    int a;
    int b=100;
    int count=1;
    cout<<"I have a number between 1 and 1000"<<endl;
    cout<<"Can you guess my number?"<<endl;
    cout<<"Please type your first guess."<<endl;
    cin>>a;

  while(a!=b)
  {
      if(a>b)
    {
        cout<<"Too high.Try again"<<endl;
        cin>>a;
        count++;
    }

    else if(a<b)
        {
        cout<<"Too low.Try again"<<endl;
        cin>>a;
        count++;
    }
  }
    if(a=b)
    {
        cout<<"Excellent! You guess the number!"<<endl;
        cout<<"Would you like to play again(y or n)?"<<endl;
        if(count<10)
        {
            cout<<"Either you know the secret or you got lucky!";
        }
       else if(count=10)
        {
            cout<<"Ahah! You know the secret!";
        }
       else  if(count>10)
        {
            cout<<"You should be able to do better!";
        }

    }
}



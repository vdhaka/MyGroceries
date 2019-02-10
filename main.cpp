#include<iostream>
#include<string>
using namespace std;

const int SIZE = 5;
int main()
{
  string list[SIZE]; //array of 5 strings
  int numItems = 0;
  char input;

  do
  {
    cout<<"\n==My Groceries Menu==";
    cout<<"\nEnter choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    if( input == 'a' || input == 'A' )
    {
      string item;
      cout<<"What is the item?\n";
      cin>>item;
      list[numItems] = item;
      numItems++;
    }
    else if( input != 'q' && input != 'Q' )
    {
       cout<<"Invalid choice. Try again.\n";
    }
  }while( numItems < SIZE && input != 'q' && input != 'Q' );
  
  cout<<"Your grocery list:\n";
  for(int i=0; i<SIZE && i<=numItems; i++)
  {
     cout<<(i+1)<<" "<<list[i]<<endl;
  }
  return 0;
}

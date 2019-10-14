//Author: Christian Mullins
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;
  string addItem;
  do
  {
     cout<<"\n==GROCERY LIST MANAGER==";
     cout<<"\nEnter your choice: ";
     cout<<"\n (A)dd an item";
     cout<<"\n (Q)uit";
     cout<<"\nYour choice (A/Q): ";
     cin>>input;
     input = tolower(input);
     if (input == 'a')
     {
        cout << "What is the item?" << endl;
        cin.ignore();
        getline(cin, addItem);
        list.push_back(addItem);
     }
  }
  while (input != 'q');
  if (list.size() == 0)
  {
    cout << "No items to buy!" << endl;
  }
  else
  {
    cout << "==ITEMS TO BUY==" << endl;
    for (int i = 0; i < list.size(); i++)
    {
      cout << i + 1 << " " << list[i] << endl;
    }
  }
  return 0;
}

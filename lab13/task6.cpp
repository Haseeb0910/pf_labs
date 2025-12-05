#include <iostream>
using namespace std;
struct player
{
  string name;
  int runs;
  int wickets;
  int hundreds;
  int cathes;
  bool availability;
};
void list(player *ptr, int &player_count);
void name_search(player *ptr, int &player_count, string key_name);
void add_player(player *ptr, int &player_count);
void remove_player(player *ptr, string remove_name, int &player_count);
void update_player(player *ptr, string update_player, int &player_count);
int main()
{
  int size;
  cout << "Enter maximum number of cricket players : ";
  cin >> size;
  player *ptr = new player[size];
  int choice,player_count=0;
  cout << endl << "0: Close Program 1: List 2: Name Search 3: Add New 4: Remove by Name 5: Update by Name" << endl;
  cout << "Your choice : ";
  cin >> choice;
  while (choice != 0)
  {
    if (choice == 1)
    {
      if(player_count!=0)
      {
      cout << "The list of players is : " << endl;
      list(ptr, player_count);
      }
      else
      {
        cout<<"No player data found !";
      }
      cout << endl << "0: Close Program 1: List 2: Name Search 3: Add New 4: Remove by Name 5: Update by Name" << endl;
      cout << "Your choice : ";
      cin >> choice;
    }
    else if (choice == 2)
    {
      string key_name;
      cout << "Enter the player name whose data you want : ";
      cin >> key_name;
      name_search(ptr, player_count, key_name);
      cout << endl << "0: Close Program 1: List 2: Name Search 3: Add New 4: Remove by Name 5: Update by Name" << endl;
      cout << "Your choice : ";
      cin >> choice;
    }
    else if (choice == 3)
    {
      if(player_count<size)
      {
       add_player(ptr,player_count);
       player_count++;
      }
      else
      {
       cout<<"Maximum player count reaches !";
      }
      cout << endl << "0: Close Program 1: List 2: Name Search 3: Add New 4: Remove by Name 5: Update by Name" << endl;
      cout << "Your choice : ";
      cin >> choice;
    }
    else if(choice == 4)
    {
      string remove_name;
      cout<<"Enter player name you want to remove : ";
      cin>>remove_name;
      remove_player(ptr,remove_name,player_count);
      cout << endl << "0: Close Program 1: List 2: Name Search 3: Add New 4: Remove by Name 5: Update by Name" << endl;
      cout << "Your choice : ";
      cin >> choice;
    }
    else if(choice == 5)
    {
    string update_name;
    cout<<"Enter player name whose data you want to update : ";
    cin>>update_name;
    update_player(ptr,update_name,player_count);
    cout << endl << "0: Close Program 1: List 2: Name Search 3: Add New 4: Remove by Name 5: Update by Name" << endl;
    cout << "Your choice : ";
    cin >> choice;
    }
  }
}
void list(player *ptr, int &player_count)
{
  if(player_count!=0)
  {
  for (int i = 0; i < player_count; i++)
  {
    cout << "Player " << i + 1 << " name : " << (ptr + i)->name << endl;
    cout << "Player " << i + 1 << " runs : " << (ptr + i)->runs << endl;
    cout << "Player " << i + 1 << " wickets : " << (ptr + i)->wickets << endl;
    cout << "Player " << i + 1 << " hundreds : " << (ptr + i)->hundreds << endl;
    cout << "Player " << i + 1 << " catches : " << (ptr + i)->cathes << endl;
    cout << "Player " << i + 1 << " availability : " << ((ptr + i)->availability ? "Yes" : "No") << endl;
  }
  }
  else
  {
    cout<<"Player data not found !";
  }
}
void name_search(player *ptr, int &player_count, string key_name)
{
  if(player_count!=0)
  {
  bool check = false;
  for (int i = 0; i < player_count; i++)
  {
    if ((ptr + i)->name == key_name)
    {
      cout << "Player found" << endl;
      cout << "Player name : " << (ptr + i)->name << endl;
      cout << "Player runs : " << (ptr + i)->runs << endl;
      cout << "Player wickets : " << (ptr + i)->wickets << endl;
      cout << "Player hundreds : " << (ptr + i)->hundreds << endl;
      cout << "Player catches : " << (ptr + i)->cathes << endl;
      cout << "Player availability : " << ((ptr + i)->availability ? "Yes" : "No") << endl;
      check = true;
      break;
    }
  }
  if (check == false)
  {
    cout << "Player data not found" << endl;
  }
  }
  else
  {
    cout<<"Player data not found !";
  }
}
void add_player(player *ptr,int &player_count)
{
  cout << "Enter name of player : ";
  cin >> (ptr+player_count)->name;
  cout << "Enter runs of player : ";
  cin >> (ptr+player_count)->runs;
  cout << "Enter wickets of player : ";
  cin >> (ptr+player_count)->wickets;
  cout << "Enter hundreds of player : ";
  cin >> (ptr+player_count)->hundreds;
  cout << "Enter catches of player : ";
  cin >> (ptr+player_count)->cathes;
  string availabilityInput;
  cout << "Enter availability of player (yes or no): ";
  cin >> availabilityInput;
  if (availabilityInput == "yes" || availabilityInput == "Yes")
    (ptr+player_count)->availability = true;
  else if (availabilityInput == "no" || availabilityInput == "No")
    (ptr+player_count)->availability = false;
}
void remove_player(player *ptr, string remove_name, int &player_count)
{
  if(player_count!=0)
  {
    bool check = false;
    for(int i=0; i<player_count; i++)
    {
      if((ptr + i)->name == remove_name)
      {
        player temp=*(ptr +(player_count-1));
        *(ptr +(player_count-1))=*(ptr + i);
        *(ptr + i)=temp;
        player_count--;
        check = true;
        cout<<"Player removed Succesfully : ";
        break;
      }
    }
    if(check==false)
    {
      cout<<"Player no found ";
    }
  }
  else
  {
    cout<<"Player data not found !";
  }
}
void update_player(player *ptr, string update_player, int &player_count)
{
  if(player_count!=0)
  {
    bool check = false;
    for (int i = 0; i < player_count; i++)
   {
    if ((ptr + i)->name == update_player)
    {
      cout<<endl<<"Enter the new data of player  : "<<endl;
      cout << "Enter name of player : ";
      cin >> (ptr + i)->name;
      cout << "Enter runs of player : ";
      cin >> (ptr + i)->runs;
      cout << "Enter wickets of player : ";
      cin >> (ptr + i)->wickets;
      cout << "Enter hundreds of player : ";
      cin >> (ptr + i)->hundreds;
      cout << "Enter catches of player : ";
      cin >> (ptr + i)->cathes;
      string availabilityInput;
      cout << "Enter availability of player (yes or no): ";
      cin >> availabilityInput;
      if (availabilityInput == "yes" || availabilityInput == "Yes")
        (ptr + i)->availability = true;
      else if (availabilityInput == "no" || availabilityInput == "No")
        (ptr + i)->availability = false;
      check = true;
      cout<<"Player data updated successfully ";
      break;
    }
   }
   if (check == false)
   {
    cout << "Player data not found" << endl;
   }
  }
  else
  {
    cout<<"Player data not found !";
  }
}
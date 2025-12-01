#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int,5>distance;
  array<int,5>time;
  array<float,5>speed;
  int i=0;
  while(i<5)
  {
    cout<<"Enter "<<i+1<<" distance and time : ";
    cin>>distance[i];
    cin>>time[i];
    i++;
  }
  int j=0;
  cout<<"DISTANCE  TIME  SPEED"<<endl;
  while(j<5)
  {
    speed[j]=float(distance[j])/float(time[j]);
    cout<<distance[j]<<"          "<<time[j]<<"    "<<speed[j]<<endl;
    j++; 
  }
}
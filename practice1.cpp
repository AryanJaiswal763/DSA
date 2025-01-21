#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int col;
    cin>>col;

cout<<"input"<<endl;
    vector<vector<int>>houses(row,vector<int>(col));

    for(int i=0;i<houses.size();i++)
    {
        for(int j=0;j<houses[i].size();j++)
        {
            cin>>houses[i][j];
        }
        
    }

    vector<int>name;
    
    for(int i=0;i<houses.size();i++)
    {
        for(int j=0;j<houses[i].size();j++)
        {
            if(j==0)
            name.push_back(houses[i][j]);
        }
        
    }

    vector<int>pos;
    for(int i=0;i<houses.size();i++)
    {
        for(int j=0;j<houses[i].size();j++)
        {
            if(j==1)
            pos.push_back(houses[i][j]);
        }
        
    }
    cout<<"pos display of matrix"<<endl;
 for(int i=0;i<houses.size();i++)
    {
        for(int j=0;j<houses[i].size();j++)
        {
          cout<<i<<""<<j<<"  ";
        }
        cout<<endl;
    }
////////////////////////////////////////
  cout<<"display name"<<endl;
  for(int i=0;i<name.size();i++)
  {
    cout<<name[i]<<" ";
  }
  cout<<endl;
   cout<<"display pos"<<endl;
  for(int i=0;i<name.size();i++)
  {
    cout<<pos[i]<<" ";
  }
  cout<<endl;
////////////////////////////////////////

   //smallest position
   int small=0, sm=pos[0];

    for(int i=0;i<pos.size();i++)
    {
        if(pos[i]<sm)
        small=i;
    }

    //largest position
    int lar=0,lm=pos[0];

    for(int i=0;i<pos.size();i++)
    {
        if(pos[i]>lm)
        lar=i;
    }

    cout<<"ans"<<endl;
    cout<<name[small]<<" "<<name[lar]<<endl;
    return 0;
}
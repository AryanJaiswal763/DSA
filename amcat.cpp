#include<bits/stdc++.h>
using namespace std;

vector<string> findDuplicateWords(string str)
{
   
    vector<string>arr;
    int i=0;
    while(i<str.length())
    {
        string s="";
        while(i<str.length())
        {
            if(str[i]==' ')
            break;
            s=s+str[i];
            i++;
        }
        arr.push_back(s);
        i++;
    }
    unordered_map<string,int>map;
    for(int j=0;j<arr.size();j++)
    {
        map[arr[j]]++;
    }
    vector<string>answer;
    for(auto it:map)
    {
        if(it.second>1)
        answer.push_back(it.first);
    }
  
    return answer;

}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    vector<string> duplicates = findDuplicateWords(str);
    
    if (duplicates.empty()) {
        cout << "No duplicate words found." << endl;
    } else {
        cout << "Duplicate words: ";
        for (const string& word : duplicates) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}
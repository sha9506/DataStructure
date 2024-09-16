// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
   map<string, int> mp;
   
   mp["hello"] = 1;
   mp["hi"] = 2;
   
   map<string, int> :: iterator it;
   
   for(it=mp.begin(); it!=mp.end(); it++)
   {
       cout<<it->first<<" "<<it->second << endl;
   }
   
   auto i = mp.find("hi");
   
   if(i!=mp.end())
   {
       mp.erase(i);
       cout<<"erased";
   }
   else
   {
       cout<<"not found";
   }
   
    return 0;
}
// frequency count program in a map
// accessing values by key
#include <iostream>
#include <map>
using namespace std;

int main()
{
   // frequency count of the elements in a map
   int arr[] = {1,2,1,3,4,1,6,2,4,8,3,5,4,3,9};
   map<int, int> freq;
   for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
   {
       freq[arr[i]]++;
   }
   
   // displaying elements frequency 
   for(auto &it : freq)
   {
       cout << it.first << " appears " << it.second << " times "<<endl;
   }
   cout << endl;
   return 0;
}
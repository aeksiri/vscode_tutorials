#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"3941110070"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"It", "s", "me", "C++", "World", "from", "VS Code", "and the C++ extension!", "5555555555555"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}
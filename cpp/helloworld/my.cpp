#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"394111007000"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}
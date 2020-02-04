#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "My", "name", "is", "Akkharaphong Eksiri", "394111007000"};

   for (const string& word : msg)
   {
       cout << "\n";
       cout << word << " ";
       cout << "\n";
   }
   cout << endl;
}
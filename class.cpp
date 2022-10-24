#include <iostream>
#include <list>
using namespace std;

class StreamingPlataform {

public:
  string Name;
  string Gender;
  int MS; // Minutes or Seasons
  list<string> Cast;

  StreamingPlataform(string name, string gender, int ms) { // Constructor
    Name = name;
    Gender = gender;
    MS = ms;
  }
  void GetInfo() {

    cout << "Name: " << Name << endl;
    cout << "String: " << Gender << endl;
    if (MS > 20) {
      cout << "Minutes: " << MS << "min" << endl;
    } else {
      cout << "Seasons: " << MS << endl;
    }
    cout << "Cast: ";
    for (string ActorsNames : Cast) { // create a new string that recieves the HBO.Cast content
      cout << ActorsNames << endl;
    }
    cout << endl;
  }
};

int main() {

  StreamingPlataform Random1("Title 1", "Gender 1", 147);
  Random1.Cast.push_back("Name 1, Name 2, Name 3, Name 4");
  StreamingPlataform Random2("Title 2", "Gender 2", 5);
  Random2.Cast.push_back("Name A, Name B, Name C, Name D");

  Random1.GetInfo();
  Random2.GetInfo();
}

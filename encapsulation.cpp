#include <iostream>
using namespace std;

class Student
{
private:
    string Name;
    string Language;
    int Age;

public:
    // Getter e setter para Name
    void setName(string name) // setter
    {
        Name = name;
    }
    string getName() // getter
    {
        return Name;
    }

    // Getter e setter para Language
    void setLanguage(string language)
    {
        Language = language;
    }
    string getLanguage()
    {
        return Language;
    }

    // Getter e setter para Age
    void setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }

    // ------------------------------------------------------------------------------------

    void printRegistration()
    {
        cout << "Name - " << Name << endl;
        cout << "Language - " << Language << endl;
        cout << "Age - " << Age << endl;
    }

    Student(string name, string language, int age)
    {
        Name = name;
        Language = language;
        Age = age;
    }
};

int main()
{
    Student student1 = Student("Carolinna", "C++", 21);
    student1.printRegistration();

    student1.setAge(29);
    cout << student1.getName() << " is now " << student1.getAge() << " years old" << endl;
}

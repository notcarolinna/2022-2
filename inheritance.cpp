
#include <iostream>
#include <list>
using namespace std;

class Establishment
{
private:
    string Employee;
    string OwnerName;
    int EmployeeCount;
    int FormerEmployeesCount;
    list<string> Employees;
    list<string> FormerEmployees;

public:
    Establishment(string name, string ownerName)
    {
        Employee = name;
        OwnerName = ownerName;
        EmployeeCount = 0;
        FormerEmployeesCount = 0;
    }

    void GetInfo()
    {
        cout << " -------------------- " << endl;
        cout << "Name: " << Employee << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << endl;
        cout << "Current Employees: " << EmployeeCount << endl;
        for (string Current : Employees)
        {
            cout << Current << endl;
        }
        cout << endl;

        cout << "Former Employees: " << FormerEmployeesCount << endl;
        for (string Former : FormerEmployees)
        {
            cout << Former << endl;
        }
    }

    void NewEmployee()
    {
        EmployeeCount++;
    }

    void Dismissal()
    {

        FormerEmployeesCount++;
    }

    void EmployeeRegistration(string current)
    {
        Employees.push_back(current);
    }

    void FormerEmployee(string former)
    {
        FormerEmployees.push_back(former);
    }
};

class Establishments : public Establishment
{
public:
    Establishments(string name, string ownerName) : Establishment(name, ownerName)
    {
    }
};

int main()
{

    Establishments CSS("Luxury Cars", "Havana");

    CSS.NewEmployee();
    CSS.NewEmployee();
    CSS.NewEmployee();

    CSS.EmployeeRegistration("Bruna Blunt");
    CSS.EmployeeRegistration("Ricardo Junior");
    CSS.EmployeeRegistration("Rafael Toledo");

    CSS.Dismissal();

    CSS.FormerEmployee("Drake Tatakae");

    CSS.GetInfo();

    Establishments PR("Paradis Recycle", "Dulce Liana");

    PR.NewEmployee();
    PR.NewEmployee();
    PR.NewEmployee();
    PR.NewEmployee();
    PR.NewEmployee();

    PR.EmployeeRegistration("Belatrix Furlan");
    PR.EmployeeRegistration("Alberto Santana");
    PR.EmployeeRegistration("Mike Oliveira");
    PR.EmployeeRegistration("Cleyton Ferreira");
    PR.EmployeeRegistration("Bonnie Parker");

    PR.Dismissal();
    PR.Dismissal();
    PR.Dismissal();
    PR.Dismissal();
    PR.Dismissal();

    PR.FormerEmployee("Karina Salvatore");
    PR.FormerEmployee("Manu Machado");
    PR.FormerEmployee("Mariana Silva");
    PR.FormerEmployee("Samuel Dias");
    PR.FormerEmployee("Rick Musk");

    PR.GetInfo();
}

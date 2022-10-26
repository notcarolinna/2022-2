#include <iostream>
#include <list>
using namespace std;

class Car
{

public:
    string Name;
    string OwnerName;
    string NumberPlate;
    string Classe;
    int Miles;
    list<string> Layout;

    Car(string name, string ownerName, string numberPlate, string classe, int miles) // CONSTRUTOR
    {
        Name = name;           // Name vem da classe e o name vem do parâmetro
        OwnerName = ownerName; // OwnerName vem da classe e o ownerName vem do parâmetro
        NumberPlate = numberPlate;
        Classe = classe;
        Miles = miles;
    }

    void GetInfo()
    {
        cout << endl << "-------------------" << endl;
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Number Plate: " << NumberPlate << endl;
        cout << "Class: " << Classe << endl;
        cout << "Miles: " << Miles << endl;
        cout << "Layout: " << endl;
        for (string layout : Layout)
        {
            cout << layout << endl;
        }
    }
};

int main()
{

    Car Nissan("300zx", "Karina", "39ACBF82", "JDM", 16155);
    Nissan.Layout.push_back("Front-engine, rear-wheel-drive");
    Nissan.GetInfo();
    Car Toyota("Supra Mark IV", "Brian", "3NTQ305", "Sport", 14326);
    Toyota.Layout.push_back("Front-engine, rear-wheel-drive");
    Toyota.GetInfo();

}

/*

Exemplo:

   Car Nissan;
    Nissan.Name = "300zx";
    Nissan.OwnerName = "Karina";
    Nissan.NumberPlate = "39ACBF82";
    Nissan.Class = "JDM";
    Nissan.Miles = 16155;
    Nissan.layout = {"Front-engine", "rear-wheel-drive"};

    cout << "Name: " << Nissan.Name << endl;
    cout << "Owner Name: " << Nissan.OwnerName << endl;
    cout << "Number Plate: " << Nissan.NumberPlate << endl;
    cout << "Class: " << Nissan.Class << endl;
    cout << "Miles: " << Nissan.Miles << "mi" << endl;
    cout << "Layout: " << endl;
    for (string layout : Nissan.layout)
    {
        cout << layout << endl;
    }

Construtores servem para não repetir o código.
Caso seja necessário criar um objeto Car Porshe, teria que se repetir toda a atribuição e cout.
   1) os construtores sempre tem o mesmo nome da classe;
   2) os construtores não tem um tipo de retorno;
   3) os construtores são criados dentro da classe "como se fosse uma função".
   4) para não copiar o cout, tem que ser criado uma função dentro da classe. (método)
*/

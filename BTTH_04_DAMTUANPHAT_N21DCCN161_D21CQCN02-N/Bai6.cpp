#include <iostream>
#include <fstream>
#include<iomanip>
#include <string>
#include<vector>

using namespace std;

class Student
{
private:
    string id;
    string name;
    float math;
    float physics;
    float chemistry;

public:
    Student()
    {
        this->id = "N/A";
        this->name = "N/A";
        this->math = -1;
        this->physics = -1;
        this->chemistry = -1;
    }
    Student(string id, string name, float math, float physics, float chemistry) : id(id), name(name), math(math), physics(physics), chemistry(chemistry) {}

    void setId(string id)
    {
        this->id = id;
    }

    string getId()
    {
        return id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setMath(float math)
    {
        this->math = math;
    }

    float getMath()
    {
        return math;
    }

    void setPhysics(float physics)
    {
        this->physics = physics;
    }

    float getPhysics()
    {
        return physics;
    }

    void setChemistry(float chemisty)
    {
        this->chemistry = chemistry;
    }

    float getChemistry() {
        return chemistry;
    }

    void show()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Math: " << math << endl;
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
    }

    float average()
    {
        return (math * 3 + physics * 2 + chemistry) / 6;
    }

    bool isPassed()
    {
        if (average() >= 5 && math > 0 && physics > 0 && chemistry > 0)
        {
            return true;
        }
        return false;
    }
};

vector<Student> readFile()
{
    vector<Student> s;
    fstream file;
    file.open("Thisinh.txt", ios::in);
    if(file.fail()) {
        cout << "An error orrcured!" << endl;
    }

    string content = "";
    string id = "";
    string name = "";
    float math, physics, chemistry;
    while (!file.eof())
    {
        string id = "";
        string name = "";
        float math, physics, chemistry;
        getline(file, content);

        id = content.substr(0, 10);
        name = content.substr(11, 19);
        math = stof(content.substr(32, 3));
        physics = stof(content.substr(36, 3));
        chemistry = stof(content.substr(40, 3));

        Student student(id, name, math, physics, chemistry);
        s.push_back(student);
    }

    return s;
    
}

void writeToFile(vector<Student> s)
{
    fstream outFile;
    outFile.open("Thisinh.dat", ios::out);

    if(outFile.fail()) {
        cout << "Loi!" << endl;
    }

    for(int i = 0; i < s.size(); i++) {
        if(s[i].isPassed()) {
            outFile << left << setw(10) <<  s[i].getId() << " "  
                    << setw(20) << s[i].getName() 
                    << right << setw(3) << s[i].getMath() 
                    << " " << setw(3) << s[i].getPhysics()
                    << " " << setw(3) << s[i].getChemistry()
                    << endl;
        }

    }

    if(outFile.fail()) {
        cout << "Loi!" << endl;
    }
    
    outFile.close();
}

int main()
{
    vector<Student> s;
    s = readFile();
    for(int i = 0; i < s.size(); i++) {
        if(s[i].isPassed()) {
            // s[i].show();
        }
    }

    writeToFile(s);
    return 0;
}

/*
Ho ten: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/

#include<iostream>
#include<fstream>

using namespace std;

string fileName() {
    cin.ignore();
    string str;
    cout << "Nhap ten file: ";
    cin >> str;

    return str + ".txt";
}

void createFile() {
    fstream outFile;
    outFile.open(fileName(), ios::out);
    if(!outFile) {
        cerr << "File could not be opened." << endl;
        exit(1);
    }
    string content;
    cout << "Nhap noi dung trong file: ";
    cin.ignore();
    getline(cin, content);
    outFile << content;
    outFile.close();
}

void readFile() {
    fstream dataFile;
    dataFile.open(fileName(), ios::in);
    if(!dataFile) {
        cerr << "File could not be opened." << endl;
        exit(1);
    }

    if(dataFile.is_open()) {
        // cout << "Opened successfully!" << endl;
    }
    cout << "Noi dung cua file: " << endl;

    string str;
    while (!dataFile.eof())
    {
        getline(dataFile, str);
        cout << str << endl;
    }
}

void updateFile() {
    fstream file;
    string str = "";
    string content;
    file.open(fileName(), ios::app);
    if(!file) {
        cerr << "File could not be opened." << endl;
        exit(1);
    }
    cout << "Nhap noi dung ghi noi: ";
    cin.ignore();
    getline(cin, content);
    file << content << endl;
    if(file.fail()) {
        cout << "Khong the ghi noi";
    }
    file.close();
}

void countChars() {
    int count = 0;
    fstream file;
    string str;
    string content;
    char c;
    
    file.open(fileName(), ios::in);
    while(!file.eof()) {
        getline(file, content);
        str += content;
    }
    cout << "Nhap ki tu can tim: ";
    cin >> c;
    for(int i = 0; i < str.size(); i++) {
        if(c == str[i]) {
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    int n;
    do {
        cout << "\n\n------------------------------";
        cout << " Chuong trinh thao tac voi file ";
        cout << "------------------------------" << endl;
        cout << "1. Tao file moi." << endl;
        cout << "2. Doc file." << endl;
        cout << "3. Ghi noi file." << endl;
        cout << "4. Dem so ky tu trong file" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "Ban chon? : ";
        cin >> n;
        
        switch (n)
        {
        case 1:
            createFile();
            break;
        case 2:
            readFile();
            break;
        case 3:
            updateFile();
            break;
        case 4:
            countChars();
            break;
        default:
            break;
        }


    } while(!(n > 0 && n <= 4));    

    return 0;
}

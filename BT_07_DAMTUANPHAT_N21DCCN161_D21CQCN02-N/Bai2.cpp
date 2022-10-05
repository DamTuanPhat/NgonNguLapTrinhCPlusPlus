#include <iostream>
#include <fstream>

using namespace std;

string fileName()
{
    cin.ignore();
    string str;
    cout << "Nhap ten file: ";
    cin >> str;
    return str;
}

void preview()
{
    fstream inputFile;
    string inputFileName = fileName();
    string extension = ".txt";
    inputFile.open(inputFileName + extension, ios::in);
    string inputContent = "";
    while (!inputFile.eof())
    {
        string str;
        getline(inputFile, str);
        inputContent += str + "\n";
    }
    cout << inputContent << endl;
}

void maHoa()
{
    fstream inputFile;
    fstream outputFile;
    string inputFileName = fileName();
    string outputFileName = inputFileName + "_Encrypted";
    string extension = ".txt";

    if (inputFileName.find("_Encrypted"))
    {
        cout << "File da duoc ma hoa" << endl;
    }
    else
    {

        inputFile.open(inputFileName + extension, ios::in);
        outputFile.open(outputFileName + extension, ios::out);

        if (inputFile.fail() && outputFile.fail())
        {
            cerr << "An error occured!" << endl;
        }

        string inputContent = "";
        while (!inputFile.eof())
        {
            string str;
            getline(inputFile, str);
            inputContent += str + "\n";
        }

        for (int i = 0; i < inputContent.size(); i++)
        {
            if (inputContent[i] >= 65 && inputContent[i] <= 85 || inputContent[i] >= 97 && inputContent[i] <= 117)
            {
                inputContent[i] += 5;
            }
            else if (inputContent[i] > 85 && inputContent[i] <= 90 || inputContent[i] > 97 && inputContent[i] <= 122)
            {
                inputContent[i] = inputContent[i] - 21;
            }
        }

        outputFile << inputContent;
        if (inputFile.fail() || outputFile.fail())
        {
            cerr << "An error occured!" << endl;
        }
        outputFile.close();
        inputFile.close();
    }
}

void giaiMa()
{
    fstream inputFile;
    fstream outputFile;
    string inputFileName = fileName();
    string outputFileName = inputFileName + "_Decrypted";
    string extension = ".txt";

    if (!inputFileName.find("_Encrypted"))
    {
        cout << "File chua duoc ma hoa" << endl;
    }
    else
    {

        inputFile.open(inputFileName + extension, ios::in);
        outputFile.open(outputFileName + extension, ios::out);

        if (inputFile.fail() && outputFile.fail())
        {
            cerr << "An error occured!" << endl;
        }

        string inputContent = "";
        while (!inputFile.eof())
        {
            string str;
            getline(inputFile, str);
            inputContent += str + "\n";
        }

        for (int i = 0; i < inputContent.size(); i++)
        {
            if (inputContent[i] >= 65 && inputContent[i] <= 85 || inputContent[i] >= 97 && inputContent[i] <= 117)
            {
                inputContent[i] += 5;
            }
            else if (inputContent[i] > 85 && inputContent[i] <= 90 || inputContent[i] > 97 && inputContent[i] <= 122)
            {
                inputContent[i] = inputContent[i] - 21;
            }
        }

        outputFile << inputContent;
        if (inputFile.fail() || outputFile.fail())
        {
            cerr << "An error occured!" << endl;
        }
        outputFile.close();
        inputFile.close();
    }
}

int main()
{
    int n;
    do
    {
        cout << "\n\n------------------------------";
        cout << " Chuong trinh giai ma va ma hoa file ";
        cout << "------------------------------" << endl;
        cout << "1. Ma hoa file." << endl;
        cout << "2. Giai ma file." << endl;
        cout << "3. Xem noi dung file." << endl;
        cout << "0. Thoat chuong trinh." << endl;
        cout << "Ban chon? : ";
        cin >> n;

        switch (n)
        {
        case 1:
            maHoa();
            break;
        case 2:
            giaiMa();
            break;
        case 3:
            preview();
            break;
        default:
            break;
        }

    } while (!(n > 0 && n <= 3));

    return 0;
}
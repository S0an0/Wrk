
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Create_for
{
public:
    string n1= "for (int ";
    string n2 = "= 0; ";
    string n3 = " < 2; ";
    string n4="++)";
    int number_cicle=65;
    string line_read_file;
    string line_create_file;
    ifstream* read_file;
    ofstream *create_file;
    string temp;
    Create_for(ifstream *read_f, ofstream *create_f) 
    {
        read_file=read_f;
        create_file = create_f;
    };
    bool is_openn()
    {
        if (read_file->is_open() && create_file->is_open())
        {
            cout << "file is open" << endl;
            return true;
        }
        else
        {
            cout << "file is close" << endl;
            return false;
        }
    }
    void create_forchik()
    {
        if (is_openn())
        {
            while (read_file)
            {
                *read_file >> temp;
                if (temp == "if")
                {
                    cout << "if" << endl;
                    *create_file << n1 << char(number_cicle) << n2 << char(number_cicle) << n3 << char(number_cicle) << n4;
                }
                if (temp == "//exit")
                    break;
            }
            cout << "tip vse normas" << endl;
        }
        else
        {
            cout << "file is not connected";
        }
    }
};

int main()
{
    ifstream n1("123.txt");
    ofstream n2("create_for.txt");
    Create_for h(&n1, &n2);
    h.create_forchik();
    //string symbol;
    ////char symbol[100];
    //int f = 65;  //do 90
    //ifstream out("123.txt"/*, ios_base::in*/); //"in"-for read
    //ofstream create("created_for.txt"/*, ios_base::out*/); //"out"-for read
    //int temp=0;
    ////string cicle_for=<<char(f)<< = 0; i < length; i++)"
    //    /*for (int i = 0; i < length; i++)
    //    {

    //    }*/
    //if (out.is_open()&& create.is_open())
    //{
    //    cout << "All good , work next )" << endl;
    //    //fin >> buff; // считали первое слово из файла
    //    //cout << buff << endl; // напечатали это слово
    //    //
    //    while (out)
    //    {
    //        out >> symbol;
    //        if(symbol=="if")
    //        {
    //            cout << symbol << endl;
    //            
    //        }
    //    }

    //    //while (out)
    //    //{
    //    //    out.getline(symbol, 100); // считали строку из файла
    //    //    if (out ==)

    //    //    cout << symbol << endl; // напечатали эту строку
    //    //}
    //}
    //else
    //{
    //    cout << "Error file is not open" << endl;
    //}
    //
    //out.close();
}



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Create_for
{
public:
    string test[2] = {"[TestMethod]\n\t","TestMethod_"};
    string standart_ofstr = "ofstream out;\nint TestTask = 0;\nout.open(\"TestMethod_ACS_";
    string name_file;
    int number_cicle=65;
    string line_read_file;
    string line_create_file;
    ifstream* read_file;
    ofstream *create_file;
    string temp;
    Create_for(ifstream* read_f, ofstream* create_f) : read_file(read_f), create_file(create_f) {};
    
    /*bool is_openn()
    string temp[10000];
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
    };*/
    void create_forchik()
    {
        if (read_file->is_open() && create_file->is_open())
        {
            while (read_file)
            {
                *read_file >> temp;
                if (temp == "void")
                {
                    *create_file << test[0] << temp << " ";
                    *read_file >> temp;
                    name_file = temp;
                    *create_file << test[1] << temp << " ";
                    while (temp != "{")
                    {
                        *read_file >> temp;
                        if (temp == "{")
                            *create_file << "\n" << temp;
                        else
                            *create_file << temp;
                    }
                    *create_file << "\n";
                    *create_file << standart_ofstr << name_file << ".txt\");\n" << "out.close(); \n"<<"}\n\n";
                    //bool prov=false;
                    //for (auto g : temp)
                    //{
                    //    if (g == ')')
                    //    {
                    //        *create_file << test[0] << temp << "();\n{\n};";
                    //        break;
                    //    }
                    //}
                    //
                    //
                    //
                    //*read_file >> temp;
                    //*create_file << test << temp << "();\n{\n};";
                    //*read_file >> temp;
                    //*read_file >> temp;

                }
               /* if (temp == "if")
=======
        int i=0;
        if (is_openn())
        {
            while (read_file)
            {
                *read_file >> temp[i];
                i++;
            }
            i = 0;
            for (string poisk : temp)
            {
                /*if (temp[i] == "void" || temp[i] == "int" || temp[i] == "uint8_t" || temp[i] == "unint16_t" || temp[i] == "uint32_t")
                {
                    if(temp[i+2]=="()")
                }*/
                /*if (temp[i] == "if")
                {
                    cout << "if" << endl;
                    *create_file << n1 << char(number_cicle) << n2 << char(number_cicle) << n3 << char(number_cicle) << n4;
                }*/
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

        //h.create_forchik();
        cout << endl;
    string f;
    while (n1)
    {
        n1 >> f;
        cout << f;

    }
    //for (auto d : f)
       // cout << f;
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

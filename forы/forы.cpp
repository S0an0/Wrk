// *create_file << test[0] << temp << " ";
//* read_file >> temp;

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int skobka = 0;
void search_s(string r)
{
    if (r.find('{')) skobka++;
    if (r.find('}')) skobka--;
}


class test_method
{
public:
    

    void create_for(string q, string w)
    {
        ifstream n1(q);
        ofstream n2(w);
        string temp;
        string pred;
        string name_funck;
        size_t res;
        int schetchick;
        while (getline(n1, temp))
        {
            
           
                //cout << temp.find('{');
                cout << temp.find('[') << endl;
            
            pred = temp;
            
        }

        //    while (n1)
        //    {

        //        while (skobka)
        //        {
        //            n1 >> temp;
        //            //if (temp.find("//"))
        //            //    getline(n1, temp);
        //            //else 
        //            //{
        //            //
        //            //}
        //            search_s(temp);
        //        }
        //        n1 >> temp;
        //        search_s(temp);
        //        if (temp == "void" || temp == "uint32_t" || temp == "uint16_t" || temp == "uint8_t")
        //        {
        //            n2 << "[TestMethod]\n\t";
        //            n2 << temp << " ";
        //            n1 >> temp;
        //            search_s(temp);
        //            res = temp.find('(');
        //            if (res < 1000)
        //            {
        //                for (int i = 0; i < res; i++)
        //                {
        //                    n2 << temp[i];
        //                    name_funck.push_back(temp[i]);
        //                }
        //            }
        //            else
        //            {
        //                n2 << temp;
        //            }

        //            n2 << "();\n{\nout.open(\"Test_Method_" << name_funck << ".txt\");\nout.close();\n}\n";
        //            name_funck.clear();
        //        }
        //        if (temp == "//exit")
        //            break;
        //    }
        //    cout << "Vse azebok\n";
        //}
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    string n1("123.txt");
    string n2("create_for.txt");
    test_method g;
    g.create_for(n1, n2);

}

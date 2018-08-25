#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    string getContent;
    streampos size;
    char * memblock;

    ifstream file ("NekiBinarniFajl.bin", ios::in | ios::binary | ios::ate);

    if (file.is_open())
    {
        size = file.tellg();

        memblock = new char [size];

        file.seekg (0, ios::beg);
        file.read (memblock, size);


        file.close();

        cout << "Zavrseno je sa citanjem fajla";

        delete[] memblock;
    }
    else
    {
        cout << "Postoji problem prilikom otvaranja fajla";
    }
    return 0;
}

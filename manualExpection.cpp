#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...)
    {
        // jika selain integer maka block ini akan dieksekusi
        cout << "deafault pengecualian dieksekusi" << endl;
    }

    return 0;
}
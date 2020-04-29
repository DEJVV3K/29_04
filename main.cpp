#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int t =0;
int a [1000];

int main()
{
        ifstream wej;
        ofstream wyj;
        wej.open("wej.txt");
        wyj.open("wyj.json");
        if (wej.good()) {
            wyj<<"[";
            while  (!wej.eof()) {
                wej >> a[t++];
                }
            while (t!=-1) {
                    wyj << "{\"liczba\":\"" << a[t--]<<"\"}, ";

                    if(!wej.eof()){
                        wyj << ",";
                    }
            }
            wyj<<"]";
        }

        wej.close();
        wyj.close();
        system("PAUSE");
        return 0;
}

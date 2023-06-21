#include "testlib.h"
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[])
{
    int t = rnd.next(1, 100);
    println(t);
    while (t--)
    {
        int n = rnd.next(1, 100000);
        println(n);
        int remaining = n;
        while (remaining--)
        {
            cout << rnd.next(1, n) << " ";
        }
        cout << rnd.next(1, n) << endl;
    }
    return 0;
}

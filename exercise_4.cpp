
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    int N = argc - 1;
    int totalPairs = 0;

    for (int i = 1; i < argc; i++)
    {
        int socks = atoi(argv[i]);
        totalPairs += socks / 2;
    }

    if (totalPairs >= 6)
    {
        cout << 2 * 6 + N - 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}

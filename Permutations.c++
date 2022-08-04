#include <bits/stdc++.h>

using namespace std;

void permute(int n)
{

    if (n == 1)
        std::cout << 1 << endl;
    else if (n < 4)
        std::cout << "NO SOLUTION\n";
    else if (n == 4)
        std::cout << "2 4 1 3\n";
    else
    {
        for (int i = 1; i <= n; i += 2)
            std::cout << i << " ";

        for (int i = 2; i <= n; i += 2)
        {

            std::cout << i;
            if (i < n - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
}

int main()
{

    int n;
    std::cin >> n;
    permute(n);

    return 0;
}
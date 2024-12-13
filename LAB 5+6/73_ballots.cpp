#include <iostream>
using namespace std;

int main()
{
    int no_of_ballots = 10;

    int ballot = 0, spoilt = 0;
    cout << "the candidates are 1 to 5 you can vote any of them" << endl;
    int candi[5] = {1, 2, 3, 4, 5};
    int voti[5] = {0, 0, 0, 0, 0};
    cout << "enter the candidate ID to cast vote to him if entered wrong it will be spoilt" << endl;

    for (int i = 0; i < no_of_ballots; i++)
    {
        cin >> ballot;
        if (ballot < 1 || ballot > 5)
        {
            spoilt++;
        }
        else

            for (int i = 1; i <= 5; i++)
            { // performing the linear search on array
                if (ballot == candi[i - 1])
                {
                    voti[i - 1]++;
                }
            }
    }

    cout << "The votes of all candidates are tabulated below\n";
    for (int i = 0; i < 5; i++)
    {
        cout << candi[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << voti[i] << "\t";
    }
    cout << endl;
    cout << "the spoilt ballots are :" << spoilt << endl;

    return 0;
}
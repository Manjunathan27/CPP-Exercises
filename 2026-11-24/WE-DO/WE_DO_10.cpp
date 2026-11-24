
#include<iostream>
using namespace std;

class labInventory
{
    private:
    int seatcount;

    public:
    labInventory(int stock)
    {
        seatcount = stock;
    }

    void issueKits(int request)
    {
        if (request > 0 && request <= seatcount)
        {
            seatcount = seatcount - request;
            cout << "Accepted ";
        }
        else
        {
            cout << "Rejected ";
        }

        cout << seatcount << endl;
    }
};

int main()
{
    int number, seatrequest;

    cout << "Enter the number of requests: ";
    cin >> number;

    labInventory lab(20);

    for (int index = 1; index <= number; index++)
    {
        cout << "Enter the number of kits for request " << index << ": ";
        cin >> seatrequest;

        lab.issueKits(seatrequest);
    }

    return 0;
}

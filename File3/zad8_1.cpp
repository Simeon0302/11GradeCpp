#include <iostream>
using namespace std;

struct Stock
{
    string name;
    string type;
    float weight;
    float price;
};

int main()
{
    int n, price, br;
    float sumWeight = 0, sumPrice = 0;
    string type;
    cin >> n;
    Stock stocks[n];

    for (int i = 0; i < n; i++)
    {
        cin >> stocks[i].name >> stocks[i].type >> stocks[i].weight >> stocks[i].price;
    }

    cout << "Enter price: ";
    cin >> price;

    for (int i = 0; i < n; i++)
    {
        if (stocks[i].price > price)
        {
            cout << stocks[i].name << " ";
            br++;
        }
    }

    cout << "Number of products more expensive than the given price: " << br;
}
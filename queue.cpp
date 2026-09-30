#include <iostream>
#define MAX 5
using namespace std;

void display();
void enqueue(int n);

int f = -1, r = -1, queue[MAX];

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    enqueue(100);

    return 0;
}

void display()
{
    if (f == -1)
        cout << "empty queue";
    else
    {
        for (int i = 0; i <= r; i++)
            cout << queue[i] << " ";
    }

    cout << "\n";
}

void enqueue(int n)
{
    if (r == MAX - 1)
        cout << "full";
    else
    {
        if (f == -1)
            f = 0;

        r++;
        queue[r] = n;
    }
}

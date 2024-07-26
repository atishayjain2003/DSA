#include <iostream>
#include <vector>
using namespace std;

void reversal(vector<int>& array, int left, int right)
{
    if (left >= right) // Use >= to stop when the indices meet or cross
    {
        return;
    }
    swap(array[left], array[right]);
    reversal(array, left + 1, right - 1);
}

int main()
{
    vector<int> array = {10, 20, 30, 40, 50, 60};
    int left = 0;
    int right = array.size() - 1;
    reversal(array, left, right);
    
    // Print the reversed array
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

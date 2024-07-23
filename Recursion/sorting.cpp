#include <iostream>
#include <vector>
using namespace std;

int recursion(const vector<int>& array, int index, int size)
{
    if (index >= size - 1)
    {
        return 1;
    }
    else if (array[index] < array[index - 1])
    {
        return 0;
    }
    else
    {
        return recursion(array, index + 1, size);
    }
}

int main()
{
    vector<int> array = {10, 20, 30};
    int size = array.size();
    int index = 1;
    int result = recursion(array, index, size);
    if (result == 1)
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }
    
}

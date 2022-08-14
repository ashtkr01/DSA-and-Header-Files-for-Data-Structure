#include <bits/stdc++.h>
using namespace std;
/*******************First Approach of Bubble Sort*****************************/
void bubble_sort(vector<int> &vctr, int size)
{
    if (size == 1)
    {
        return;
    }
    if (size > 1)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (vctr[j] > vctr[j + 1])
            {
                swap(vctr[j], vctr[j + 1]);
            }
        }
    }
    bubble_sort(vctr, size - 1);
}
/*******************Secon Approach of Bubble Sort*****************************/
void bubble_sort_2(vector<int> &vctr, int size, int j)
{
    if (size == 1)
    {
        return;
    }
    if (size > 1 and j < size - 1)
    {

        if (vctr[j] > vctr[j + 1])
        {
            swap(vctr[j], vctr[j + 1]);
        }
        bubble_sort_2(vctr, size, j+1);
    }
    bubble_sort_2(vctr, size - 1, 0);
}

int main(int argc, char const *argv[])
{
    vector<int> vctr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        vctr.push_back(ele);
    }
    // bubble_sort(vctr, vctr.size());
    bubble_sort_2(vctr, vctr.size(),0);

    // Print the vector:
    for (auto x : vctr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

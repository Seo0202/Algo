#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    cin >> M;

    int arr[15000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    int start_index = 0;
    int end_index = N - 1;
    int count = 0;

    while (start_index < end_index)
    {
        int S = arr[start_index] + arr[end_index];

        if (S == M)
        {
            count++;
            start_index++;
            end_index--;
        }
        else if (S < M)
        {
            start_index++;
        }
        else
        {
            end_index--;
        }
    }

    cout << count << "\n";
}

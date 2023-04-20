vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> minH;
    for (int i = 0; i < n; i++)
    {
        minH.push(arr[i]);
        if (minH.size() > k)
        {
            minH.pop();
        }
    }
    while (!minH.empty())
    {
        v.push_back(minH.top());
        minH.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}
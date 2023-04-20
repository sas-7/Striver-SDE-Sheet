typedef pair<int, pair<int, int>> p;
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
{
    // Write your code here.
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    priority_queue<p> pq;
    set<pair<int, int>> s;
    vector<int> v;
    pq.push({a[n - 1] + b[n - 1], {n - 1, n - 1}});
    s.insert({n - 1, n - 1});
    while (k--)
    {
        p cur = pq.top();
        pq.pop();
        int i = cur.second.first, j = cur.second.second;
        v.push_back(cur.first);
        if (s.find({i, j - 1}) == s.end())
        {
            pq.push({a[i] + b[j - 1], {i, j - 1}});
            s.insert({i, j - 1});
        }
        if (s.find({i - 1, j}) == s.end())
        {
            pq.push({a[i - 1] + b[j], {i - 1, j}});
            s.insert({i - 1, j});
        }
    }
    return v;
}
#include <vector>

class priorityQueue
{
    vector<int> pq;

public:
    priorityQueue()
    {
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size();
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq[0];
    }

    void insert(int data)
    {
        pq.push_back(data);
        int cIdx = pq.size() - 1;
        while (cIdx > 0)
        {
            int pIdx = (cIdx - 1) / 2;
            if (pq[pIdx] > pq[cIdx])
            {
                int temp = pq[cIdx];
                pq[cIdx] = pq[pIdx];
                pq[pIdx] = temp;
            }
            else
            {
                break;
            }
            cIdx = pIdx;
        }
    }

    int removeMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        // Down-heapify
        int pIdx = 0;
        int lcIdx = 2 * pIdx + 1;
        int rcIdx = 2 * pIdx + 2;
        while (lcIdx < pq.size())
        {
            int minIdx = pIdx;
            if (pq[minIdx] > pq[lcIdx])
            {
                minIdx = lcIdx;
            }
            if (rcIdx < pq.size() && pq[minIdx] > pq[rcIdx])
            {
                minIdx = rcIdx;
            }
            if (minIdx == pIdx)
            {
                break;
            }
            int temp = pq[minIdx];
            pq[minIdx] = pq[pIdx];
            pq[pIdx] = temp;
            pIdx = minIdx;
            lcIdx = 2 * pIdx + 1;
            rcIdx = 2 * pIdx + 2;
        }
        return ans;
    }
};
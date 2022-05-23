#include <iostream>


#include <stack>
#include <queue>
#include <map>
#include <set>

void testStack()
{
    int packet = 10000;
    for (int i = 1; i <= 8; i++)
    {
        std::set<int> s;
        for (int j = 0; j < packet + pow(10, i); j++)
        {
            s.insert(rand() * rand() % 1000000);
        }
        auto t0 = clock();
        for (int j = 0; j < packet; j++)
        {
            auto a = s.erase(rand() % 100000);
        }
        std::cout << pow(10, i) << ", " << clock() - t0 << ", " << (17 + sizeof(int)) * pow(10, i) << "\n";
        //auto t1 = clock();
        //for (int j = 0; j < packet; j++)
        //{
        //    s.pop();
        //}
        //std::cout << clock() - t1 << ", " << sizeof(int) * pow(10, i) << std::endl;
    }
}


int main()
{
    testStack();
    return 0;
}
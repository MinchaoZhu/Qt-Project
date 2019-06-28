#ifndef FUNC_H
#define FUNC_H

#include <vector>

#define ASC 0
#define DEC 1
typedef int sortType;

using namespace std;
class func
{
public:
    func();
    vector<int> sort(vector<int>&, sortType);
private:
    static int cmpAsc(const void *a, const void *b);
    static int cmpDec(const void *a, const void *b);
};

#endif // FUNC_H

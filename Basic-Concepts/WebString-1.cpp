// WebString-1.cpp
//
#include <Awesomium/WebCore.h>
#include <Awesomium/STLHelpers.h>

#include <iostream>
#include <string>

using namespace std;
using namespace Awesomium;

int main()
{
    WebString wstr(WSLit("hello"));
    cout << wstr << endl;
}

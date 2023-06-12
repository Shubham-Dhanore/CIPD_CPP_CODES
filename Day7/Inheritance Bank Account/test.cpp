#include <iostream>
#include<cstring>

class Demo{
try
{
    throw 10;
}
catch (float err)
{
    std::cerr << err << '\n';
}
};

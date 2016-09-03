#include <iostream>
#include <string>

#include <assert.h>

static int count = 1;
void swap(std::string& str, int xpos, int ypos)
{
    assert((xpos >= 0) && (xpos < str.size()));
    assert((ypos >= 0) && (ypos < str.size()));

    char temp = str[xpos];
    str[xpos] = str[ypos];
    str[ypos] = temp;
}

void fullArrange(std::string str, int beg, int end)
{
    if(beg == end)
    {
        std::cout<<"The "<<count<<" arrangement is "<<str<<std::endl;
        ++ count;
    }
    else
    {
        for(int i = beg; i != end; ++ i)
        {
            swap(str, beg, i);
            fullArrange(str, beg + 1, end);
            swap(str, beg, i);
        }
    }
}

int main()
{
    std::string test = "test";
    fullArrange(test, 0, test.size());

    return 0;
}


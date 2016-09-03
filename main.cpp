#include <iostream>
#include <vector>
#include <string>

#include <assert.h>

static int count = 1;
void swap(std::string& str, int xpos, int ypos)
{
    char temp = str[xpos];
    str[xpos] = str[ypos];
    str[ypos] = temp;
}

void reverse(std::string& str, int xpos, int ypos)
{
    for(; xpos < ypos; ++ xpos, -- ypos)
        swap(str, xpos, ypos);
}

void allRange(std::string& str, int len)
{
    if(len < 2)
        return;

    while(true)
    {
        std::cout<<count<<" "<<str<<std::endl;

        int i, j;
        for(i = len - 2; i >= 0; -- i)
        {
            if(str[i] < str[i + 1])
                break;
            else if(i == 0)
                return;
        }
        std::cout<<"i = "<<i;

        for(j = len - 1; j > i; -- j)
        {
            if(str[j] > str[i])
                break;
        }
        std::cout<<" j = "<<j;

        swap(str, i, j);
        std::cout<<str<<" ";
        reverse(str, i + 1, len - 1);
        std::cout<<str<<std::endl;
        ++ count;
    }
}

int main()
{
    std::string str = "abc";
    allRange(str, str.size());

    return 0;
}


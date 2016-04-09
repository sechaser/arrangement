#include <iostream>
#include <vector>

#define target 26

int main()
{
    std::vector<int> nums;
    std::vector<int> pos;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int flag = 0;
    int i, j;

    for(i = 0; i != nums.size(); ++ i)
    {
        for(j = i + 1; j != nums.size(); ++ j)
        {
            if(nums[i] + nums[j] == target)
            {
                pos.push_back(i);
                pos.push_back(j);
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }

    std::cout<<pos[0]<<" "<<pos[1]<<std::endl;

    return 0;
}


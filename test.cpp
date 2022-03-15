#include <vector>
#include <CL/opencl.hpp>

int main()
{
    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);

    return 0;
}
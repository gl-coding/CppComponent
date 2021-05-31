#include <boost/filesystem/path.hpp> 
#include <boost/filesystem/operations.hpp>
 
int main()
{
    std::string exePath = boost::filesystem::initial_path<boost::filesystem::path>().string();
    return 0;
}
 
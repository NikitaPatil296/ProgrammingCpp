#include <fstream>
#include <string>

class RAII_File{

private:
    std::fstream file;
public:
    
    RAII_File(const std::string& filename, std::ios::openmode mode);
    std::fstream& get();
    ~RAII_File();

};
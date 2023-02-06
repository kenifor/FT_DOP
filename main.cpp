#include "../FolderTerrorist/FolderTerrorist.h"

int main(int argc, char *argv[])
{

    std::string dir = "D:\\qt\\FILE_TERROR-master\\myMedia";
    //std::cout << "Enter dir path"

    //std::filesystem::create_directory(dir);
    FolderTerrorist *terr = FolderTerrorist::getInstance();
    terr->setFolderName(dir);
    terr->setTheBorder(-1); // если -1, тогда террорист работает "бесконечно" и обновляет директорию в посиках новых файлов чтобы разрушить,а если не -1 то он разрушает

    terr->run(FolderTerrorist::DECRYPTION);

    return 0;
}

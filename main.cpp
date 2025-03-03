#include <QCoreApplication>
#include <QFileInfo>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //1.FileState

 //   class FileManager
//    {
        //public: //contaner
    //bool add(parametrs)
    //bool delete(parametrs)
    //bool update()
    //логер для вывода информации на экран

        //private: //contaner - храним пути к файлам
 //   }




    //QCoreApplication a(argc, argv);
    QFileInfo f_info("H:\\Desktop\\test\\a.txt");
    std::cout << f_info.exists() << std::endl;
    std::cout << f_info.size() << std::endl;
    bool fileexist = f_info.exists();
    int fileCurrentSize = f_info.size();
    while(1){
        f_info.refresh();
        if(fileexist != f_info.exists() || fileCurrentSize != f_info.size())
        {
            std::cout << f_info.exists() << std::endl;
            std::cout << f_info.size() << std::endl;
            fileexist=f_info.exists();
            fileCurrentSize=f_info.size();
        }
    }

    return 0;//a.exec();
}

#include <QCoreApplication>
#include <QFileInfo>
#include <iostream>

using namespace std;


class FileManager {
public :
    void AddFile( const QString& FileWay );
    void DeleteFile (const QString& FileWay);
    bool Update();
private:
    QList<QFileInfo> contaner;
};

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
    QCoreApplication a(argc, argv);
    QFileInfo fa_info("H:/Desktop/test/a.txt");
    QFileInfo fb_info("H:/Desktop/test/b.txt");
    QFileInfo fc_info("H:/Desktop/test/c.txt");
    std::cout << fa_info.exists() << std::endl;
    std::cout << fa_info.size() << std::endl;
    std::cout << fb_info.size() << std::endl;
    bool fileexist = fa_info.exists();
    int fileCurrentSize = fa_info.size();
    while(1){
        fa_info.refresh();
        if(fileexist != fa_info.exists() || fileCurrentSize != fa_info.size())
        {
            std::cout << fa_info.exists() << std::endl;
            std::cout << fa_info.size() << std::endl;
            fileexist=fa_info.exists();
            fileCurrentSize=fa_info.size();
        }
    }


    return 0;//a.exec();
}

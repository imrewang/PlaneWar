#include "MainScene.h"
#include <QtWidgets/QApplication>
#include <QResource>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //注册外部的二进制资源文件
    //QResource::registerResource(GAME_RES_PATH);

    MainScene w;
    w.show();
    return a.exec();
}

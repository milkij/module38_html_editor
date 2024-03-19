#include <QApplication>
#include "web_editor.h"
#include "ui_web_editor.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    web_editor *newWindow = new web_editor();
    newWindow->show();
    return QApplication::exec();
}

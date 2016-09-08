#include "mainwindow.h"
#include <QApplication>
#include <QtDBus/QtDBus>

//#include "test_adap.h"
#include "test_interface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   MainWindow w;



    //calling test() through proxy object
    local::MainWindow *m_window = new local::MainWindow("manoj.test.service.name", "/manojobjectpathname", QDBusConnection::sessionBus(), 0);
    qDebug() << "Result from 1# " << m_window->test("via setParent");

 //   w.show();

    return a.exec();
}

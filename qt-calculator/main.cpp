#include "calculator.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>


int main(int argc, char *argv[])
{
    // Some stuff here
    QApplication a(argc, argv);
    QTranslator translator;
    
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    
    for (const QString &locale : uiLanguages) 
    {
        const QString baseName = "qt-calculator_" + QLocale(locale).name();

        if (translator.load(":/i18n/" + baseName)) 
        {
            a.installTranslator(&translator);
            break;
        }
    }

    calculator w;
    w.show();

    return a.exec();
}

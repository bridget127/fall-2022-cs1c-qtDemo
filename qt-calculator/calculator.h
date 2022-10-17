#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>


// ======================================================================
// Forward declaration of the Ui::Calculator
// ======================================================================
QT_BEGIN_NAMESPACE
namespace Ui 
{ 
    class calculator; 
}
QT_END_NAMESPACE



// ======================================================================
// Class Calculator
// ======================================================================
class calculator : public QMainWindow
{
    Q_OBJECT

    private:
        Ui::calculator *ui;                     // Pointer to the UI
    
        double calcValue = 0.0;                 // Holds the value of the calculator
        char mathOperator;                      // Holds the math operator

    public:
        calculator(QWidget *parent = nullptr);
        ~calculator();

    private slots:
        void num_pressed();                     // Func to handle number button presses
        void math_button_pressed();             // Func to handle math operations
        void equal_button_pressed();            // Func to handle the equal button press
        void ac_button_pressed();               // Func to handle the AC button press
};



#endif // CALCULATOR_H
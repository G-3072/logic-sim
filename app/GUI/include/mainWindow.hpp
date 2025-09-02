#include <QMainWindow>
#include <QToolBar>
#include <QWidget>
#include <parts.hpp>
#include <logicView.hpp>

class MainWindow : public QMainWindow
{
public:
    MainWindow();
    ~MainWindow() = default;

    QToolBar toolbar();
private:
protected:

};
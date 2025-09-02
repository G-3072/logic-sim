#include <QWidget>
#include <QListWidget>
#include <QLineEdit>

class PartList : public QWidget
{
public:
    PartList();
    ~PartList() = default;

    void getParts(void);

    void addPart(void);
    void deletePart(void);
    void updatePart(void);
private:
    QListWidget parts;
    QLineEdit searchbar;
protected:
};
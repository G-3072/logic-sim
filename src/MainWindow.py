from PyQt5.QtWidgets import QWidget, QMainWindow, QApplication, QToolBar

app = QApplication([])

class MainWindow(QMainWindow):
    def __init__(self, width: int, height: int):
        super().__init__()
        
        self.setFixedHeight(height)
        self.setFixedWidth(width)
        
        self.toolbar = QToolBar("Toolbar")
        self.addToolBar(self.toolbar)
        

mainWindow = MainWindow(1200,800)
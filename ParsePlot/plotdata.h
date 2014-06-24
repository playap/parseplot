#ifndef PLOTDATA_H
#define PLOTDATA_H

#include <QDialog>

namespace Ui {
    class PlotData;
}

class PlotData : public QDialog
{
    Q_OBJECT

public:
    explicit PlotData(QWidget *parent = 0);
    ~PlotData();
    void plot(QString fpath,QVector <double> dX, QVector <double> dData[], QString SensorSelected);
    int lastStart;
    QString fPath;
    int letxScale;
    int letyScale;

protected:
   void closeEvent( QCloseEvent* ev );

private:
    Ui::PlotData *ui;

private slots:
    void on_printButton_clicked();
    void on_savPDF_clicked();
    void on_scaleOnlyX_pressed();
    void on_scaleBoth_pressed();
    void on_scaleOnlyY_pressed();
    void contextMenuRequest(QPoint pos);
    void xFullZoom();
    void xyFullZoom();
    void x60SecondZoom();
    void x30SecondZoom();
    void x10SecondZoom();
    void x5SecondZoom();
    void x1SecondZoom();
    void x1mSecondZoom();
    void removeChannel1();
    void removeChannel2();
//    void removeChannel3();
//    void removeChannel4();
//    void removeChannel5();
//    void removeChannel6();
    void addChannel1();
    void addChannel2();
   // void addChannel3();
   // void addChannel4();
  //  void addChannel5();
   // void addChannel6();
    void removeAllBut1();
    void removeAllBut2();
 //   void removeAllBut3();
//    void removeAllBut4();
//    void removeAllBut5();
//    void removeAllBut6();
    void addAll();
};
#endif // PLOTDATA_H

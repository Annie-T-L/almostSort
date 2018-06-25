#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void ascend(int n1, int n2)
    {
        QVector<int>ve1(n1);
        for(int i1=0;i1<n1;i1++)
        {   ve1[i1] = qrand()%200;  }
        int si2 = n2,
                si3 = n1-si2, k1;
        QVector<int>ve2(si2);
        QVector<int>ve3(si3);
        for(int i2=0;i2<si2;i2++)
        {   ve2[i2] = ve1[i2];  }
        for(int i3=1;i3<si3;++i3)
        {   ve3[i3] = ve1[n2+i3];  }
        ve3.remove(0,1);
        k1 = ve1[n2];
        std::sort(ve2.begin(),ve2.end());
        std::sort(ve3.begin(),ve3.end());
        QVector<int>ve4;
        ve4.append(ve2);
        ve4.append(k1);
        ve4.append(ve3);
        qDebug() << ve1 <<"\n  "<< n2 << k1 << " -- "<< ve4;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.ascend(20,15);

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}

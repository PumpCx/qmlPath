#ifndef QMLPATH_H
#define QMLPATH_H

#include <QQuickPaintedItem>
#include <QPainterPath>


class QmlPath : public QQuickPaintedItem
{
    Q_OBJECT
public:
    QmlPath();
    virtual ~QmlPath();

    Q_INVOKABLE void pressEvent(const QPointF &p);
    Q_INVOKABLE void moveEvent(const QPointF &p);
    Q_INVOKABLE void releaseEvent(const QPointF &p);
    virtual void paint(QPainter *painter) override;

private:
    QPainterPath m_path;
};

#endif // QMLPATH_H

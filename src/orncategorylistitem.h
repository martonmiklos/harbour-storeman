#ifndef ORNCATEGORYLISTITEM_H
#define ORNCATEGORYLISTITEM_H

#include <QString>
#include <QList>

class QJsonObject;

struct OrnCategoryListItem
{
    friend class OrnCategoriesModel;

    OrnCategoryListItem(const QJsonObject &jsonObject);

    static QString categoryName(quint32 tid);

    quint32 categoryId;
    quint32 appsCount;
    quint32 depth;
    QString name;
    QList<quint32> parents;
};

#endif // ORNCATEGORYLISTITEM_H

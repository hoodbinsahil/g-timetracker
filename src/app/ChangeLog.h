/**
 ** This file is part of the G-TimeTracker project.
 ** Copyright 2015-2016 Nikita Krupenko <krnekit@gmail.com>.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef CHANGELOG_H
#define CHANGELOG_H

#include <QObject>
#include <QVariant>

class ChangeLog : public QObject
{
    Q_OBJECT
public:
    explicit ChangeLog(QObject *parent = 0);

signals:
    void changesAvailable(const QVariantList &changes);

public slots:
    bool checkChanges(const QString &previousVersion, const QString &currentVersion);
};

#endif // CHANGELOG_H

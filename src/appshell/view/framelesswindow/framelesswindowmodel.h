/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MU_APPSHELL_FREMELESSWINDOWMODEL_H
#define MU_APPSHELL_FREMELESSWINDOWMODEL_H

#include <QObject>

class QWindow;

namespace mu::appshell {
class FramelessWindowController;
class FramelessWindowModel : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QRect titleBarMoveArea READ titleBarMoveArea WRITE setTitleBarMoveArea NOTIFY titleBarMoveAreaChanged)

public:
    explicit FramelessWindowModel(QObject* parent = nullptr);
    ~FramelessWindowModel();

    Q_INVOKABLE void init();

    QRect titleBarMoveArea() const;

public slots:
    void setTitleBarMoveArea(const QRect& area);

signals:
    void titleBarMoveAreaChanged(QRect titleBarMoveArea);

private:
    FramelessWindowController* m_controller = nullptr;
};
}

#endif // MU_APPSHELL_FREMELESSWINDOWMODEL_H

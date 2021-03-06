////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
//            Copyright (C) 2016 William McKIE                                                    //
//                                                                                                //
//            This program is free software: you can redistribute it and/or modify                //
//            it under the terms of the GNU General Public License as published by                //
//            the Free Software Foundation, either version 3 of the License, or                   //
//            (at your option) any later version.                                                 //
//                                                                                                //
//            This program is distributed in the hope that it will be useful,                     //
//            but WITHOUT ANY WARRANTY; without even the implied warranty of                      //
//            MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                       //
//            GNU General Public License for more details.                                        //
//                                                                                                //
//            You should have received a copy of the GNU General Public License                   //
//            along with this program.  If not, see <http://www.gnu.org/licenses/>.               //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////
#include "plugin.hpp"

#include <StoiridhControlsTemplates/Control>
#include <StoiridhControlsTemplates/Padding>

#include <StoiridhControlsTemplates/private/bootstrap/qmlextensionplugin_p.hpp>

#include <QtQml/qqml.h>

namespace SCT = StoiridhControlsTemplates;

void StoiridhControlsPrivatePlugin::registerTypes(const char *uri)
{
    // @uri Stoiridh.Controls.Private

    // internal API
    SCT::Bootstrap::QmlExtensionPlugin::qmlRegisterInternalTypes(uri);

    // controls
    qmlRegisterType<SCT::Control>();
    qmlRegisterType<SCT::Padding>();
}

void StoiridhControlsPrivatePlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    QQmlExtensionPlugin::initializeEngine(engine, uri);

    // internal API
    SCT::Bootstrap::QmlExtensionPlugin::init(engine);
}

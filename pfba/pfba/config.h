//
// Created by cpasjuste on 29/05/18.
//

#ifndef PFBA_CONFIG_H
#define PFBA_CONFIG_H

#include "c2dui_config.h"

class PFBAConfig : public c2dui::Config {

public:

    PFBAConfig(const std::string &home, int version);

};

#endif //PFBA_CONFIG_H
